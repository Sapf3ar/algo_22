#include <iostream>
#include <cmath>
const double eps = 1e-3;
const double PI = 3.14;

long long factorial(int n) {
	long long cnt = 1;
	for (int i = 1; i < n + 1; ++i) {
		cnt *= i;
	}
	return cnt;
}


long double y(long double x){
	return (x * sin(PI / 4)) / (1 - 2 * x * cos(PI / 4));
}


long double f(long double x, long double i){
	return pow(x, i) * sin(i * PI / 4);
}

long double s(long double x) {
	long double su = 0;
	int i = 1;
	long double s_i = f(x, i);
	while (std::fabs(s_i) > eps) {
		su += s_i;
		i += 1;
		s_i = f(x, i);
	}
	return su;
}


signed main() {
	
	std::cout << "x | s(x) | f(x) \n";
	long double a = 0, b = 1, step = 0.05;
	for (long double i = a; i <= b + eps; i += step) {
		std::cout << i <<"\n" << s(i)<<"\n" << y(i) << "\n";
	}
}