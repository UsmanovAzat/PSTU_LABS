﻿// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void task1()
{
    int n, m, k, t;
    cout << "n = "; cin >> k;
    cout << "m = "; cin >> t;
    n = k;
    m = t;
    cout << "n++*m = " << n++ * m << "  n = " << n << "  m = " << m << endl;
    n = k;
    m = t;
    cout << "n++<m = " << (n++ < m ? "true" : "false") << "  n = " << n << "  m = " << m << endl;
    n = k;
    m = t;
    cout << "m-->m = " << (m-- > m ? "true" : "false") << "  n = " << n << "  m = " << m << endl;
}

int main()
{
    task1();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.