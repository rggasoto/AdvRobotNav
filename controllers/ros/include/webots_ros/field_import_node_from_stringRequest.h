#ifndef WEBOTS_ROS_MESSAGE_FIELD_IMPORT_NODE_FROM_STRINGREQUEST_H
#define WEBOTS_ROS_MESSAGE_FIELD_IMPORT_NODE_FROM_STRINGREQUEST_H


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
struct field_import_node_from_stringRequest_
{
  typedef field_import_node_from_stringRequest_<ContainerAllocator> Type;

  field_import_node_from_stringRequest_()
    : field(0)
    , position(0)
    , nodeString()  {
    }
  field_import_node_from_stringRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , position(0)
    , nodeString(_alloc)  {
    }

    
   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _position_type;
  _position_type position;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nodeString_type;
  _nodeString_type nodeString;




  typedef boost::shared_ptr< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::field_import_node_from_stringRequest_<std::allocator<void> > field_import_node_from_stringRequest;

typedef boost::shared_ptr< ::webots_ros::field_import_node_from_stringRequest > field_import_node_from_stringRequestPtr;
typedef boost::shared_ptr< ::webots_ros::field_import_node_from_stringRequest const> field_import_node_from_stringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f47a09684279b85c2c8ae161048ce7d0";
  }

  static const char* value(const ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/field_import_node_from_stringRequest";
  }

  static const char* value(const ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n\
			int32 position\n\
			string nodeString\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.field);
      stream.next(m.position);
      stream.next(m.nodeString);

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
struct Printer< ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::field_import_node_from_stringRequest_<ContainerAllocator>& v)
  {
        s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
    s << indent << "nodeString: ";
Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodeString);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_IMPORT_NODE_FROM_STRINGREQUEST_H
