#include "ubogov.h"
#include <cmath>

double ellipseArea(double a, double b) {
	return PI * a * b;
}

double ellipsePerimeter(double a, double b) {
	double result = PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
	return result;
}