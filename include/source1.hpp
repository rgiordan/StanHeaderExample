# ifndef SOURCE1_H
# define SOURCE1_H

#include <boost/math/special_functions/digamma.hpp>
#include <boost/math/special_functions/gamma.hpp>

using boost::math::lgamma;
using boost::math::digamma;

# include <stan/math.hpp>
# include "stan/math/fwd/scal.hpp"

using var = stan::math::var;
using fvar = stan::math::fvar<var>;

template <typename T> T multivariate_lgamma(T x, int p) {
  T result = log(M_PI) * p * (p - 1.0) / 4.0;
  for (int i = 1; i <= p; i++) {
    result += lgamma(x + 0.5 * (1 - (double)i));
  }
  return result;
}

extern template double multivariate_lgamma(double x, int p);
extern template var multivariate_lgamma(var x, int p);
extern template fvar multivariate_lgamma(fvar x, int p);

# endif
