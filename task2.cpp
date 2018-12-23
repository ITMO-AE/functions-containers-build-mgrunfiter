/*
2.
Напишите функцию, которая:
* называется IsPalindrom
* возвращает bool
* принимает параметр типа string
* возвращает, является ли переданная строка палиндромом

Палиндром - это слово или фраза, которые одинаково читаются слева направо и справа налево.
Пустая строка является палиндромом.
*/
#include <iostream>

using namespace std;

bool IsPalindrom(string str)
{
    bool flag = true;
    int j = str.length();

    for (int i = 0; i <= j / 2; i++) {
        if (str[i] != str[j - 1 - i]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    string str = "abaccpaba";
    //string str = "";

    if (IsPalindrom(str))
        cout << str << " - palindrome" << endl;
    else
        cout << str << " - NOT palindrome" << endl;

    return 0;
}