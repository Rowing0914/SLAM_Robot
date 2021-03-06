## **SLAM and autonomous navigation with ROS + kinect + Arduino**

This is the project for the autonomous navigation of the mobile robot which is built from scratch by myself with a huge support from Dr.Stephen Alty at Royal Holloway, University of London



## Motivational Work

https://sungjik.wordpress.com/2015/09/28/my_personal_robotic_companion/



## Hardware

- [Raspberry Pi 3 Model B+](https://uk.rs-online.com/web/generalDisplay.html?id=raspberrypi&cm_mmc=UK-PPC-DS3A-_-google-_-2_UK_EN_LS_Raspberry_Pi_Exact-_-Raspberry__Pi_3B_Plus%7CCore-_-raspberry+pi+3+model+B%2B&matchtype=e&kwd-422198722056&s_kwcid=AL!7457!3!256895170717!e!!g!!raspberry%20pi%203%20model%20b%2B&gclid=Cj0KCQjwsZ3kBRCnARIsAIuAV_TD-TLJ1jnoByT4yTsRyDyGf-AAVdGOrT0tpEajDU69EfzKh4zLtZEaAlesEALw_wcB&gclsrc=aw.ds)
- [Microsoft x box kinect sensor bar only](https://www.amazon.co.uk/gp/product/B00AIPQXLM/ref=ppx_yo_dt_b_asin_title_o03_s00?ie=UTF8&psc=1)
- [xBox 360 Kinect sensor USB extension and power supply](https://www.amazon.co.uk/gp/product/B004ULYCVS/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1)
- [Freenove Super Starter Kit for Arduino](https://www.amazon.co.uk/gp/product/B06W2MGB7F/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1)
- [2X DC 6V 210RPM Encoder Motor Set DC Gear Motor with Mounting Bracket and Wheel](https://www.ebay.co.uk/itm/192432619100)
- [12V Battery Pack](https://www.amazon.co.uk/gp/product/B073JCZFKW/ref=ppx_yo_dt_b_asin_title_o09_s00?ie=UTF8&psc=1)
- [Motor Control Shield for Arduino](https://www.amazon.co.uk/gp/product/B073GRYT5R/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1)
- [DC DC Boost Converter Step-up](https://www.amazon.co.uk/gp/product/B01534P0OI/ref=ppx_yo_dt_b_asin_title_o05_s01?ie=UTF8&psc=1)
- [H&S® 4 x Heavy Duty 50mm Rubber Swivel Castor Wheels Trolley Furniture Caster Brake](https://www.amazon.co.uk/gp/product/B00FE5T1UG/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
- [5 pcs. FLAT STEEL MENDING REPAIR CONNECTOR JOINING PLATE 200MM X 80MM](https://www.amazon.co.uk/gp/product/B073WDDYZV/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
- [Am-Tech Nuts and Bolts (240 Pieces)](https://www.amazon.co.uk/gp/product/B004C22FE6/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
- [Duracell MN1500 Plus Power AA Size Batteries-Pack of 12](https://www.amazon.co.uk/gp/product/B005EJFLJC/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1)
- [Charcoal Companion CC6021, Cedar Grilling Plank, Wood, 14x30x3.81 cm, CC6021](https://www.amazon.co.uk/gp/product/B000OH7EBM/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)
- [Poweradd Pilot X7 20,000mAh Portable Universal External Power Bank, Red-Black](https://www.amazon.co.uk/gp/product/B00XVTJKCQ/ref=ppx_yo_dt_b_asin_title_o06_s02?ie=UTF8&psc=1)



## Tools

- [Rolson Tools 36039 Mini Tool Kit - 26 Pieces](https://www.amazon.co.uk/gp/product/B000WDXMG4/ref=ppx_yo_dt_b_asin_title_o00_s01?ie=UTF8&psc=1)
- [Soldering Iron Kit, 60W Adjustable Temperature Soldering-iron Gun Kit with 5 Soldering Tips, Desoldering Pump, Tin Wire Tube, Soldering Iron Stand, Tw](https://www.amazon.co.uk/gp/product/B06Y5HVCMG/ref=ppx_yo_dt_b_asin_title_o05_s00?ie=UTF8&psc=1)
- [Helix Oxford 12 inch 30cm Shatter Resistant Ruler](https://www.amazon.co.uk/gp/product/B00JS2H5XQ/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)
- [CONNEX DP8500052 Wood Screw Kit (215 Pieces)](https://www.amazon.co.uk/gp/product/B00B22VHO8/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)
- [Bahco 300-14-F15/16-Hp Toolbox Handsaw 14In](https://www.amazon.co.uk/gp/product/B0001GS12C/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1)
- [Hot Glue Gun, TOPELEK Heats Up Quickly 20W Mini Heating Hot Melt Glue Gun with Sticks(50pcs 100mm), ON-Off Switch for DIY Arts, Hobby, Craft, Home Rep](https://www.amazon.co.uk/gp/product/B06XFQDXTR/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1)



## Environment

- DELL Inspiron 15 7500
  - CPU: i7 7th Gen
  - GPU: GTX1060 Max Design
  - OS: Ubuntu 16.0.4 LTS
  - ROS: Kinetic
  - Python: 3.6.2
- Raspberry Pi
  - Model: 3 Model B+
  - OS: Light Ubuntu(I wanted to use Ubuntu)



## How to use

```shell
# ===== Server =====
$ export ROS_IP=ip_address
$ export ROS_MASTER_URI=http://ip_address_of_master:1131
$ cd ~/sketchbook/rosserial_test
# using arduino-make, we deploy the code(.ino file) followed by launching the ros topic
$ sh deploy_run_ros.sh

# ===== Local Machine =====
$ export ROS_IP=ip_address
$ export ROS_MASTER_URI=http://ip_address_of_master:1131
# check if the topic has been successfully launched
$ rostopic list
# go forward
$ rostopic pub /remote_control std_msgs/String "data: 'FORWARD'"
# turn left
$ rostopic pub /remote_control std_msgs/String "data: 'LEFT'"
# turn right
$ rostopic pub /remote_control std_msgs/String "data: 'RIGHT'"
# stop moving
$ rostopic pub /remote_control std_msgs/String "data: 'STOP'"
```



## Compile and Uploading files through CLI on Arduino

- I used [Arduino-mk](https://github.com/sudar/Arduino-Makefile)

```shell
# install arduino-mk
$ sudo apt-get install arduino-mk
$ make # verification of the code
$ make upload # upload the verified code
$ make upload clean # upload the verified code followed by removing the built directory
# for more details pls, check the git repo
```



## ROS on distributed machines

- Set `ROS_IP` on each machine: 
- Set an IP address/HOSTNAME of the master server as `ROS_MASTER_URI` on each machine

- Reference: http://wiki.ros.org/ROS/Tutorials/MultipleMachines



```shell
$ export ROS_IP=ip_address
# 11311 is the default port for rosmaster
$ export ROS_MASTER_URI=http://ip_address_of_master:1131 

# Test
# on master
$ roscore
$ rosrun rospy_tutorials listener.py

# on server
$ rosrun rospy_tutorials talker.py
```



![1552685720092](images/ros_tips.png)



## DC Motor Specification

[Specification Link](https://www.banggood.com/6V-210RPM-Encoder-Motor-DC-Gear-Motor-with-Mounting-Bracket-and-Wheel-p-1044064.html?akmClientCountry=GB&cur_warehouse=CN)

<img src="images/DC_Motor_specification.png" width=70%>

## History

1. [I have tried Cam Jam Edukit 3 Robotics](https://github.com/CamJam-EduKit/EduKit3)

   <img src="images/bought_pi.jpg" width=60%>

<img src="images/bought_camjam.jpg" width=60%>

<img src="images/camjam_complete.jpg" width=60%>

2. Try making it powerful by attaching metal plates

   <img src="images/robot_v1_1.jpg" width=60%>

<img src="images/robot_v1_2.jpg" width=60%>

hmm... does not look pretty good and it was quite unstable... Eventually it got broken.lol

3. So I have decided to refurbish the base by using wooden pranks

   <img src="images/robot_v2_1.jpg" width=60%>

<img src="images/robot_v2_2.jpg" width=60%>

<img src="images/robot_v2_3.jpg" width=60%>

<img src="images/robot_v2_4.jpg" width=60%>

this time it turned out that the legs was not stable... I mean it's obviously looks like a legless bouncing chicken.

4. So I bought two DC motors and a caster wheel for a chair! and replaced the chicken legs with them!

   <img src="images/robot_v3_1.jpg" width=60%>

<img src="images/robot_v3_2.jpg" width=60%>

<img src="images/robot_v3_3.jpg" width=60%>

5. Finally I moved on to playing with Kinect and solder a bit of the power supply cable of it to attach the DC DC converter which is connected to the portable power supply!

   <img src="images/kinect_solder.jpg" width=60%>

   <img src="images/kinect_test.jpg" width=60%>

<img src="images/kinect_mounted_temp.jpg" width=60%>
