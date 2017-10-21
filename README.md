# python_blender_serial
Using blender to control arduino board via serial com.


You need to install the python dependencies into the Blender python. (see https://blender.stackexchange.com/questions/56011/how-to-use-pip-with-blenders-bundled-python and https://blender.stackexchange.com/questions/81957/blender-2-78c-on-centos-python-environment)

This is working on Linux/Mac using Blender v2.78.

- Open your Blender /Contents/Resources//usr/lib/blender/2.78/python/bin/
- Drop pip into bin folder (try the one in this repository) or Download get-pip.py 
- In the Blender console 
    
    >> import pip
    >> pip.main(['install', 'pySerial'])


The .ino can be installed on to your arduino compatable mico controller.

Verify that your baud rate / serial port is the same as the .blend file.
