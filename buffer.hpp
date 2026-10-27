#ifndef BUFFER_HPP
#define BUFFER_HPP
#include <cstddef>
#include <vector>
#include "bid.hpp"

namespace qs
{
  class Buffer
  {
  public:
    Buffer(size_t size);
  private:
    std::vector< Bid > body;
  };
}

#endif
