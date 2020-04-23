
#ifndef __EQUATIONS_H__
#define __EQUATIONS_H__

#include <functional>

float dichotomy(std::function<float(float)> f,
	float a, float b, float epsilon = .0001f);

float chord(std::function<float(float)> f,
	float a, float b, float epsilon = .0001f);

float newton(std::function<float(float)> f,
	float x, float epsilon = .0001f);

float d(float x);

float bruteforce(std::function<float(float)> f,
	float a, float b, float epsilon = .0001f);

#endif
