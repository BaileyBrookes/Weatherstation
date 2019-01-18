# Weatherstation
Firware for the 4B25: Embeeded Systems Coursewrok Project. Based on the Warp firmware by Dr Phillip Stanely Marbell


## How the firmware is written
By following the advice by removing the code within the while loop of warp-kl03-ksdk1.1-boot.c as well as removing the definitions and functions required, new firmware had been written that runs on the KL03

## New files:
There are two new drivers within src/boot:

   `devSSD1131.c/ devSSD1131.h`: This is the driver for the the OLED screen. COMPLETED

   `BLEModem.c/ BLEModem.c `: This is the driver for communicating with the sensor tag over Bluetooth.
   
   Note: I was uanable to get the sensortag to connect the the bluetooth modem pruchased. I talso esitmated the complexity in writing the UART driver for the modem. I am dissapointed in my progress in this error of the project na dwish I had realsied my shortcomings sooner.

## Repository structure
### Firmware
Contains the modified warp firmware for the project
### Wiring diagram
Hardware design
### Screen design
Excel was used to design the screen that shows the measurement values
### bdb31_coursework_6.pdf
Project report
