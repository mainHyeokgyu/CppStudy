
#ifndef NODELIB_EXPORT_H
#define NODELIB_EXPORT_H

#ifdef NODELIB_STATIC_DEFINE
#  define NODELIB_EXPORT
#  define NODELIB_NO_EXPORT
#else
#  ifndef NODELIB_EXPORT
#    ifdef Nodelib_EXPORTS
        /* We are building this library */
#      define NODELIB_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define NODELIB_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef NODELIB_NO_EXPORT
#    define NODELIB_NO_EXPORT 
#  endif
#endif

#ifndef NODELIB_DEPRECATED
#  define NODELIB_DEPRECATED __declspec(deprecated)
#endif

#ifndef NODELIB_DEPRECATED_EXPORT
#  define NODELIB_DEPRECATED_EXPORT NODELIB_EXPORT NODELIB_DEPRECATED
#endif

#ifndef NODELIB_DEPRECATED_NO_EXPORT
#  define NODELIB_DEPRECATED_NO_EXPORT NODELIB_NO_EXPORT NODELIB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef NODELIB_NO_DEPRECATED
#    define NODELIB_NO_DEPRECATED
#  endif
#endif

#endif /* NODELIB_EXPORT_H */
