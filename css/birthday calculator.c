#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

void calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear) {
    int ageYears = currentYear - birthYear;
    int ageMonths = currentMonth - birthMonth;
    int ageDays = currentDay - birthDay;

    // Adjust for negative days
    if (ageDays < 0) {
        ageMonths--;
        ageDays += daysInMonth((currentMonth == 1) ? 12 : currentMonth - 1, (currentMonth == 1) ? currentYear - 1 : currentYear);
    }

    // Adjust for negative months
    if (ageMonths < 0) {
        ageYears--;
        ageMonths += 12;
    }

    printf("Your age is: %d years, %d months, and %d days\n", ageYears, ageMonths, ageDays);
}

int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;

    // Input birth date
    printf("Enter your birth date (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    // Input current date
    printf("Enter the current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear);

    return 0;
}
