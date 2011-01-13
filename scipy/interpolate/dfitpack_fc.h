#include "fwrap_ktp_header.h"

#if !defined(FORTRAN_CALLSPEC)
#define FORTRAN_CALLSPEC
#endif

#if !defined(NO_FORTRAN_MANGLING)
    #if !defined(PREPEND_FORTRAN) && defined(NO_APPEND_FORTRAN) && !defined(UPPERCASE_FORTRAN)
        #define NO_FORTRAN_MANGLING 1
    #endif
#endif
#if defined(NO_FORTRAN_MANGLING)
    #define F_FUNC(f,F) f
#else
    #if defined(PREPEND_FORTRAN)
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) _##F
            #else
                #define F_FUNC(f,F) _##f
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) _##F##_
            #else
                #define F_FUNC(f,F) _##f##_
            #endif
        #endif
    #else
        #if defined(NO_APPEND_FORTRAN)
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) F
            #else
                #error Can not happen
            #endif
        #else
            #if defined(UPPERCASE_FORTRAN)
                #define F_FUNC(f,F) F##_
            #else
                #define F_FUNC(f,F) f##_
            #endif
        #endif
    #endif
#endif

#if defined(__cplusplus)
extern "C" {
#endif
FORTRAN_CALLSPEC void F_FUNC(bispeu,BISPEU)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * z, fwi_integer_t * m, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(bispev,BISPEV)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * x, fwi_integer_t * mx, fwr_real_x8_t * y, fwi_integer_t * my, fwr_real_x8_t * z, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(curfit,CURFIT)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC fwr_real_x8_t F_FUNC(dblint,DBLINT)(fwr_real_x8_t * tx, fwi_integer_t * nx, fwr_real_x8_t * ty, fwi_integer_t * ny, fwr_real_x8_t * c, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwr_real_x8_t * wrk);
FORTRAN_CALLSPEC void F_FUNC(fpcurf,FPCURF)(fwi_integer_t * iopt, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * m, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwr_real_x8_t * tol, fwi_integer_t * maxit, fwi_integer_t * k1, fwi_integer_t * k2, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * fpint, fwr_real_x8_t * z, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * g, fwr_real_x8_t * q, fwi_integer_t * nrdata, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(parcur,PARCUR)(fwi_integer_t * iopt, fwi_integer_t * ipar, fwi_integer_t * idim, fwi_integer_t * m, fwr_real_x8_t * u, fwi_integer_t * mx, fwr_real_x8_t * x, fwr_real_x8_t * w, fwr_real_x8_t * ub, fwr_real_x8_t * ue, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwi_integer_t * nc, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(percur,PERCUR)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * w, fwi_integer_t * k, fwr_real_x8_t * s, fwi_integer_t * nest, fwi_integer_t * n, fwr_real_x8_t * t, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(regrid,REGRID)(fwi_integer_t * iopt, fwi_integer_t * mx, fwr_real_x8_t * x, fwi_integer_t * my, fwr_real_x8_t * y, fwr_real_x8_t * z, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * s, fwi_integer_t * nxest, fwi_integer_t * nyest, fwi_integer_t * nx, fwr_real_x8_t * tx, fwi_integer_t * ny, fwr_real_x8_t * ty, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk, fwi_integer_t * lwrk, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(spalde,SPALDE)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k1, fwr_real_x8_t * x, fwr_real_x8_t * d, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(splder,SPLDER)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwi_integer_t * nu, fwr_real_x8_t * x, fwr_real_x8_t * y, fwi_integer_t * m, fwi_integer_t * e, fwr_real_x8_t * wrk, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(splev,SPLEV)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwr_real_x8_t * x, fwr_real_x8_t * y, fwi_integer_t * m, fwi_integer_t * e, fwi_integer_t * ier);
FORTRAN_CALLSPEC fwr_real_x8_t F_FUNC(splint,SPLINT)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwi_integer_t * k, fwr_real_x8_t * a, fwr_real_x8_t * b, fwr_real_x8_t * wrk);
FORTRAN_CALLSPEC void F_FUNC(sproot,SPROOT)(fwr_real_x8_t * t, fwi_integer_t * n, fwr_real_x8_t * c, fwr_real_x8_t * zero, fwi_integer_t * mest, fwi_integer_t * m, fwi_integer_t * ier);
FORTRAN_CALLSPEC void F_FUNC(surfit,SURFIT)(fwi_integer_t * iopt, fwi_integer_t * m, fwr_real_x8_t * x, fwr_real_x8_t * y, fwr_real_x8_t * z, fwr_real_x8_t * w, fwr_real_x8_t * xb, fwr_real_x8_t * xe, fwr_real_x8_t * yb, fwr_real_x8_t * ye, fwi_integer_t * kx, fwi_integer_t * ky, fwr_real_x8_t * s, fwi_integer_t * nxest, fwi_integer_t * nyest, fwi_integer_t * nmax, fwr_real_x8_t * eps, fwi_integer_t * nx, fwr_real_x8_t * tx, fwi_integer_t * ny, fwr_real_x8_t * ty, fwr_real_x8_t * c, fwr_real_x8_t * fp, fwr_real_x8_t * wrk1, fwi_integer_t * lwrk1, fwr_real_x8_t * wrk2, fwi_integer_t * lwrk2, fwi_integer_t * iwrk, fwi_integer_t * kwrk, fwi_integer_t * ier);
#if defined(__cplusplus)
} /* extern "C" */
#endif

#if !defined(NO_FORTRAN_MANGLING)
#define bispeu F_FUNC(bispeu,BISPEU)
#define bispev F_FUNC(bispev,BISPEV)
#define curfit F_FUNC(curfit,CURFIT)
#define dblint F_FUNC(dblint,DBLINT)
#define fpcurf F_FUNC(fpcurf,FPCURF)
#define parcur F_FUNC(parcur,PARCUR)
#define percur F_FUNC(percur,PERCUR)
#define regrid F_FUNC(regrid,REGRID)
#define spalde F_FUNC(spalde,SPALDE)
#define splder F_FUNC(splder,SPLDER)
#define splev F_FUNC(splev,SPLEV)
#define splint F_FUNC(splint,SPLINT)
#define sproot F_FUNC(sproot,SPROOT)
#define surfit F_FUNC(surfit,SURFIT)
#endif
