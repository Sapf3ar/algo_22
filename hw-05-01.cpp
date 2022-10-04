#include <iostream>
#include <cmath>
const double eps = 1e-3;

long double f(long double x, long double i){
	return (pow(-1, i) * pow(x, 2 * i)) / factorial(2 * i);
}

long double s(long double x) {
	long double su = 0;
	int i = 0;
	long double s_i = f(x, i);
	while (std::fabs(s_i) > eps) {
		su += s_i;
		i += 1;
		s_i = f(x, i);
	}
	return su;
}

long double factorial(int n) {
	long long cnt = 1;
	for (int i = 1; i < n + 1; ++i) {
		cnt *= i;
	}
	return cnt;
}


long double limit_func(long double x){
	return cos(x);
}

signed main() {
	std::cout << "x | s(x) | f(x) \n";
	long double a = -1, b = 1, step = 0.1;;
	for (long double i = a; i <= b; i += step) {
		std::cout << i << "\n" << s(i) << "\n" << limit_func(i) << "\n";
	}
}