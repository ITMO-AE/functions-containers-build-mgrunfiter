/*
5.
Реализуйте функцию void Reverse(vector<int>& v),
которая переставляет элементы вектора в обратном порядке.
*/
#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& v)
{
    int j = v.size();
    int tmp = 0;

    for (int i = 0; i <= j / 2; i++) {
        tmp = v[i];
        v[i] = v[j - 1 - i];
        v[j - 1 - i] = tmp;
    }
}

int main()
{
    vector<int> vec1 = {1, 2, 3, 4};

    cout << "vector before reverse:" << endl;
    for (auto dig: vec1)
        cout << dig << endl;

    Reverse(vec1);

    cout << endl;
    cout << "vector after reverse:" << endl;
    for (auto dig: vec1)
        cout << dig << endl;
    return 0;
}