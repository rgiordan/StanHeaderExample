
# include "source2.hpp"
# include <stan/math.hpp>
# include "stan/math/fwd/scal.hpp"

using var = stan::math::var;
using fvar = stan::math::fvar<var>;

template double multivariate_digamma(double x, int p);
template var multivariate_digamma(var x, int p);
template fvar multivariate_digamma(fvar x, int p);
