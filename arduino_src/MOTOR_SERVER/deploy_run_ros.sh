echo "===== START Uploading ====="
make upload clean

echo "===== LAUNCH ROS Topic ====="
rosrun rosserial_python serial_node.py /dev/ttyACM0