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

#ifndef _TM_VECTOR4_H
#define _TM_VECTOR4_H

#include "Config.h"
#include "Operators.h"

TM_BEGIN_NAMESPACE

namespace Math
{
	namespace Template
	{
		template<typename Type>
		struct Vector4Base;
	}

	namespace Operator
	{
		template <typename Type1, typename Type2>
		struct ArrayOperator<1, Type1, Type2, Template::Vector4Base<Type1>>
		{
			static inline bool Equals(const Type1* v1, const Type2* v2)
			{
				return *v1 == *v2;
			}

			static inline void Set(Type1* v1, const Type2* v2)
			{
				*v1 = *v2;
			}

			static inline void Add(Type1* v1, const Type2* v2)
			{
				if (*v1 == 1 || *v2 == 1)
				{
					*v1 = 1; // Vector is now Point.
				}
			}

			static inline void Sub(Type1* v1, const Type2* v2)
			{
				*v1 = 0; // Vector is now Direction.
			}

			static inline void Mul(Type1* value, const Type1 scalar)
			{

			}

			static inline void Div(Type1* value, const Type1 scalar)
			{

			}

			static inline Type1 SqrtMagnitude(const Type1* value)
			{
				return 0;
			}

			static inline void Normalize(Type1* value, Type1 magnitude)
			{

			}

			static inline Type1 Dot(const Type1* v1, const Type2* v2)
			{
				return 0;
			}
		};
	}
}

TM_END_NAMESPACE

#endif /*_TM_VECTOR4_H */
