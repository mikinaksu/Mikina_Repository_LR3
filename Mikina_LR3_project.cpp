#include <iostream>
using namespace std;

int EnterA()
{
    int numA;
    cin >> numA;
    return numA;
}
int EnterB()
{
    int numB;
    cin >> numB;
    return numB;
}
int EnterC()
{
    int numC;
    cin >> numC;
    return numC;
}
int CalcOstatok(int nA,int nB,int nC)
{
    return (nA - nB) % nC;
}
int CalcCelayaPart(int nA,int nB,int nC) 
{
    return nA / (nB + nC);
}

int main() {
    int A = 0, B = 0, C = 0;
    int choice;

    do {
        cout << "Task 1. Ввести целое число A" << endl;
        cout << "Task 2. Ввести целое число B" << endl;
        cout << "Task 3. Ввести целое число C" << endl;
        cout << "Task 4. Найти остаток от деления разности чисел A и B на число C" << endl;
        cout << "Task 5. Найти целую часть от деления числа A на сумму чисел B и C" << endl;
        cout << "Пожалуйста, введите число 0, если хотите закрыть приложение " << endl;
        cout << "Введите номер задания : "
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите ЦЕЛОЕ число A: ";
                A = EnterA(); 
                break;
            case 2:
                cout << "Введите ЦЕЛОЕ число B: ";
                B = EnterB(); 
                break;
            case 3:
                cout << "Введите ЦЕЛОЕ число C: ";
                C = EnterC(); 
                break;
            case 4:
                if (C != 0) { 
                    cout << "Остаток от деления (A - B) % C = " << CalcOstatok(A, B, C) << endl;
                } else {
                    cout << "Ошибка: C не может быть равным нулю." << endl;
                }
                break;
            case 5:
                if (B + C != 0) { 
                    cout << "Целая часть от деления A / (B + C) = " << CalcCelayaPart(A, B, C) << endl;
                } else {
                    cout << "Ошибка: B + C не может быть равным нулю." << endl;
                }
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
