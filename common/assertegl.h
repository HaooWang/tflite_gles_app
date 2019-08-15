/* ------------------------------------------------ *
 * The MIT License (MIT)
 * Copyright (c) 2019 terryky1220@gmail.com
 * ------------------------------------------------ */
#ifndef __ASSERTEGL_H__
#define __ASSERTEGL_H__

void 
AssertEGLError( char *lpFile, int nLine );

#if 1
    #define EGLASSERT()     AssertEGLError( __FILE__, __LINE__ )
#else
    #define EGLASSERT()     ((void)0)
#endif

#endif /* __ASSERTEGL_H__ */

