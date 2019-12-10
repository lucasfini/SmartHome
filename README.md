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

System Diagram

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

Pin Layout:

<p>Programmer to stm32<p>
<p>gnd to G<p>
<p>vcc to 5v<p>
<p>tx to a10<p>
<p>rx to a9<p>

![image of breadboard](https://github.com/lucasfini/SmartHome/blob/master/images/stm32-f232.png)

![image of breadboard](https://github.com/lucasfini/SmartHome/blob/master/images/realpic1.jpg)

5. Now go to tools and make sure to have similar options that are in the picture below. 

![image of breadboard](https://github.com/lucasfini/SmartHome/blob/master/images/toolsSettings.png)

6. Now once everthing is done, Click upload on the top left of arduino. It should show it compiling and once it is done, there should be a green light that will blink on the STM32. If there is an issue try hitting the reset button on the STM32 and try uploading again. 

![image of compile.](https://github.com/lucasfini/SmartHome/blob/master/images/FixedCode.png)

7. Now that all that is done with we can continue with attaching the buzzer, and MQ-2 Gas sensor.
The New Connections will be:

![image of completed connections](https://github.com/lucasfini/SmartHome/blob/master/images/Connections.png)

![image of completed breadbaord.](https://github.com/lucasfini/SmartHome/blob/master/images/Bread.jpeg)

## <a name="P"> Pcb and Soldering </a>

Now that we have the breadboarding portion completed, lets move on to PCB completion. I did have some difficulty making the PCB and had to remake my PCB 3 times to get it working perfectly. Note: When imported a part from the internet to fritzing, even though it says it might be the part you need make sure its the right dimentions. This happened to me with my STM32,and I had to remake the PCB board. Another note: If you can't find the right parts online or in their internal library, use a **Generic female Header**. It can be used in place of most parts. After designing the PCB you should send the gerber files to the prototype lab so that they can make your PCB. Takes 1-2 days, depending on time and demand. The solder wasn't to difficult, just make sure you take your time, and make sure no two connections aren't soldered together. 

  ![Image of Pcb](https://github.com/lucasfini/SmartHome/blob/master/images/PCB%20Final.png)
  
 Bottom of the PCB board. I wanted everything on the top, so I made sure to put on the wire on the bottom. Since all the wiring is on the bottom, that means most of the soldering is on the bottom. 
 
  ![Image of Pcb](https://github.com/lucasfini/SmartHome/blob/master/images/pcbbottomcrop.jpg)
   
 Top of PCB board. This is where my STM32, MQ-2 Sensor, Buzzor and FTDI programmer will plug in. 
  ![Image of Pcb](https://github.com/lucasfini/SmartHome/blob/master/images/pcbtopcrop.jpg)
      
 How the PCB looks when it is plugged in and all the components are working.
  ![Image of Pcb](https://github.com/lucasfini/SmartHome/blob/master/images/pcboncrop.jpg)
  
  

## <a name="PU"> Power Up</a>

Before plugging anything in you want to look at your PCB board and make sure all the wiring goes to the right place, and all the soldering is done correctly. Once plugged in make sure that everything lights up and that nothing is out. If something isn't lit, try fidgeting with the component that isn't turned on. If it still isn't on look at your soldering and make sure all the vias and connections are soldered correctly. If it still isn't working go back to your PCB design and make sure all the connections are correct, and if that doesn't work then you might have a faulty component. 

 How the PCB looks when it is plugged in and all the components are working.
  ![Image of Pcb](https://github.com/lucasfini/SmartHome/blob/master/images/pcboncrop.jpg)
  

## <a name="UT"> Unit Testing </a>
I tested my product using a lighter. Since lighters contain butane the sensor should be able to sense the gas. As you can see below whenever I activate the lighter, the senser will senses a gas, and once it reaches above a safe thresh hold, the buzzer turns on. Once the thresh hold goes back down below 1100, it is safe and the buzzer turns off. With this sensor you will wanna configure it and make sure it is running properly. You also do need to allow it some time to heat up before use, or else the value might be higher than usual.

![Image of output](https://github.com/lucasfini/SmartHome/blob/master/images/output.png)
  
![Image of casetop](https://github.com/lucasfini/SmartHome/blob/master/images/casetop.jpeg)
  
![Image of caseside](https://github.com/lucasfini/SmartHome/blob/master/images/caseSide.jpeg)
  
  
## <a name="PT"> Production Testing </a>

With this product I only was able to test one gas, and the only reason for that is because all the other gasses are very dangerous, and hard to get a hold of. I was able to monitor the products data, and make sure everything was running correctly. If I was manufacturing multiple units of this product I would first make sure all soldering was done by automated machinary. It would speed up production time, and efficiency. Secondly, if this is used as a smoke sensor I would hard solder all the components to the PCB. I would do this because it would firstly, be more secure and secondly, users wouldn't have to worry about components coming loose. 

## <a name="R"> Reproducible?  </a>

I believe that by following my instructions the product is reproducible. The only thing I didn't include was the Arduino code for testing out the sensor and that is because I don't want future students fully copying this github.




