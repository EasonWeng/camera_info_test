#include <camera_info.h>
int main(int argc, char** argv)
{
	ros::init(argc, argv, "camera_info_test_node");
	ros::NodeHandle nh;
	//sensor_msgs::CameraInfo cinfo_msg = boost::make_shared<sensor_msgs::CameraInfo>(cinfo_mgr.getCameraInfo());
	CameraInfo CCameraInfo(nh);
	ros::spin();
	return 0;
}
