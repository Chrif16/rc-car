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
| number of parts | part | link | price |
| :--- | :--- | :--- | :--- |
| 1 | esp32 | https://www.aliexpress.us/item/3256806511435816.html?spm=a2g0o.productlist.main.35.50a17404qg2sMM&algo_pvid=7e84d8cb-fa89-442f-999f-d58892ce5039&algo_exp_id=7e84d8cb-fa89-442f-999f-d58892ce5039-32&pdp_ext_f=%7B%22order%22%3A%22818%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%213.22%212.90%21%21%213.22%212.90%21%400be71e1e17899161064038267e0e1c%2112000038037004190%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3Aa568ec5c%3Bm03_new_user%3A-29895&curPageLogUid=e6UFLsi9fy9z&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006697750568%7C_p_origin_prod%3A&_gl=1*eho8lx*_gcl_au*NDE2MzcwMTM1LjE3ODc3NjA3MDU.*_ga*MzQ3MzY0NzE5LjE3Nzk3OTY1MDE.*_ga_VED1YSGNC7*czE3ODk5MTYwNDEkbzE4JGcxJHQxNzg5OTE2MzA1JGo1OCRsMCRoMA.. | 5.70$ |
| 1 | 2 relay module motor driver | https://www.aliexpress.us/item/3256812944770563.html?spm=a2g0o.productlist.main.6.1c2a1d62gyZG2K&algo_pvid=9f0d8d1d-30c9-4c3a-b835-4b52d1b1d959&algo_exp_id=9f0d8d1d-30c9-4c3a-b835-4b52d1b1d959-5&pdp_ext_f=%7B%22order%22%3A%221%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%210.97%210.74%21%21%216.49%214.93%21%402101c4b817899166466603136e0f78%2112000060321699189%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3c3ee12f%3Bm03_new_user%3A-29895&curPageLogUid=hJFLP9Yofirw&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005013131085315%7C_p_origin_prod%3A | 1.01$ |
| 1 | Servo Motor | https://www.aliexpress.us/item/3256806097043668.html?spm=a2g0o.productlist.main.2.58f1671bY7LIt3&algo_pvid=78571eef-9ec2-4a31-9481-dca7a0e36a19&algo_exp_id=78571eef-9ec2-4a31-9481-dca7a0e36a19-1&pdp_ext_f=%7B%22order%22%3A%225933%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.28%211.09%21%21%212.28%211.09%21%402101e75417899168065317825e0d0d%2112000036603734127%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3c3ee12f%3Bm03_new_user%3A-29895%3BpisId%3A5000000210782946&curPageLogUid=tXPUr3IBPYC0&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006283358420%7C_p_origin_prod%3A | 2.28$ |
| 1 | battery enclosures | https://www.aliexpress.us/item/3256802150430323.html?spm=a2g0o.productlist.main.1.46314a39hNWMpA&algo_pvid=b27380b2-4e87-40ab-a0d5-da4ba22fffd9&algo_exp_id=b27380b2-4e87-40ab-a0d5-da4ba22fffd9-0&pdp_ext_f=%7B%22order%22%3A%221583%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%211.43%210.86%21%21%211.43%210.86%21%40213ba8cc17811940061264831eab0e%2112000020155944453%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A18fdee69%3Bm03_new_user%3A-29895&curPageLogUid=IUHm0nbRxOM3&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005002336745075%7C_p_origin_prod%3A&_gl=1*8mbl24*_gcl_au*MjA1Mzc2Nzk0OC4xNzc5Nzk2NTAx*_ga*MzQ3MzY0NzE5LjE3Nzk3OTY1MDE.*_ga_VED1YSGNC7*czE3ODExOTM2MzYkbzckZzEkdDE3ODExOTQwMDYkajIwJGwwJGgw | 1.52$ |
| 1 | yellow motor | https://www.aliexpress.us/item/3256802470170834.html?spm=a2g0o.productlist.main.2.678f315ex1Qzvm&algo_pvid=5bc428f8-9b10-4ef6-93b5-a479178659f8&algo_exp_id=5bc428f8-9b10-4ef6-93b5-a479178659f8-1&pdp_ext_f=%7B%22order%22%3A%2278%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%213.07%211.09%21%21%213.07%211.09%21%402101e80f17899170109873600e0f65%2112000052645655875%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3c3ee12f%3Bm03_new_user%3A-29895%3BpisId%3A5000000210782946&curPageLogUid=BQdltEuPxhCV&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005002656485586%7C_p_origin_prod%3A | 1.535$ |
| 1 | Jumper Wires | https://www.aliexpress.us/item/3256810062711054.html?spm=a2g0o.productlist.main.17.49e350b8j8KvAS&algo_pvid=d6feb1b5-a38d-403f-857f-b16e6db432bf&algo_exp_id=d6feb1b5-a38d-403f-857f-b16e6db432bf-16&pdp_ext_f=%7B%22order%22%3A%221172%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.50%210.99%21%21%212.50%210.99%21%40214100f417811941409597287e9b49%2112000051674774613%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A18fdee69%3Bm03_new_user%3A-29895%3BpisId%3A5000000207262936&curPageLogUid=N9leTiRH1nE8&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010249025806%7C_p_origin_prod%3A&_gl=1*gv0kjr*_gcl_au*MjA1Mzc2Nzk0OC4xNzc5Nzk2NTAx*_ga*MzQ3MzY0NzE5LjE3Nzk3OTY1MDE.*_ga_VED1YSGNC7*czE3ODExOTM2MzYkbzckZzEkdDE3ODExOTQxNTQkajQ5JGwwJGgw | 5.15$ |
| 9 | ball bearings 4mm * 9mm | https://www.aliexpress.us/item/3256808569565415.html?spm=a2g0o.productlist.main.3.3ff8sBRisBRi7R&algo_pvid=a7d9e075-a3e1-446a-ad10-217bafda5a26&algo_exp_id=a7d9e075-a3e1-446a-ad10-217bafda5a26-2&pdp_ext_f=%7B%22order%22%3A%22922%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%216.54%210.99%21%21%2143.55%216.57%21%4021033b3317899173304203110e0fe9%2112000060473051461%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3c3ee12f%3Bm03_new_user%3A-29895%3BpisId%3A5000000210782945&curPageLogUid=g33mIyGF0hLZ&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008755880167%7C_p_origin_prod%3A | 17.64$ |
| 4 | wheels | https://www.aliexpress.us/item/3256812092750293.html?spm=a2g0o.productlist.main.23.2b3f1e00EHyb6R&algo_pvid=b1229523-0d5c-4395-ba8b-86c8cc5b5e62&algo_exp_id=b1229523-0d5c-4395-ba8b-86c8cc5b5e62-22&pdp_ext_f=%7B%22order%22%3A%224%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%216.76%210.99%21%21%2145.06%216.62%21%402103292b17899174417511149e0f6e%2112000057973220286%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3c3ee12f%3Bm03_new_user%3A-29895%3BpisId%3A5000000210782945&curPageLogUid=74EfZSYtkdbf&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005012279065045%7C_p_origin_prod%3A | 6.67$ |
| ? | PLA plastic for 3d printing |  | ?$ |
|  | total |  | >41.505$ |
# How to build:

For screws and similar items, it is recommended to find the cheapest in your location. first 3d print all the parts in the cad folder except for the assemblies(car , chassis) then press fit the ball bearings in their spots on the assembly, then press fit and screw the chassis parts in place, then screw the components in place, then screw the gears in place, then run a metal wire through the hole above the servo motor and into the servo, then solder all the components together, then press fit all the wheels in place, then put the magnets on the pillars on the chassis and on the shell, then place the shell of the car on top connected by the magnets
# Zine

