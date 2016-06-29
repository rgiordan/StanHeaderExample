# ifndef SOURCE2_H
# define SOURCE2_H

#include <boost/math/special_functions/digamma.hpp>
#include <boost/math/special_functions/gamma.hpp>

using boost::math::lgamma;
using boost::math::digamma;

# include <stan/math.hpp>
# include "stan/math/fwd/scal.hpp"

using var = stan::math::var;
using fvar = stan::math::fvar<var>;

template <typename T> T multivariate_digamma(T x, int p) {
  T result = 0.0;
  for (int i = 1; i <= p; i++) {
    result += digamma(x + 0.5 * (1 - (double)i));
  }
  return result;
}

extern template double multivariate_digamma(double x, int p);
extern template var multivariate_digamma(var x, int p);
extern template fvar multivariate_digamma(fvar x, int p);

# endif
