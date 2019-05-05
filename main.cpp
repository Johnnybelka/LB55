#include <iostream>
#include "cmake-build-debug/Complex.h"
#include "cmake-build-debug/Vector.h"
#include <ctime>

using namespace std;



int main()
{
    cout << "Выберете, с какой структурой хотите работать. Нажмите:" << endl <<
         "3 - структура Complex" << endl <<
         "4 - структура Vector" << endl;
    int v;
    cin >> v;
    srand(time(NULL));
    int ch = (rand() ) % 100 - 50;
    int cc = (rand() ) % 100 - 50;
    switch (v)
    {
        case 3:
        {
            Complex c1(-30, 17); //Использование стандартного конструктора
            Complex c2(cc,ch); //Использование конструктора инициализации
            Complex c3;
            cout << "Структура 1" << endl;
            c1.output();
            cout << endl;
            cout << "Структура 2" << endl;
            c2.output();
            cout << endl;
            c3 = c1; //Использование конструктора копирования
            cout << "Структура 3 после использования оператора присваивания:" << endl;
            cout << c3;
            c3++;
            cout << "Структура 3 после использования оператора инкремента:" << endl;
            cout << c3;
            c1--;
            cout << "Структура 1 после использования декремента:" << endl;
            cout << c1;
            if (c1 == c2)
                cout << "Структуры равны" << endl;
            if (c1 < c2)
                cout << "1 структура меньше 2" << endl;
            if (c1 > c2)
                cout << "1 структура больше 2" << endl;
            cout << endl;
            break;
        }
        case 4:
        {
            Vector c1 (-30, 17); //Использование стандартного конструктора
            Vector c2(cc,ch); //Использование конструктора инициализации
            Vector c3;
            cout << "Структура 1" << endl;
            c1.output();
            cout << "Структура 2" << endl;
            c2.output();
            c3 = c1;
            cout << "Структура 3 после использования оператора присваивания:" << endl;
            cout << c3;
            if (c1 == c2)
                cout << "Структуры равны" << endl;
            if (c1 < c2)
                cout << "1 структура меньше 2" << endl;
            if (c1 > c2)
                cout << "1 структура больше 2" << endl;
            break;
        }
    }
    system("pause");
}

