#include <iostream>
#include<array>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    array<int, 11> a;
    for (size_t i{ 0 }; i < a.size(); ++i) {
        int rnum;
        rnum = rand() % 100;
        a[i] = rnum;
    }
    cout << "Array a : " << endl;
    for (size_t i{ 0 }; i < a.size(); ++i) {
        cout << a[i] << endl;
    }
    array<int, 36> b;
    for (size_t i{ 0 }; i < b.size(); ++i) {
        int rnum;
        rnum = rand() % 100;
        b[i] = rnum;
    }
    cout << "Array b : " << endl;
    for (size_t i{ 0 }; i < b.size(); ++i) {
        cout << b[i] << endl;
    }
    for (size_t i{ 0 }; i < a.size(); ++i) {
        b[i] = a[i];
    }
    cout << "Updated Array b: " << endl;

    for (size_t i{ 0 }; i < b.size(); ++i) {
        cout << b[i] << endl;
    }

    return 0;
}

