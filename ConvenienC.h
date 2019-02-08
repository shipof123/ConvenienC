#ifndef CONV_C_H_
#define CONV_C_H_

#define STR(s) #s
#define compile_time_strlen(s) sizeof(s)/ sizeof(char) 

#if __GNUC__ >= 3
  #define _attr(a) __attribute ((a))
  #define _branch(b, likelyhood) __builtin_expect(!!b, likelyhood)

#else
  #define _attr(_)
  #define _branch(_b, _l)

#endif

  #undef  inline 
  #define inline        inline _attr(always_inline)
  #define __noinline    _attr(noinline)
  /* pure = f(x) always is f(x), f(x) does not change any global state(not I/O either), result can be saved */
  #define __pure        _attr(pure)
  #define __const       _attr(const)
  #define __noreturn    _attr(noreturn)
  #define __malloc      _attr(malloc)
  /* Set warnings on certain functions */
  #define __must_check  _attr(warn_unused_result)
  #define __deprecated  _attr(deprecated)
  /* What to do with the result */
  #define __used        _attr(used)
  #define __unused      _attr(unused)
  /* packing & aligning */
  #define __packed      _attr(packed)
  #define __align(n)    _attr(aligned (n))
  #define __align_max   _attr(aligned)
  /* branch prediction */
  #define likely(b)     _branch(b, 1)
  #define unlikely(b)   _branch(b, 0)

#ifdef  __cplusplus
  typedef var auto;
#else
  typedef void* var 
#endif

#define unless(expr) if(!(expr))
#define until(expr)  while(!(expr))


#endif
