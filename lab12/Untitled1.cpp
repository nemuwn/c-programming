#include<stdio.h> // include stdio.h library
int check_date(int date, int mon, int year);

int main(void)
{
    int day1, mon1, year1,
        day2, mon2, year2;

    int is_leap = 0, is_valid = 1;

    printf("Enter first date (MM/DD/YYYY): \n");
    scanf("%d/%d/%d", &mon1, &day1, &year1);

    printf("Enter second date (MM/DD/YYYY): \n");
    scanf("%d/%d/%d", &mon2, &day2, &year2);

    if(year1 > year2)
    {
        printf("0");
    }

    else if (year1 < year2)
    {
        printf("1");
    }


    else
    {
        if (mon1 ==  mon2)
        {
            if (day1 ==  day2)
            {
                printf("Both dates are the same.");
            }

            else if(day1 > day2)
            {
                printf("%02d/%02d/%d comes earlier than %02d/%02d/%d", 
                        mon2, day2, year2, mon1, day1, year1);
            }

            else
            {
                printf("%02d/%02d/%d comes earlier than %02d/%02d/%d", 
                        mon1, day1, year1, mon2, day2, year2);
            }
        }

        else if (mon1 > mon2)
        {
            printf("%02d/%02d/%d comes earlier than %02d/%02d/%d", 
                        mon2, day2, year2, mon1, day1, year1);
        }

        else 
        {
            printf("%02d/%02d/%d comes earlier than %02d/%02d/%d", 
                        mon1, day1, year1, mon2, day2, year2);
        }        
    }

    return 0; 
}


