#include <cstdlib>
#include <ncurses.h>
#include <iostream>
using namespace std;


int main(void) {

    cout << "Привет!" << endl;
    cout << "Это простой калькулятор" << endl;
    cout << "Как пользоваться и так ясно" << endl;


    float a, b, c;
    char d;
    int p;

    while (p != 2) {

        cout << "1 = открыть калькулятор \n2 - выйти \n";
        cin >> p;

        switch (p) {
            case 1: {
                cout << "Первое число ";

                cin >> a;
                cout << "Что ты хочешь сделать с числами ";

                cin >> d;
                cout << "Второе число ";

                cin >> b;

                if (d == '+')

                    c = a + b;

                if (d == '-')

                    c = a - b;

                if (d == '*')

                    c = a * b;

                if (d == '/')

                    c = a / b;
            }

            case 2: {
                break;
            }
        }

        cout << "Что получилось = " << c << endl;
    }
}