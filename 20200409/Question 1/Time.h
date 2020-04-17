//Time class definition

#include <string>
#include <iostream>
using namespace std;

//prevent multiple inclusions of this header
#ifndef TIME_H
#define TIME_H

class Time{

public:
    Time(); //defaults hour minute and second to zero
    explicit Time(int); //init hour, minute and second default to zero
    Time(int, int); //initializes hour and minute, second defaults to zero
    Time(int, int, int); //initializes hour and minute and second to zero

    void setTime(int, int, int); //sets hours minutes and seconds
    string toUniversalString() const; //24 hour format
    string toStandardString() const;

private:
    unsigned int hour{0}; // 0-23
    unsigned int minute{0}; //0-59
    unsigned int second{0}; //0-59

};

#endif
