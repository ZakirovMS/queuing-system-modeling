#ifndef QUEUINGSYSTEM_HPP
#define QUEUINGSYSTEM_HPP
#include <list>
#include <vector>
#include "bid.hpp"
#include "device.hpp"
#include "event.hpp"
#include "source.hpp"

namespace qs
{
  class QueuingSystem
  {
  public:

  private:
    std::list< Event > eventsList;

    std::vector< Source > sourceList;
    std::vector< Device > deviceList;

    std::vector< Bid > buffer;
  };
}

#endif
