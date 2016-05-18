#ifndef REACTOR_MATH_ARITHMETIC_HPP
#define REACTOR_MATH_ARITHMETIC_HPP

#include "reactor/common/type/types.hpp"

namespace reactor { namespace math {

using namespace reactor::common::type;

template <typename T>
class Arithmetic {
public:

    static T abs(const T x);
    static T sqr(const T x);
    static T sqrt(const T x);

    static T min(const T a, const T b);
    static T max(const T a, const T b);

};

/* Explicit instantiations */

template class Arithmetic<float32>;
template class Arithmetic<float64>;
template class Arithmetic<int8>;
template class Arithmetic<int16>;
template class Arithmetic<int32>;
template class Arithmetic<int64>;
template class Arithmetic<uint8>;
template class Arithmetic<uint16>;
template class Arithmetic<uint32>;
template class Arithmetic<uint64>;

}} // namespace reactor::math

#endif //REACTOR_MATH_ARITHMETIC_HPP
