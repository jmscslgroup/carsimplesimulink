#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "carsimplesimulink";

// For Block carsimplesimulink/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_carsimplesimulink_std_msgs_Float64> Sub_carsimplesimulink_20;

// For Block carsimplesimulink/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_carsimplesimulink_std_msgs_Float64> Pub_carsimplesimulink_17;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

