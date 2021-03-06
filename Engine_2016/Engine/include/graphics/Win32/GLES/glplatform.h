#ifndef __glplatform_h_
#define __glplatform_h_

/* $Revision: #1 $ on $Date: 2010/09/27 $ */

/*
 * This document is licensed under the SGI Free Software B License Version
 * 2.0. For details, see http://oss.sgi.com/projects/FreeB/ .
 */

/* Platform-specific types and definitions for OpenGL ES 1.X  gl.h
 * Last modified on 2008/12/19
 *
 * Adopters may modify khrplatform.h and this file to suit their platform.
 * You are encouraged to submit all modifications to the Khronos group so that
 * they can be included in future versions of this file.  Please submit changes
 * by sending them to the public Khronos Bugzilla (http://khronos.org/bugzilla)
 * by filing a bug against product "OpenGL-ES" component "Registry".
 */

#include <KHR/khrplatform.h>

#ifdef _WIN32
#   ifdef __GL_EXPORTS
#       define GL_API __declspec(dllexport)
#   else
#       define GL_API __declspec(dllimport)
#   endif
#else
#   ifdef __GL_EXPORTS
#       define GL_API
#   else
#       define GL_API extern
#   endif
#endif


#define GL_APIENTRY KHRONOS_APIENTRY

#endif /* __glplatform_h_ */
