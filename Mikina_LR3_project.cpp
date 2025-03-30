#include <iostream>
using namespace std;

double EnterNum()
{
    //разрабатывается Ивановым П. - ветка branch_fun_1
}
double CalcOstatok(int num_a)
{
    //разрабатывается Петровым П. - ветка branch_fun_2
}
double CalcCelayaPart(int num_a) 
{
    //разрабатывается Василенко А. - ветка branch_fun_3
}

int main() {
    int A, B, C;
    int choice;
    double EnterNum;

    do {
        cout << "Task 1. Найти остаток от деления разности чисел A и B на число C" << endl;
        cout << "Task 2. Найти целую часть от деления числа A на сумму чисел B и C" << endl;
        cout << "Пожалуйста, введите число от 1 до 2 или 0, если хотите закрыть приложение: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Остаток от деления (A - B) % C = " << CalcOstatok(A, B, C) << endl;
                break;
            case 2:
                cout << "Целая часть от деления A / (B + C) = " << CalcCelayaPart(A, B, C) << endl;
                break;
            case 0:
                cout << "Выход из приложения." << endl;
                break;
            default:
                cout << "Некорректный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}
