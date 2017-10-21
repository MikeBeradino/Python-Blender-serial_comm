# python_blender_serial


The easy solution is to just download this version of blender www.mikeberadino.com/blender/blender_2.78_with_pip.zip. It has PIP installed as well as pySerial.  

*if you have other packages to install 
- Open Blender
- In the Blender console 
    - import pip
    - pip.main(['install', 'WHATEVER PACKAGE U NEED'])
    
The process on the Arduino side is to:
-Flash the .ino file onto your Arduino compatible mico-controller via the Arduino IDE. Make note of the serial port you are using 

ie. (/dev/cu/usbmodem1411)

-Check that all is well, open the serial monitor 
    - tools>serialmonitor 
    - type H or L to toggle led on pin 13


The process on the Blender side is to:
- Open the .blend file in Blender
- Verify that your baud rate / serial port are correct in the 
    - on.py 
    - off.py 
    - Arduino.py
- Press the start button under the standalone player. 
- W & S will move the test cube and trigger serial events.




If you would rather configure your own version of blender here are some helpful links.
https://blender.stackexchange.com/questions/56011/how-to-use-pip-with-blenders-bundled-python
https://blender.stackexchange.com/questions/81957/blender-2-78c-on-centos-python-environment)
I have confirmed that this works on  Linux/Mac using Blender v2.78a (not v2.78/b/c..)  
http://download.blender.org/release/Blender2.78/


