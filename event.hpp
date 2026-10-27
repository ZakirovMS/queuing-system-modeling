#ifndef EVENT_HPP
#define EVENT_HPP
#include <cstddef>

namespace qs
{
  enum class EventType
  {
    DeviceRelease,
    BidSubmission
  };

  struct Event
  {
    size_t eventTime;
    EventType eventType;
  };

}

#endif
