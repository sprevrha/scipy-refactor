/* This file is a collection of wrappers around the
 *  Amos Fortran library of functions that take complex
 *  variables (see www.netlib.org) so that they can be called from
 *  the cephes library of corresponding name but work with complex
 *  arguments.
 */

#ifndef _TOMS_WRAPPERS_H
#define _TOMS_WRAPPERS_H
#ifndef _AMOS_WRAPPERS_H
#include "cephes/mconf.h"

#include "ufunc_extras.h"

#define CADDR(z) (double *)&z.real, (double*)&z.imag
#endif /*_AMOS */

#ifdef __cplusplus
extern "C" {
#endif

extern Py_complex cwofz_wrap(Py_complex z);

#ifdef __cplusplus
}
#endif

#endif
