/*
Copyright (c) 2016 Atte Vuorinen <attevuorinen@gmail.com>

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgement in the product documentation would be
   appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _TM_CONFIG_H
#define _TM_CONFIG_H

#ifdef TM_USE_NAMESPACE
    #ifndef TM_NAMESPACE
        #define TM_NAMESPACE TM
    #endif /* TM_NAMESPACE */

    #define TM_BEGIN_NAMESPACE namespace TM_NAMESPACE {
    #define TM_END_NAMESPACE }
#else
    #define TM_BEGIN_NAMESPACE
    #define TM_END_NAMESPACE
#endif /*TM_USE_NAMESPACE */


#endif /* _TM_CONFIG_H */