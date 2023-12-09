#include <iostream>
#include<stdio.h>
using  namespace std;
//int F();
//int G();
//
//
//
//
//
//
//
//int F(int n)
//{
//
//    if (n == 1)
//    {
//        return 1;
//
//    }
//    else
//        return (2 * G(n - 1) + (5 * n));
//
//}
//int G(int n)
//{
//
//    if (n == 1)
//    {
//        return 1;
//
//    }
//    else
//        return (2 * F(n - 1) + (5 * n));
//
//}
//
//
//
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    int n;
//    F(n);
//    G(n);
//    cout << "Введите число: ";
//    cin >> n;
//    cout << endl;
//    cout<< "Значение функции F(n) = "<< F(n) <<endl ;
//    cout << "Значение функции G(n) = " << G(n) << endl;
//
//}














//int f(int n) {
//    if (n < 1) {
//        return 1;
//    }
//    else if (n % 2 == 0) {
//        return n + f(n - 1);
//    }
//    else {
//        return 2 * f(n - 2);
//    }
//}


int f(int n)
{

    if (n == 1)
    {
        return 1;
    }
    if( n%2 == 0)
    {
        return  n + f(n - 1);
    }
      if(n > 1 && n%2 != 0)
      
          return 2 * f(n - 2);
}



int main() {
    setlocale(LC_ALL, "RU");
    int n;
    std::cout << "Введите значение n: ";
    std::cin >> n;
    std::cout << "f(" << n << ") = " << f(n) << std::endl;
    return 0;
}



//Напишите программу для вычисления значения функции F(n),
//  где n — натуральное число, задана следующими соотношениями :
//F(n) = 1 при n = 1;
//F(n) = n + F(n − 1), если n чётно,
//F(n) = 2 × F(n − 2), если n > 1 и при этом n нечётно.
//Пользователь вводит n, программа должна вывести значение F(n).