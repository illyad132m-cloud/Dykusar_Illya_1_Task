#include <iostream>

double calculateSumA(double a[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

double calculateSumA2minusB(double a[], double b[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i] * a[i] - b[i];
	}
	return sum;
}

double calculateSumBA(double a[], double b[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += b[i] * a[i];
	}
	return sum;
}

int main() {
	const int n = 6;
	double a[n] = { 1.5, 1.3, 2.0, 3.6, 4.1, -1.6 };
	double b[n] = { 2.1, 1.5, -1.0, 2.3, 4.3, 5.6 };

	double part1 = calculateSumA(a, n);
	double part2 = calculateSumA2minusB(a, b, n);
	double part3 = calculateSumBA(a, b, n);
	double Q = part1 + part2 + part3;

	std::cout << "Sum 1 (a_i): " << part1 << std::endl;
	std::cout << "Sum 2 (a_i^2 - b_i): " << part2 << std::endl;
	std::cout << "Sum 3 (b_i * a_i): " << part3 << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Result Q = " << Q << std::endl;
	return 0;
}


