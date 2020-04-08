

#include <iostream>
#include<array>
#include<iomanip>
using namespace std;

int main()
{
    array<char, 26> alphabet{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    cout << "The sixth lette rof the alphabet is: " << alphabet[5] << endl;

    array<float, 10> grades;
    for (size_t i{ 0 }; i < grades.size(); ++i) {
        grades[i] = 100; //initialize all grades to be 100.
    }
    float gradeInput;
    cout << "What is the Student's grade? :\n";
    cin >> gradeInput;
    grades[3] = gradeInput;
    cout << "Student" << setw(10) << "Grade" << endl;
    for (size_t j{ 0 }; j < grades.size(); ++j) {
        cout << setw(7) << j << setw(10) << grades[j] << endl;
    }
    array<int, 5> q{ 8,8,8,8,8 };
    cout << "Array q Values:" << endl;
    for (size_t k{ 0 }; k < q.size(); ++k) {
        cout << q[k] << endl;
    }
    array<float, 100> temp;
    cout << "Temperatures (F): " << endl;


    for (size_t i{ 0 }; i < temp.size(); ++i) {
        double a;
        a = rand() % 150;
        temp[i] = a;
        cout << temp[i] << endl;
    }
    double total{ 0.00 };

    for (size_t j{ 0 }; j < temp.size(); ++j) {
        total += temp[j];

    }
    cout << "Total of Temperatures: " << total << endl;

    return 0;
}


