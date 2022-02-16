// Написати програму, яка дає користувачеві ввести 5 прізвищ студентів, а потім сортує їх за зростанням.
#include <iostream>
#include <string>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char** mass = new char* [5];
      
    for (int i = 0; i < 5; i++) {//заповнюємо масив 
        mass[i] = new char[10];
        cout << "Введіть прізвище "<<i+1<<" студента :";
        cin >> mass[i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++)
            if (strcmp(mass[i], mass[j]) > 0) //порівнюємо номери букв прізвищ
            {
                swap(mass[i], mass[j]);//сортуєм прізвища за зростаням
            }
    }   
    cout << "\nВідсортований список прізвищ за зростанням"<<endl;
    for (int i = 0; i < 5; i++) {                                 //вивід відсортованого масиву 
        cout << mass[i] << endl;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++)
            if (strcmp(mass[i], mass[j]) > 0) //порівнюємо номери букв прізвищ
            {
                swap(mass[j], mass[i]);//сортуємо за спаданням
            }
    }
    cout << "\nВідсортований список прізвищ за спаданням" << endl;
    for (int i = 0; i < 5; i++) {                                 //вивід відсортованого масиву 
        cout << mass[i] << endl;
    }

    system("pause");
}