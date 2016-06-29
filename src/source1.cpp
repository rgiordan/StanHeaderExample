
# include "source1.hpp"
# include <stan/math.hpp>
# include <stan/math/fwd/scal.hpp>

using var = stan::math::var;
using fvar = stan::math::fvar<var>;

template double multivariate_lgamma(double x, int p);
template var multivariate_lgamma(var x, int p);
template fvar multivariate_lgamma(fvar x, int p);
