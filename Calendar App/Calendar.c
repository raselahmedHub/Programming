#include<stdio.h>

int getTheFirstDayOfTheYear(int year){
 int day = (year*365 + ((year-1)/4) - ((year-1)/100) + ((year-1)/400)) %7;
}

int main(){
char *months[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
char *days[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int daysInmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k,totaldays,weekday=0,SpaceCounter,year;

printf("Enter your favorite year: ");
scanf("%d",&year);

if((year % 4 ==0 && year % 100 !=0) || (year % 400 ==0)){
   daysInmonth[1]=29;
}

weekday = getTheFirstDayOfTheYear(year);

for(i=0;i<=12;i++){

    printf("\n\n\n------------------------%s-------------------------\n\n\n",months[i]);

for(j=0;j<7;j++){


            printf("%6s",days[j]);

}
printf("\n\n\n");


      for(SpaceCounter=1;SpaceCounter<=weekday;SpaceCounter++){
        printf("      ");
      }

   totaldays = daysInmonth[i];
    for(k=1;k<=totaldays;k++){

             printf("%6d",k);
             weekday++;
        if(weekday>6){
            weekday=0;
            printf("\n");
        }
    }
}


printf("\n\n\n");

return 0;
}
