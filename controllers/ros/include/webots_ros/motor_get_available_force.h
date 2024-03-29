#ifndef WEBOTS_ROS_MESSAGE_MOTOR_GET_AVAILABLE_FORCE_H
#define WEBOTS_ROS_MESSAGE_MOTOR_GET_AVAILABLE_FORCE_H

#include "ros/service_traits.h"


#include "motor_get_available_forceRequest.h"
#include "motor_get_available_forceResponse.h"


namespace webots_ros
{

struct motor_get_available_force
{

typedef motor_get_available_forceRequest Request;
typedef motor_get_available_forceResponse Response;
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
struct MD5Sum< ::webots_ros::motor_get_available_force > {
  static const char* value()
  {
    return "627bacafebe3185005fa9040cedf1781";
  }

  static const char* value(const ::webots_ros::motor_get_available_force&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_get_available_force > {
  static const char* value()
  {
    return "webots_ros/motor_get_available_force";
  }

  static const char* value(const ::webots_ros::motor_get_available_force&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_get_available_forceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_available_force >::value();
  }
  static const char* value(const ::webots_ros::motor_get_available_forceRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_get_available_forceRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_available_force >::value();
  }
  static const char* value(const ::webots_ros::motor_get_available_forceRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_get_available_forceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_available_force >::value();
  }
  static const char* value(const ::webots_ros::motor_get_available_forceResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_get_available_forceResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_available_force >::value();
  }
  static const char* value(const ::webots_ros::motor_get_available_forceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_GET_AVAILABLE_FORCE_H
