//вариант
#include <iostream>
#include <functional>
#include "equations.h"

int main()
{
	using namespace std;

	//функция
	auto f = [=](float x) { return 30.f * cosf(1.39f * x + 0.52f); };

	float a = 0, b = 2;

	float xDichotomy = dichotomy(f, a, b);
	cout << "Dichotomy:\n" << "t = " << xDichotomy << endl;

	float xChord = chord(f, a, b);
	cout << "Chord:\n" << "t = " << xChord << endl;

	float xNewton = newton(f, 0);
	cout << "Newton\n" << "t = " << xNewton << endl;

	float xBruteforce = bruteforce(f, a, b);
	cout << "Bruteforce:\n" << "t = " << xBruteforce << endl;
	
	return 0;
}
