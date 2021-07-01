# Two LEDs Connection (Robotic Eyes)

![5](https://user-images.githubusercontent.com/85455361/124195072-53de5880-dad2-11eb-94d5-1cc461bf0417.jpg)

# The Main Idea:
  
  Connect two Light Emiitidng Diodes for a robotic eyes. 
  
# Components:

1. Battery:

    Can be any type of battery 
  
    ![Battery](https://user-images.githubusercontent.com/85455361/124197780-fb11be80-dad7-11eb-825c-d4b8fc583ebe.jpg)

2. Voltage Regulator(5V):
    
    To regulate the voltage to supply the LEDs
    
    ![V R](https://user-images.githubusercontent.com/85455361/124197869-272d3f80-dad8-11eb-8bbb-68b0a3e4e6b2.jpg)

3. NPN Transistor (BJT) x6:
    
    As a switch.
    
    ![Transistor bjt](https://user-images.githubusercontent.com/85455361/124197902-36ac8880-dad8-11eb-82eb-371a40a69bb0.jpg)

4. RGB LED x2 (common cathode):
        
    As shown in figure the rgb LED is three LEDs in one. 
    
    ![Screenshot_1](https://user-images.githubusercontent.com/85455361/124198071-99058900-dad8-11eb-9e43-87b3f60fdec5.jpg)

5. Potentiometer x6: 

    For controlling 
    
    ![R](https://user-images.githubusercontent.com/85455361/124198130-b76b8480-dad8-11eb-9601-035ff3084c53.jpg)

6. Resistors x12:

    in diffrent values. 
    
    ![resistors](https://user-images.githubusercontent.com/85455361/124198166-cb16eb00-dad8-11eb-8bbf-87a813d9f934.jpg)


7. Capacitor x2:

    in diffrent values. 
    
    ![Capacitor](https://user-images.githubusercontent.com/85455361/124198186-d4a05300-dad8-11eb-844d-93406235b436.jpg)

# Connection:

## (1) Circuit Diagram:
    
   This connection shows my electronic schematic that I have done before the simulation to clarifying the idea.
   
![circuit (5)](https://user-images.githubusercontent.com/85455361/124195712-aa986200-dad3-11eb-9e54-8f92b90a18ff.png)


## (2) Tinkercad:

   note that: The connection is simpler than this in realistic but I use it just for a good view.

![LEDs Connections](https://user-images.githubusercontent.com/85455361/124195286-cbac8300-dad2-11eb-80e8-903bf3fda104.png)

# Video:

## Explain the video:

## Code: 

# Why LEDs Are In Parallel Connection:
  i used the parralel connection because: 
  1. I can control each rgb LED indivisually.
  2. If one of the rgb LED intruppted the other does not. 
  3. To make the robot wink, blink, and any special emote.
  
  ![Screenshot_2](https://user-images.githubusercontent.com/85455361/124197720-d7e70f00-dad7-11eb-8cdf-391bd9ccbe44.jpg)

# Why RGB LEDs? 

I used RGB LEDs to have more colors for different emojis for example red color will represent anger or green for happiness etc.

# Notes: 
  I used 3 potentiometers that each of them can control only one colour of the rgb LED because i am still not familiar with programming. It can be done by using only 1 potentiometer to control the rgb LED colours. 

# Suggested Ideas: 

### Using LDR Sensor:
Using LDR sensor to sense the light in the environment and control the tense of light. Of the tense of light is low the LEDs do not glow in the full potential for power saving.

![LDR](https://user-images.githubusercontent.com/85455361/124196724-a79e7100-dad5-11eb-84b4-7381540387ad.jpg)



