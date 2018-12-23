/*
1. 
Напишите функцию, которая:
* называется Factorial
 * возвращает int
* принимает int и возвращает факториал своего аргумента.

Гарантируется, что аргумент функции по модулю не превышает 10.
Для отрицательных аргументов функция должна возвращать 1\.

*/
#include <iostream>

using namespace std;

int Factorial(int n)
{
    int f = 1;

    if (n >= 0) {
        for (int i = 2; i <= n; i++)
            f *= i;
    }

    return f;

}

int Factorial1(int n)
{
    if (n <= 0)
        return 1;
    return (n * Factorial1(n - 1));

}

int main()
{
    int n = 5;

    cout << " n! = " << Factorial(n) << endl;
    cout << " n! = " << Factorial1(n) << endl;
    return 0;
}