// OOPLab9T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include "task2List.h"
#include "task3.h"
#include "task1.h"

#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <fstream>


struct Student {
    std::string lastName;
    int schoolNumber;
    int admissionYear;
};

int main()
{
    std::cout << "Lab №9. STL. \n";
    int choice;
    cout << "  Please select an option:" << endl;
    cout << "  1. Task 1 - students" << endl;
    cout << "  2. Task 2 - list" << endl;
    cout << "  3. Task 3 - Vector" << endl;
    cout << "  Enter your choice: ";
    cin >> choice;

    //FitnessCenterData data(0);
    int k;
    switch (choice) {
    case 1: {
        task1Students();
        break;
    }

          
    case 2:
    {
        cout << "task 2" << endl;
        task2List();
    }
    break;
    case 3:
    {
        cout << "Task 3" << endl;
        task3();
    }
    }
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
