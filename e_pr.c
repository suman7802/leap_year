#include <stdio.h>
int main()
{
    int year;
    printf("welcome in leap year finder \n");
    printf("Enter the year in 4 dig : \n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leap year \n", year);
    }
    else
    {
        printf("%d is a not leap year \n", year);
    }
    return 0;
}