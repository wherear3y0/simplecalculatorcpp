#include <cstdlib>
#include <ncurses.h>
#include <iostream>
using namespace std;


int main(void) {

    float a, b, c;
    char d;
    int p;

    while (p != 2) {

        cout << "1 = calculator \n2 - exit \n";
        cin >> p;

        switch (p) {
            case 1: {
                cout << "First number ";

                cin >> a;
                cout << "Action with numbers ";

                cin >> d;
                cout << "Second number ";

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

        cout << "Result = " << c << endl;
    }
}