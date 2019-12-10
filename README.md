# MQ-2 (Semiconductor Sensor for Combustible Gas)

## Table of Contents

* [Introduction](#Introduction)
* [Bill of Materials/Budget](#B)
* [Time Commitment](#T)
* [Mechanical Assembly](#M)
* [Pcb Soldering](#P)
* [Power Up](#PU)
* [Unit Testing](#UT)
* [Production Testing](#PT)
* [Reproducible?](#R)





## <a name="Introduction"> Introduction </a>

<p> The MQ-2 is a Metal Oxide Semiconductor that detects LPG, Smoke, Alcohol,Propane, Hydrogen, Methane and Carbon Monoxide. It does this by looking at change of resistence before and after a gas comes in contact with the material. These concentrations can range anywhere from 200 - 10,000ppm. The sensor is great for a multiple range of gas detection, and can be used in a ton of industrial, and at home areas. This Mq-2 sensor from Willwin is a very low-cost, and very responsive sensor. The operating voltage is 5v with it consuming <800mw of energy. It has very easy wiring, and works perfectly with the stm32 blue pill.<p>
 
## UML-Diagram

![image of packages](https://github.com/lucasfini/SmartHome/blob/master/images/UML.png)

![image of packages](https://github.com/lucasfini/SmartHome/blob/master/images/systemdiagram.png)

## <a name="B"> Bill of Materials/Budget </a>

The required price for my whole project is about $100. This is the price if you are a student at humber, and have collected the parts kit at the beginning of semester 1. If you do not have the parts kit, you will need to pay an extra $120 dollars for the parts kit. I also used the schools prototype lab to get my case and pcb made. If you would like to go to a external dealer, the price will increase on top of the $220 already spent for the parts and the kit. If you are a student the required materials will be below for you to view. 


![image of budget](https://github.com/lucasfini/SmartHome/blob/master/images/budget.png)


## <a name="T"> Time Commitment </a>

The first time Commitment I will talk about is the CENG-317 schedule. You will get 14 weeks to complete this hardware assignment. Each week is a new task to do, some will take longer than others. The weeks that most people have difficulties on is week 9 and 11. These weeks are the PCB solder and Enclosure due dates. Since you need external equipment to do these two weeks, it will be more difficult to find the time to do them. Plus, if you design your enclosure or pcb wrong, you will need to keep on trying until you get them right. Note: Try to be ahead for these two weeks, just incase something unexpected happens. 

Now, this is for people that are building this on their free time. If you were to have all the equipment, and just needed to get the pcb and enclosure it should take you about a week, because of the shipping of pcb and enclosure. If you already have a pcb and enclosure you can realistically do this in a weekend. That is only if you have everything with you and are prepared. 

![image of schedule](https://github.com/lucasfini/SmartHome/blob/master/images/sch.png)

## <a name="M"> Mechanical Assembly </a>

Wanna learn how to probably setup,code,wire,and enclose?  **Instructions Below**
Side Note: Before starting please make sure you have the materials listed above, in the budget section. 

1. Install [Arduino](https://www.arduino.cc/en/main/software)
2. To learn how to program the STM32 Bluepill we will start with a simple blink program. First we need to install some board managers. Go to Tools>Boards Manager and install STM32F4xx boards and STM32F1xx/GD32F1xx baords.

![image of baord](https://github.com/lucasfini/SmartHome/blob/master/images/Boards.png)

3. Next go to Files>Examples>Basics>Blink. Change the code to how it is below.

![image of blinkcode](https://github.com/lucasfini/SmartHome/blob/master/images/blink.png)

4.Now you will need to setup the device on your breadboard. Make sure to switch the BOOT0 on the blue pill from 0 to 1. This will put it in programming mode. The picture below will show you how to do it. Once done plug the FTDI programmer into your computer.

Pin Layout: Programmer to stm32
gnd to G
vcc to 5v
tx to a10
rx to a9

![image of breadboard](https://github.com/lucasfini/SmartHome/blob/master/images/realpic1.jpg)

5. Now go to tools and make sure to have similar options that are in the picture below. 

![image of breadboard](https://github.com/lucasfini/SmartHome/blob/master/images/toolsSettings.png)

6. Now once everthing is done, Click upload on the top left of arduino. It should show it compiling and once it is done, there should be a green light that will blink on the STM32.

![image of compile.](https://github.com/lucasfini/SmartHome/blob/master/images/FixedCode.png)






## <a name="P"> Pcb Soldering </a>

## <a name="PU"> Power Up</a>

## <a name="UT"> Unit Testing </a>

## <a name="PT"> Production Testing </a>

## <a name="R"> Reproducible?  </a>


