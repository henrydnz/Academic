//calculate days to new year. Input is integers for "day month year" in that order. 

#include <stdio.h>

int day,month,year,leapYear,daysToNewYear;

int checkDate() { 
    int exceedDays = (day==31 && (month==2||month==4||month==6||month==9||month==11));
    int exceedFebruary = (month==2 && (day==30 || (day==29&&!leapYear)));
    return exceedDays||exceedFebruary;
}

int main() {
    while(scanf("%d%d%d", &day, &month, &year)&&!checkDate()) { 
        leapYear=(!(year%4)&&(year%100))||(!(year%100)&&!(year%400));
            switch(month) {
                case 1: daysToNewYear=365-day+leapYear; break;
                case 2: daysToNewYear=334-day+leapYear; break;
                case 3: daysToNewYear=306-day; break;
                case 4: daysToNewYear=275-day; break;
                case 5: daysToNewYear=245-day; break;
                case 6: daysToNewYear=214-day; break;
                case 7: daysToNewYear=184-day; break;
                case 8: daysToNewYear=153-day; break;
                case 9: daysToNewYear=122-day; break;
                case 10: daysToNewYear=92-day; break;
                case 11: daysToNewYear=61-day; break;
                case 12: daysToNewYear=31-day; break;
        }
        printf("%d\n", daysToNewYear);
    }
    return 0;
}
