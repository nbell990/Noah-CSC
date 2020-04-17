// Time class member function definitions

#include <iomanip> //setw and setfill
#include<stdexcept> //invalid_argument
#include <sstream> // ostringstream class
#include <string>
#include "Time.h"

using namespace std;
//Time Constructor initializes each data member
Time::Time() : Time{0,0,0} {}
Time::Time(int hour) : Time{hour, 0, 0} {}
Time::Time(int hour, int minute) : Time{hour, minute, 0} {}


//Set a new time using universal time

void Time::setTime(int h, int m, int s){
    //validate hour minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
    hour = h;
    minute = m;
    second = s;
    }
    else{
    throw invalid_argument(
            "hour, minute and/or second was out of range");
    }
}
// return time in universal format


string Time::toUniversalString() const{
    ostringstream output; //creates an object of class ostringstream named output, which returns output.str() as a formatted string
    output << setfill('0') << setw(2) << hour << ":"
    <<setw(2) << minute << ":" << setw(2) << second;
    return output.str(); //returns the formatted string.
}

//return time in standard format
string Time::toStandardString() const {
    ostringstream output;
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":"<<
    setw(2) << second << (hour < 12 ? "AM" : " PM");
    return output.str(); // returns formatted string

}
