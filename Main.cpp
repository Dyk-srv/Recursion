#include <iostream>

long long factorial(int num) {
	if (num < 0)
		return 0;
	if (num == 0)
		return 1;
	return factorial(num - 1) * num;
}

int Fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Вычисление факториала с помощью рекурсии
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << '\n';*/


	// Ряд Фибоначчи
	std::cout << "Введите номер числа Фибоначчи -> ";
	std::cin >> n;
	std::cout << "Число Фибоначчи номер " << n << ": " << Fibonacci(n) << '\n';

	return 0;
}