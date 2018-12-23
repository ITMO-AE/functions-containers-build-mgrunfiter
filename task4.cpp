/*
4.
Напишите функцию, которая
* принимает два вектора чисел
* копирует содержимое первого вектора в конец второго
* очищает первый вектор
*/

#include <iostream>
#include <vector>

using namespace std;

void vector_copy(vector<int> &vec1, vector<int> &vec2)
{
    for (auto n: vec1) {
        vec2.push_back(n);
    }
    vec1.clear();
}

int main()
{
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2 = {5, 6, 7};

    vector_copy(vec1, vec2);
    cout << "2nd vector:" << endl;
    for (auto dig: vec2)
        cout << dig << endl;
    cout << "============" << endl;
    cout << "1st vector:" << endl;
    for (auto dig: vec1)
        cout << dig << endl;
    return 0;
}