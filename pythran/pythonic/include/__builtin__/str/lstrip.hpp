#ifndef PYTHONIC_INCLUDE_BUILTIN_STR_LSTRIP_HPP
#define PYTHONIC_INCLUDE_BUILTIN_STR_LSTRIP_HPP

#include "pythonic/include/types/str.hpp"
#include "pythonic/include/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace __builtin__
{

  namespace str
  {
    types::str lstrip(types::str const &self, types::str const &to_del = " ");

    DECLARE_FUNCTOR(pythonic::__builtin__::str, lstrip);
  }
}
PYTHONIC_NS_END
#endif
