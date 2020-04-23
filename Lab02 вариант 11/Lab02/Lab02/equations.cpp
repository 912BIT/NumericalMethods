
#include "equations.h"

float dichotomy(std::function<float(float)> f,
	float a, float b, float epsilon)
{
	float x = 0, y = 0;
	
	do
	{
		x = a + (b - a) * 0.5f;
		y = f(x);

		if (f(a) * y < 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	} while (fabs(y) >= epsilon);

	return x;
}

float chord(std::function<float(float)> f,
	float a, float b, float epsilon)
{
	float x = 0, y = 0;
	do
	{
		x = a - ((f(a) * (b - a)) / (f(b) - f(a)));
		y = f(x);

		if (f(a) * y < 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}

	} while (fabs(y) >= epsilon);

	return x;
}

float newton(std::function<float(float)> f, float x, float epsilon)
{
	float y = 0;
	do
	{
		y = f(x);
		x -= y / d(x);
	} while (fabs(y) > epsilon);

	return x;
}

//производная
float d(float x)
{
	return -41.7f * sinf(1.39f * x + 0.52f);
}

float bruteforce(std::function<float(float)> f,
	float a, float b, float epsilon)
{
	
	float x = a, y = fabsf(f(a)), z = 0.f;
	
	for (x = a + epsilon; x <= b; x += epsilon)
	{
		if (fabs(f(x)) < y)
		{
			z = x;
		}
		y = f(x);
	}

	return z;
}

