#include "tuhvatullin.h"
#include <iostream>
using namespace std;
double sharePercent(double expense, double income) {
    if (income == 0) {
        cout << "Ошибка: доход не может быть равен 0!\n";
        return 0;
    }
    return (expense / income) * 100.0;
}

double remainder(double income, double expenses) {
    return income - expenses;
}


double dailyBudget(double remainderValue, double days) {
    if (days <= 0) {
        cout << "Ошибка: количество дней должно быть больше 0!\n";
        return 0;
    }
    return remainderValue / days;
}