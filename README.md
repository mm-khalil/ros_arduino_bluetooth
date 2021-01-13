# ROS Arduino Bluetooth Interfacing
ROS subscriber and publisher based bluetooth interfacing using Serial Arduino 

Arduino makes our life very easy as you know:
In order to connect a Bluetooth device which may be anyone this code helps you to connect it with Arduino and perform any task you want with your Android phone,
Make sure while uploading code in Arduino Controller that Rx and Tx pins must be unplug otherwise you are not able to burn code in Arduino and it while not work,
After burning code in controller again connect Rx and Tx pins to proper place and power it up then now your devices work very properly.

## To link ROS with Arduino IDE:
### INSTALL:
`sudo apt-get install ros-indigo-rosserial-arduino sudo apt-get install ros-indigo-rosserial`
### INSTALL CATKIN WS:
`cd /src`
`git clone https://github.com/ros-drivers/rosserial.git `
`cd `
`catkin_make `
`catkin_make install`
### INSTALL ROS LIB:
`cd /libraries rm -rf ros_lib rosrun rosserial_arduino make_libraries.py`
### INSTALL ARDUINO LIB:
`cd <some_empty_directory> rosrun rosserial_arduino make_libraries.py`
