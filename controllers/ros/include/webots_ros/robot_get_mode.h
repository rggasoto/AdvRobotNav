#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_MODE_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_MODE_H

#include "ros/service_traits.h"


#include "robot_get_modeRequest.h"
#include "robot_get_modeResponse.h"


namespace webots_ros
{

struct robot_get_mode
{

typedef robot_get_modeRequest Request;
typedef robot_get_modeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

};
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::robot_get_mode > {
  static const char* value()
  {
    return "6bdda409d6bc6d1dc07d38ee9f6d0cde";
  }

  static const char* value(const ::webots_ros::robot_get_mode&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_mode > {
  static const char* value()
  {
    return "webots_ros/robot_get_mode";
  }

  static const char* value(const ::webots_ros::robot_get_mode&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_modeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_modeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_MODE_H
