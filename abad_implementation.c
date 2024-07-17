#include "abad_datetime.h"
#include <stdio.h>

// To check if it's a leap year.
int checkYearLeap (int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 ==  0));
}


// This one is like a helper function, no helper function jud ni to calculate the number of days in a month.
int daysInMonth(int month, int year) {
    int daysInMonths[] = { 31, checkYearLeap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return daysInMonths[month - 1];
}

//Same as one the above it is also a helper function to calculate the number of days since year 0.
int daysSinceYearZero(int day, int month, int year) { 
    int days = day;
    for (int y = 0; y < year; y++) {
        days += checkYearLeap(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        days += daysInMonth(m, year);			
    }
    return days;
}

// Calculate Difference of Two Dates
int calculateTDD(int day1, int month1, int year1, int day2, int month2, int year2)
{
	return daysSinceYearZero(day2, month2, year2) - daysSinceYearZero(day1, month1, year1);
    
}

// Function to "convert" date, to demonstrate input/output
void convertDateFormat (int day, int month, int year, int* outDay, int* outMonth, int* outYear)
{
    *outDay = day;
    *outMonth = month;
    *outYear = year;
}


