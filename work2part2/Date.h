#ifndef _DATE
#define _DATE
#include<iostream>
using namespace std;

class Date {
private:
	int day, month, year;

public:
	Date();
	Date(int , int , int );

	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }

	void setDay(int );
	void setMonth(int );
	void setYear(int );

	void printDate() const;
};

#endif

