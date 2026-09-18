// Командный проект. Группа ПИ-51
// Команда: Убогов (в. 19, техлид), Тухватулин (в. 100)
#include <iostream>

// Блок подключений: заголовочные файлы 
#include "ubogov.h"
#include "tuhvatullin.h"
// Конец блока подключений 

using namespace std;

// ===== Расчётные функции варианта =====


// ===== Главная функция: меню =====
int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "Rus");

	int choice;
	double a, b;
	double income, expense, rem, days;

	do {
		cout << "\n=== Командный проект: сборник расчетов ===\n";
		cout << "\n=== Вычисление Эллипса и Семейный бюджет ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Площадь Эллипса\n";
		cout << "2. Периметр Эллипса\n";
		cout << "3. Доля расходов в доходе (%)\n";
		cout << "4. Остаток от дохода\n";
		cout << "5. Дневной бюджет\n";
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "0. Выход\n";
		cout << "Выберите пункт меню: ";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Работа завершена.\n";
			break;
		case 1:
			cout << "Введите размеры осей a и b в сантиметрах: ";
			cin >> a >> b;
			cout << "Площадь эллипса = " << ellipseArea(a, b) << " см.\n";
			break;
		case 2:
			cout << "Введите размеры осей a и b в сантиметрах: ";
			cin >> a >> b;
			cout << "Периметр эллипса = " << ellipsePerimeter(a, b) << " см.\n";
			break;
		case 3:
			cout << "Введите расход и доход: ";
			cin >> expense >> income;
			cout << "Доля расходов = " << sharePercent(expense, income) << "%\n";
			break;
		case 4:
			cout << "Введите доход и расходы: ";
			cin >> income >> expense;
			cout << "Остаток = " << remainder(income, expense) << "\n";
			break;
		case 5:
			cout << "Введите остаток и количество дней: ";
			cin >> rem >> days;
			cout << "Дневной бюджет = " << dailyBudget(rem, days) << "\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}