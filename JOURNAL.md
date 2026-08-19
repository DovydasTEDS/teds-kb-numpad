---
title: "teds-kb-numpad"
github: "your repo"
description: "A small RP2040 powered numpad!"
created_at: "2026-08-18"
---
  
# August 18th:  

I created the numpad matrix, and added an EC11 rotary encoder. I used the MX_SW_HS so that I can add hotswap support if the budget allows.
![alt text](https://cdn.hackclub.com/01a016b6-1c98-77d7-9111-199b715031ba/image.png)

Hours taken: **1.5**


![alt text](https://cdn.hackclub.com/01a016ca-cd92-7b31-a4ab-08e42cbb0baa/image.png)

I then added per-key SK6812MINI-E LEDs as well as a logic shifter so that the signal would be suitable for the LEDs.

Hours taken: **1.5**


![alt text](https://cdn.hackclub.com/01a016e7-f40a-74ea-abbf-eec55affbf32/image.png)

I placed all of the switches and diodes. I then connected all the diodes to the switches. After this, I placed all of the SK6812MINI-E LEDs. After placing them, I realised I was missing 1 GPIO pin for the LEDs so I will be removing the rotary encoder.

Hours taken: **2**

![alt text](https://cdn.hackclub.com/01a01708-2b9a-7344-86ea-55b2713b89c4/image.png)

I had to rotate everything because I forgot it was meant to be flipped. And then I connected all of the rows and columns together and to the XIAO RP2040.

Hours taken: **1**

![alt text](https://cdn.hackclub.com/01a0172f-7025-7dc9-8a5f-6195c527a566/image.png)

Finished the PCB! I had to fix some disconnected items. I then added a ground plane which the thermal reliefs are hopefully enough!
Next steps involve designing the case and writing some basic firmware!

Hours taken: **2.5**


# August 19th:

![cad case](https://cdn.hackclub.com/01a019f1-7d12-7fc0-bc2f-562b8ca8c8d5/image.png)

I imported the PCB into KiCad. I started of with the case. After making the plate, I then used the assembly and edit in place to design both the bottom and top. I also included a slot for the USBC of the devboard.

Hours taken: **3**

I then made the firmware quickly, just something simple so that it would work properly. I haven't made any extra layers but I will do that later.

Hours taken: **0.5**

Overall hours spent: **12**


BOM:  

|Item            |Link                                                 |LCSC Part No.|Price|Units|Total Price|Running Total|FIELD8|Notes        |FIELD10|Specific No. Neded|
|----------------|-----------------------------------------------------|-------------|-----|-----|-----------|-------------|------|-------------|-------|------------------|
|PCB             |                                                     |             |12   |1    |12         |12           |      |             |       |1                 |
|AliExpress      |                                                     |             |     |     |           |12           |      |             |       |                  |
|Xiao RP2040     |https://www.aliexpress.com/item/1005008233414789.html|             |8.61 |1    |8.61       |20.61        |      |             |       |1                 |
|Hotswap Socket  |https://www.aliexpress.com/item/1005007232040760.html|             |2.11 |1    |2.11       |22.72        |      |             |       |17                |
|Switches        |https://www.aliexpress.com/item/1005005930656897.html|             |15.41|1    |15.41      |38.13        |      |             |       |17                |
|Stabilisers     |https://www.aliexpress.com/item/1005006528731543.html|             |0    |1    |0          |38.13        |      |Already Owned|       |3                 |
|Keycaps         |https://www.aliexpress.com/item/1005009162201589.html|             |10.34|1    |10.34      |48.47        |      |             |       |17                |
|M3 8m Screw     |https://www.aliexpress.com/item/1005007264845313.html|             |0.81 |1    |0.81       |49.28        |      |             |       |12                |
|M3 Heatset OD4.2|https://www.aliexpress.com/item/1005003582355741.html|             |0    |1    |0          |49.28        |      |Already Owned|       |12                |
|LCSC            |                                                     |             |     |     |0          |49.28        |      |             |       |                  |
|SK6812MINI-E    |Already Owned                                        |C5149201     |0    |17   |0          |49.28        |      |             |       |17                |
|SN74LV1T125DBVR |Already Owned                                        |C473338      |0    |1    |0          |49.28        |      |             |       |1                 |
|1N4148W         |Already Owned                                        |C917030      |0    |17   |0          |49.28        |      |             |       |17                |
|0805W8F3300T5E  |330 Resistor (Already Owned)                         |C17630       |0    |1    |0          |49.28        |      |             |       |1                 |
|                |                                                     |             |     |     |0          |49.28        |      |             |       |                  |
|Case            |Self 3d Printed                                      |             |0    |1    |0          |49.28        |      |             |       |1                 |
|                |                                                     |             |     |     |Total:     |49.28        |      |             |       |                  |
