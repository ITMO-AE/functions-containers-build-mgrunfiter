/*
3.
Напишите функцию, которая
* называется PalindromFilter
* возвращает vector<string>
* принимает vector<string> words и int minLength
* возвращает все строки из вектора words, которые являются палиндромами и имеют длину не меньше minLength

Входной вектор содержит не более 100 строк, длина каждой строки не больше 100 символов.

Пример:

| words | minLength |	результат|
|---    |---        |---         |
|abacaba, aba	|5|	abacaba |
|abacaba, aba	|2|	abacaba, aba |
|weew, bro, code |4|	weew |
*/
#include <iostream>
#include <vector>

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

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> vec = {};

    for (auto word: words)
        if ((word.length() >= minLength) && IsPalindrom(word))
            vec.push_back(word);
    return vec;
}

int main()
{
    vector<string> words0 = {"abacaba", "aba"};
    vector<string> words1 = {"weew", "bro", "code"};

    vector<string> result = PalindromFilter(words0, 5);
    for (string word: result)
        cout << word << endl;
    cout << "=================" << endl;
    result = PalindromFilter(words0, 2);
    for (string word: result)
        cout << word << endl;
    cout << "=================" << endl;
    result = PalindromFilter(words1, 4);
    for (string word: result)
        cout << word << endl;

    return 0;
}