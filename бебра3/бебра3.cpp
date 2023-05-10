#include <iostream>

using namespace std;
float a, b, c;
char d;
int p;
int h1;
int h2;
int m1;
int m2;

void main()
{
    setlocale(LC_ALL, "");
    while (p != 2)
    {
        cout << "1 = calculator \n 2 - exit \n";
        cin >> p;
        switch (p) {
        case 1: {

            short h1, m1, h2, m2;
            short dh, dm;

            cout << "ДОБРО ПОЖАЛОВАТЬ В ПРОГРАММУ ДЛЯ РАСЧЕТА СНА.\n\n\nВведи час и минуты, во сколько лег спать:" << endl << endl;;

            cin >> h1 >> m1;
            cout << endl << endl;


            cout << "Теперь введи, во сколько проснулся:" << endl << endl;
            cin >> h2 >> m2;

            m1 += h1 * 60;
            m2 += h2 * 60;
            dm = m2 - m1;

            if (dm <= 0)
                dm += 1440;

            dh = dm / 60;
            dm %= 60;

            cout << endl << endl << "Ты спал: " << dh << " часов " << dm << " минут!";
            cout << endl << endl << "_" << endl << endl << endl;
            break;
        };
        case 2:
            return;
        };
        case 3:
        {
            cout << "First number >> ";
            cin >> a;
            cout << "Action with numbers >> ";
            cin >> d;
            cout << "Second number >> ";
            cin >> b;
            if (d == '+')
            {
                c = a + b;
                cout << a << " + " << b << " = " << c << endl;
            }
            if (d == '-')
            {
                c = a - b;
                cout << a << " - " << b << " = " << c << endl;
            }
            if (d == '*')
            {
                c = a * b;
                cout << a << " * " << b << " = " << c << endl;
            }
            if (d == '/')
            {
                c = a / b;
                cout << a << " / " << b << " = " << c << endl;
                try
                {
                    if (b == 0)
                        throw 123;
                }
                catch (int q)
                {
                    cout << " Error number " << q << " >> divide by 0!" << endl;
                };
            };
        };
        case 4:
        {
            break;
        };
    };
    cout << "Result = " << c << endl;
};
