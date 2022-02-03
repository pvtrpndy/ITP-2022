//Program to calculate age by finding difference between current date and date of birth

#include <stdio.h>

struct date
{
    int days;
    int months;
    int years;
};

int main()
{
    struct date dob;
    struct date current;
    printf("\nEnter the Date of Birth\n");
    scanf("%d%d%d", &dob.days, &dob.months, &dob.years);

    printf("\nEnter the current date\n");
    scanf("%d%d%d", &current.days, &current.months, &current.years);

    struct date dif;

    dif.days = current.days - dob.days;
    int correction = 0;
    if (dif.days < 0)
    {
        dif.days += 30;
        current.months--;
        switch (current.months)
        {
        case 0:
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            correction = 1;
            break;
        case 2:
            correction = -2;
            break;
        }
    }

    dif.days += correction;

    dif.months = current.months - dob.months;
    if (dif.months < 0)
    {
        dif.months += 12;
        current.years--;
    }

    dif.years = current.years - dob.years;
    if (dif.years < 0)
    {
        printf("\n Wrong format between the current date and date of birth");
        return 0;
    }
    printf("\nYou are currently %d days, %d months and %d years old.", dif.days, dif.months, dif.years);
}
