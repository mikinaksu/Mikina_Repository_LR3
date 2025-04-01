#include <iostream>
using namespace std;

double EnterA()
{
    //разрабатывается Ивановым П. - ветка branch_fun_1
}
double EnterB()
{
    //разрабатывается Ивановым П. - ветка branch_fun_1
}
double EnterC()
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
        cout << "Task 1. Ввести целое число A" << endl;
        cout << "Task 2. Ввести целое число B" << endl;
        cout << "Task 3. Ввести целое число C" << endl;
        cout << "Task 4. Найти остаток от деления разности чисел A и B на число C" << endl;
        cout << "Task 5. Найти целую часть от деления числа A на сумму чисел B и C" << endl;
        cout << "Пожалуйста, введите число 0, если хотите закрыть приложение ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите ЦЕЛОЕ число A" << EnterA << endl;
                break;
            case 2:
                cout << "Введите ЦЕЛОЕ число B" << EnterB << endl;
                break;
            case 3:
                cout << "Введите ЦЕЛОЕ число C" << EnterC << endl;
                break;
            case 4:
                cout << "Остаток от деления (A - B) % C = " << CalcOstatok(A, B, C) << endl;
                break;
            case 5:
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
