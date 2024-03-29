#ifndef WEBOTS_ROS_MESSAGE_CAMERA_SET_FOVREQUEST_H
#define WEBOTS_ROS_MESSAGE_CAMERA_SET_FOVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include "ros/types.h"
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"



namespace webots_ros
{
template <class ContainerAllocator>
struct camera_set_fovRequest_
{
  typedef camera_set_fovRequest_<ContainerAllocator> Type;

  camera_set_fovRequest_()
    : fov(0.0)  {
    }
  camera_set_fovRequest_(const ContainerAllocator& _alloc)
    : fov(0.0)  {
    }

    
   typedef double _fov_type;
  _fov_type fov;




  typedef boost::shared_ptr< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::camera_set_fovRequest_<std::allocator<void> > camera_set_fovRequest;

typedef boost::shared_ptr< ::webots_ros::camera_set_fovRequest > camera_set_fovRequestPtr;
typedef boost::shared_ptr< ::webots_ros::camera_set_fovRequest const> camera_set_fovRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::camera_set_fovRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'webots_ros

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b64273a7867a9308c925b84bc095dda";
  }

  static const char* value(const ::webots_ros::camera_set_fovRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/camera_set_fovRequest";
  }

  static const char* value(const ::webots_ros::camera_set_fovRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 fov\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::camera_set_fovRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.fov);

    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  };

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::camera_set_fovRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::camera_set_fovRequest_<ContainerAllocator>& v)
  {
        s << indent << "fov: ";
    Printer<double>::stream(s, indent + "  ", v.fov);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_CAMERA_SET_FOVREQUEST_H
