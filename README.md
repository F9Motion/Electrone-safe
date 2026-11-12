# Electrone-safe
An Electronic safe with 4 numbers for password with Buzzer and Display for your snacs!
<img width="1580" height="854" alt="Снимок экрана 2026-11-11 213319" src="https://github.com/user-attachments/assets/0a8ea893-a27f-4501-9fce-d39c97e8efb7" />
# Why I made this
My mechanical safe project was rejected so I just did electronic safe to protect my snacs.
# Features
* You can chose your password
* Display for comfort
* Protection with 4 numbers
* Custom safe
# How it works
PCB from this safe have 12 buttons(10 for numbers 3 for **ENTER** and **BACKSPACE**).
You can change your password in firmware(Soon I teach you how to do it). When you push your password firmware give command to motor and motor open safe and show text "CORRECT". And after a few moment motor close safe. When the password is incorrect safe don't open. Just give you chance to retry. And in display you see text "INCORRECT". Safe can't block but don't worry if someone try to write all combination he have to write 10 000 variants to unlock the safe. Your snacs is protected.
# How to assemble
1. Order part from BOM
2. Solder parts to PCB
3. Glue mount between case and door.
4. Flash Raspberry pi pico(read "HOW TO FLASH")
5. Place PCB to door mount.
6. Glue door mount to door
7. Put your snacs to safe!
# How to Flash
1. Download Arduino IDE
2. Open my firmware and find text **PASSWORD**
3. Change it
4. Connect pico to PC
5. Upload firmware just by clicking this button
<img width="357" height="259" alt="Снимок экрана 2026-11-10 221446" src="https://github.com/user-attachments/assets/194f53c0-3f29-413a-bdf0-9cc6ce7a3d96" />
# Bill Of Material(BOM)

|Name             |Price (without shipping)|Link (if item have a link)|
|-----------------|------------------------|--------------------------|
|Raspberry pi pico|$2.74                   |https://ali.click/bl02r1b |
|Printing PCB     |$4                      |JLCPCB                    |
|Buttons          |$2.46                   |https://ali.click/kr02r1y |
|Buzzer           |$1.64                   |https://ali.click/tt02r1c |
|Display          |$1.63                   |https://ali.click/ty02r1x |
|Battery          |$5.26                   |https://ali.click/z212r1b |
|Servo Motor      |$1.47                   |https://ali.click/q512r1s |
|buttons.step     |$0.08                   |felament price only       |
|case.step        |$8.65                   |felament price only       |
|door mount.step  |$0.05                   |felament price only       |
|door .step       |$2.22                   |felament price only       |
|mount.step       |$0.99                   |felament price only       |

# Credits
Programs: Blender, KiCad, Arduino IDE
Work: Rasul
