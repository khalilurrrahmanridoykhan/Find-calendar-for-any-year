 #include<stdio.h>
 #include<math.h>
 #include<windows.h>

 int getFirstDayOfTheYear(int year){

    int day= (year*365 + ((year-1)/4) - ((year-1)/100) + ((year-1)/400)) %7;

    return day;
 }

 int main()
 {
     system("color 1a");
    int i,j,totaDays,weekDay=0,spaceCounter=0,year;
    char *month[]= {"January", "February", "March", "April", "May", "Jun", "July", "August", "September", "October", "November", "December"};

    int daysInMonth[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter your favorite year:\n");
    scanf("%d", &year);
    printf("Welcome to %d",year);

    if ((year%4==0 && year%100!=0) || (year%400==0)){

        daysInMonth[1]=29;
    }

    weekDay= getFirstDayOfTheYear(year);

    for (i=0;i<12 ;i++ ){

        printf("\n--------------------%s----------------------\n",month[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for (spaceCounter=1; spaceCounter<=weekDay;spaceCounter++ ){

            printf("      ");
        }

        totaDays= daysInMonth[i];
        for (j=1;j<=totaDays;j++){

            printf("%6d", j);
            weekDay++;
            if (weekDay>6){

                weekDay=0;
                printf("\n");
            }

        }

    }



    return 0;

 }

