#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    array<float, 99> w;
    for (size_t i{ 0 }; i < w.size(); ++i) {
        float randNum;
        randNum = rand() % 1000;
        w[i] = randNum;
    }

    cout << "Array w :" << endl;
    for (size_t i{ 0 }; i < w.size(); ++i) {
        cout << w[i] << endl;
    }

    sort(w.begin(), w.end());

    cout << "Lowest Number in w: " << w[0] << " Highest Number in w: " << w[98] << endl;
}


