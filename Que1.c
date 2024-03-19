/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/

#include<stdio.h>
struct Date{

    int day;
    int month;
    int year;
};

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter Date:\n");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

void printDateOnConsole(struct Date *ptrDate)
{

    printf("%d/%d/%d",ptrDate->day,ptrDate->month,ptrDate->year);

}


int main()
{
    int choice;
    struct Date d1;

    do{

    printf("\n\n1:ACCEPT\n");
    printf("2:DISPLAY\n");
    printf("0:EXIT\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:
            printf("Exit\n");
            break;
        case 1:
            acceptDateFromConsole(&d1);
            break;
        case 2:
            printDateOnConsole(&d1);
            break;
        default:
            printf("Invalid Choice\n");
            break;

    }
    } while(choice!=0);
    
    return 0;
}