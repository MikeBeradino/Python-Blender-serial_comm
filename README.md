# python_blender_serial
Using Blender to control a Arduino micro controller via serial communication.

This is working on Linux/Mac using Blender v2.78 (DONT USE v2.78a/b/c..)  http://download.blender.org/release/Blender2.78/

- Open your Blender /Contents/Resources/usr/lib/blender/2.78/python/bin/
- Drop pip into bin folder (try the one in this repository) or Download get-pip.py 

- Open Blender /Contents/Resources/2.78/python/lib/python3.5/
- Unzip Pip.zip
- Drop pip floder into python3.5

- Open Blender

- In the Blender console 
    
    - import pip
    - pip.main(['install', 'pySerial'])


The .ino can be installed on to your Arduino compatible mico controller.

Verify that your baud rate / serial port is the same as the .blend file.


If there are issues installing pySerial via PIP into the Blender python. (see https://blender.stackexchange.com/questions/56011/how-to-use-pip-with-blenders-bundled-python and https://blender.stackexchange.com/questions/81957/blender-2-78c-on-centos-python-environment)

