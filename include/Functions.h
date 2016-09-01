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

#ifndef _TM_FUNCTIONS_H
#define _TM_FUNCTIONS_H

#include "Config.h"

#include <cmath>

TM_BEGIN_NAMESPACE

namespace Math
{
	// Remember use float types (90.0f) instead of int types (90)
	// Otherwise template will use it as int type...
	// O/ Cheers! -> I know this will cause problems for... everybody including myself.

	template <typename Type>
	inline Type Lerp(const Type& start, const Type& end, float delta)
	{
		return Type(start + (end - start) * delta);
	}

	const float PI = 3.14159265358979323846f;

	template <typename Type>
	inline Type Deg(Type rad)
	{
		return rad / PI * 180.0f;
	}

	template <typename Type>
	inline Type Rad(Type deg)
	{
		return deg / 180.0f * PI;
	}

	// Uses 3rd party libraries // (std)

	template <typename Type>
	inline Type Sin(Type num)
	{
		return std::sin(num);
	}

	template <typename Type>
	inline Type Cos(Type num)
	{
		return std::cos(num);
	}

	template <typename Type>
	inline Type Tan(Type num)
	{
		return std::tan(num);
	}

	template <typename Type>
	inline Type Asin(Type num)
	{
		return std::asin(num);
	}

	template <typename Type>
	inline Type Acos(Type num)
	{
		return std::acos(num);
	}

	template <typename Type>
	inline Type Atan(Type num)
	{
		return std::atan(num);
	}

	template <typename Type>
	inline int Round(Type num)
	{
		return (int)std::round(num);
	}

	template <typename Type>
	inline Type Round(Type num, float decimals)
	{
		return std::roundf(num * Pow(10, decimals)) / Pow(10, decimals);
	}

	template <typename Type>
	inline Type Floor(Type num)
	{
		return std::floor(num);
	}

	template <typename Type>
	inline Type Ceil(Type num)
	{
		return std::ceil(num);
	}

	template <typename Type>
	inline Type Trunc(Type num)
	{
		return std::trunc(num);
	}

	template <typename Type>
	inline Type Pow(Type num)
	{
		return std::pow(num, 2);
	}

	template <typename Type>
	inline Type Pow(Type num, float power)
	{
		return std::pow(num, power);
	}

	template <typename Type>
	inline Type Sqrt(Type num)
	{
		return std::sqrt(num);
	}

	template <typename Type>
	inline Type Log(Type num)
	{
		return std::log(num);
	}

	template <typename Type>
	inline Type Min(Type num1, Type num2)
	{
		return std::fmin(num1, num2);
	}

	template <typename Type>
	inline Type Max(Type num1, Type num2)
	{
		return std::fmax(num1, num2);
	}
}

TM_END_NAMESPACE

#endif /* _TM_FUNCTIONS_H */
