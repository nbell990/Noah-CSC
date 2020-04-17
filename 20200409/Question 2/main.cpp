#include <iostream>
using namespace std;

class Example {
public:
    explicit Example(int y = 10){
        data = y;
    }


    int getIncrementedData() {

        return ++data;
    }
    int getCount() {
        cout << "Data is " << data << endl;
        return count;
    }
private:
    int data;
    static int count;
};