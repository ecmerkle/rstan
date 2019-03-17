#ifndef STAN_MATH_SUNDIALS_PRINTF_OVERRIDE_HPP
#define STAN_MATH_SUNDIALS_PRINTF_OVERRIDE_HPP

#ifdef WITH_SUNDIAL_PRINTF
#define STAN_SUNDIALS_PRINTF(x...) printf(x...)
#define STAN_SUNDIALS_FPRINTF(x...) fprintf(x...)
#else
#define STAN_SUNDIALS_PRINTF(x...)
#define STAN_SUNDIALS_FPRINTF(x...)
#endif


#endif