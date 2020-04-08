#include <iostream>
#include <array>
#include <string>
using namespace std;


int main(){
const size_t rows{2};
const size_t columns{3};
size_t elements = rows * columns;

array<array<int, columns>, rows> t{1,2,3,4,5,6};

cout << "How many rows does t have? : " << rows << endl;
cout << "How many columns does t have?: " << columns << endl;
cout << "How many elements in t?: " << elements << endl;

cout << "\nElements in row 1 of t: ";
cout <<"\n"<< t[0][0] << endl;
cout << t[0][1] << endl;
cout << t[0][2] << endl;

cout << "Elements in Column 1 of t: ";
cout << "\n"<< t[0][0] << endl;
cout << t[1][0] << endl;

cout << "\nArray t Row 1:\n" << t[0][0] << "\n" << t[0][1] << "\n" << t[0][2] << endl;
cout << "Array t Row 2:\n" << t[1][0] << "\n" << t[1][1] << "\n" << t[1][2] << endl;

cout << "Original Value of array t, row 1, column 2: " << t[0][1] << endl;

t[1][0] = 0;

cout << "\nNew value of array t Row 1 Column 2: " << t[1][0] << endl;

t = {};
string answer;
if (t[1][1] == 0){
    answer = "yes";
}
else{
    answer = "no";
}
cout << "Did the Array reset to zero?: " << answer;

t = {1,2,3,4,5,6};

for (size_t i{0} ; i < rows; i++) {
    for (size_t j{0}; j < columns; j++) {
        t[i][j] = 0;

    }
}

cout << "\nNew Array t Row 1:\n" << t[0][0] << "\n" << t[0][1] << "\n" << t[0][2] << endl;
cout << "New Array t Row 2:\n" << t[1][0] << "\n" << t[1][1] << "\n" << t[1][2] << endl;





}
