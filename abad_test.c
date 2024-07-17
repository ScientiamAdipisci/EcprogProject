#include <stdio.h>
#include "abad_datetime.h"

int main() {
    int year;
    int day1, month1, year1;
    int day2, month2, year2;
    int outDay, outMonth, outYear;
    char firstlett;

    // Ask user to input if iss a leap year or not.
    printf("Enter a year: ");
    scanf_s("%d", &year);

    if (checkYearLeap (year))
    {
        printf("%d is a leap year.\n\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n\n", year);
    }

    // Ask user to input two dates and calculate the difference in days.
    printf("To calculate difference in days input two dates. \n");
    printf("Enter Start Date (MM DD YYYY): ");
    scanf_s("%d %d %d", &month1, &day1, &year1);
    printf("Enter End Date (MM DD YYYY): ");
    scanf_s("%d %d %d", &month2, &day2, &year2);

    int difference = calculateTDD (day1, month1, year1, day2, month2, year2);
    printf("Difference in days: %d\n\n", difference);

    //convert date format.
    printf("Enter a date to convert (MM DD YYYY): ");
    scanf_s("%d %d %d", &month1, &day1, &year1);
    
    convertDateFormat (day1, month1, year1, &outDay, &outMonth, &outYear);
    
    printf("Converted Date for US and EU standard: %d/%d/%d\n", outMonth, outDay, outYear);
    printf("Converted Date for US and EU and for International Standard: %d-%d-%d\n\n", outMonth, outDay, outYear);


    //hehe
    printf("English or Spanish: ");
    scanf_s(" %c", &firstlett);

    if (firstlett == 'E' || firstlett == 'e')
    {
        printf("Please don't fail me\n");
    } 
    else if (firstlett == 'S' || firstlett == 's')
    {
        printf("Por favor no me falles\n");
    }
    else
    {
        printf("Invalid Language");
    }

    return 0;
}

