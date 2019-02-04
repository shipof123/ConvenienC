#ifndef CONV_C_H_
#define CONV_C_H_

#define _attr(a) __attribute ((a))

#define STR(s) #s
#define STRLEN(s) 


#if __GNUC__ >= 3
  #undef  inline 
  #define inline        inline _attr(always_inline)
  #define __noinline    _attr(noinline)
  #define __pure        _attr(pure)
  #define __const       _attr(const)
  #define __noreturn    _attr(noreturn)
  #define __malloc      _attr(malloc)
  #define __must_check  _attr(warn_unused_result)
  #define __deprecated  _attr(deprecated)
  #define __used        _attr(used)
  /* TODO */
#endif

#ifdef  __cplusplus
  #define var auto
#endif

#define unless(expr) if(!(expr))
#define until(expr)  while(!(expr))


#endif
