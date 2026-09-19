#include <Bluepad32.h>

const float SMOOTHING_FACTOR = 0.2;  
const int DEADZONE = 40;           
GamepadPtr myGamepad = nullptr;     
float filteredTiltX = 0;          

void onConnectedGamepad(GamepadPtr gp) {
    myGamepad = gp;
    Serial.println("Wii Remote Connected!");
    myGamepad->setPlayerLEDs(1 << 0); 
}
void onDisconnectedGamepad(GamepadPtr gp) {
    if (myGamepad == gp) {
        myGamepad = nullptr;
        Serial.println("Wii Remote Disconnected!");
    }
}

void setup() {
    Serial.begin(115200);
    BP32.setup(&onConnectedGamepad, &onDisconnectedGamepad);
    BP32.forgetBluetoothKeys(); 
}

void loop() {
    BP32.update();

    if (myGamepad && myGamepad->isConnected()) {
        int rawTiltX = myGamepad->accelX(); 
        filteredTiltX = (rawTiltX * SMOOTHING_FACTOR) + (filteredTiltX * (1.0 - SMOOTHING_FACTOR));
        int steeringValue = (int)filteredTiltX;
        
        if (abs(steeringValue) < DEADZONE) {
            steeringValue = 0; 
        }
        bool throttle = myGamepad->buttons() & BUTTON_A;   // Pressing '2'
        bool reverse  = myGamepad->buttons() & BUTTON_B;   // Pressing '1'
        // swap this serial print with your Servo control code
        Serial.print(90-steeringValue); 
        // swap these serial prints with the pins used for the motor
        if (throttle) {
            Serial.print(" | Action: DRIVE FORWARD");
        } else if (reverse) {
            Serial.print(" | Action: REVERSE / BRAKE");
        } else {
            Serial.print(" | Action: COAST / STOP");
        }
        Serial.println();
    }
    
    delay(20);
}