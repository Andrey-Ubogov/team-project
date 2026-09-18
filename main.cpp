// Лабораторная работа № 1. Вариант 19.
// Выполнил: Убогов А.Г., группа ПИ-51.
#include <iostream>
#include <cmath>

const double PI = 3.14159265358979;
using namespace std;

// ===== Расчётные функции варианта =====


// ===== Главная функция: меню =====
int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");

	int choice;
	double a, b;

	do {
		cout << "\n=== Вычисление Эллипса и Семейный бюджет ===\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт меню: ";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}