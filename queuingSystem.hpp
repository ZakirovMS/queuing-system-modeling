#ifndef QUEUINGSYSTEM_HPP
#define QUEUINGSYSTEM_HPP
#include <list>
#include <cstddef>
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
    QueuingSystem(size_t srcNum, size_t buffSize, size_t deviceNum);
  private:
    std::list< Event > eventsList;

    std::vector< Source > sourceList;
    std::vector< Device > deviceList;

    std::vector< Bid > buffer;
  };
}

#endif
