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
  template< class K, class M >
  class QueuingSystem
  {
  public:
    QueuingSystem(size_t srcNum, size_t buffSize, size_t deviceNum);
  private:
    std::list< Event > eventsList;

    std::vector< Source< K > > sourceList;
    std::vector< Device< M > > deviceList;

    Buffer buff;
  };
}

#endif
