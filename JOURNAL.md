---
title: "teds-kb-numpad"
github: "your repo"
description: "A small RP2040 powered numpad!"
created_at: "2026-08-18"
---
  
# August 18th:  

I created the numpad matrix, and added an EC11 rotary encoder. I used the MX_SW_HS so that I can add hotswap support if the budget allows.
![alt text](https://cdn.hackclub.com/01a016b6-1c98-77d7-9111-199b715031ba/image.png)

Hours taken: **2**


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

Hours taken: **2**