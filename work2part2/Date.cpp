#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include <ctime>

Date::Date() {
	time_t rawtime;
	struct tm* timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	day = timeinfo->tm_mday;
	month = timeinfo->tm_mon + 1;
	year = timeinfo->tm_year + 1900;
}

Date::Date(int d, int m, int y) {
	year = y;
	month = m;
	day = d;
}

void Date::setMonth(int m) {
	month = m;
}

void Date::setYear(int y) {
	year = y;
}

void Date::setDay(int d) {
	day = d;
}

void Date::printDate() const {
	if (day < 10)
		cout << 0 << day;
	else
		cout << day;

	cout << "/";

	if (month < 10)
		cout << 0 << month;
	else
		cout << month;

	cout << "/";
	cout << year << endl;
}

