# rc-kart
a remote controlled mini car that takes inputs from a wiimote and steers when you tilt it sideways (like in mario kart) it uses one dc motor and one servo motor and is mostly 3d printable.
i got the inspiration from a core childhood memory of a show on national geographic where a kid and and an old guy made a go kart that was controlled with a wii remote and that was the moment i realised that i could use the remote for more than games.
(i started this project a year ago, gave up on it then decided to redo it again a month ago)
# First concept
<img width="1500" height="2000" alt="image" src="https://github.com/user-attachments/assets/43548e9a-a431-4a41-8625-1d150965f231" />
<img width="774" height="612" alt="image" src="https://github.com/user-attachments/assets/4d736b38-6aec-46dc-b5b1-633af5fafa5a" />

steering:
<img width="922" height="701" alt="image" src="https://github.com/user-attachments/assets/fb2ece9a-645f-4d50-a934-358add008cc2" />


# Schematics
the micro controller used is an esp32 and the project moves with a single motor and the servo motor controls the steeringand the batteries power everything 
<img width="1202" height="792" alt="Capture d&#39;écran 2026-09-20 152824" src="https://github.com/user-attachments/assets/c0089311-f8a8-4e24-8620-5350f96c8885" />


# 3D model
<img width="972" height="632" alt="Capture d&#39;écran 2026-09-13 123225" src="https://github.com/user-attachments/assets/cd58540c-691f-49fa-b433-6242233b1291" />
<img width="935" height="400" alt="Capture d&#39;écran 2026-09-13 123847" src="https://github.com/user-attachments/assets/81d87af0-ffe5-4043-808f-adf4408b67f2" />
<img width="996" height="402" alt="Capture d&#39;écran 2026-09-13 123840" src="https://github.com/user-attachments/assets/8cd2291b-1847-4a29-b1ea-47531c9591bd" />
<img width="1086" height="577" alt="Capture d&#39;écran 2026-09-13 123235" src="https://github.com/user-attachments/assets/acd975fb-05b1-42cc-b814-821c9a325cfa" />
<img width="836" height="622" alt="Capture d&#39;écran 2026-09-11 162325" src="https://github.com/user-attachments/assets/7e94399b-7811-4979-8818-96c5e4383c06" />
credits:
. 2 relay module model by Mike Scalora on grabcad
. battery holder model by PENNEL Patrice on grabcad
. servo motor model by Oleksandr Velykyi on grabcad
. wheel model by Bassem Ahmed on grabcad

# BOM

# How to build:

For screws and similar items, it is recommended to find the cheapest in your location. first 3d print all the parts in the cad folder except for the assemblies(car , chassis) then press fit the ball bearings in their spots on the assembly, then put the turning cog between the sliding parts, then screw the knob and the stopper on the turning part, then screw in place the servo and the arduino and the ultrasonic sensor then press fit the lithium battery and the charging module on the bottom part, then solder the wires between the components and place the top part on the bottom part in a way that makes it so that the servo fits into place

# Zine

