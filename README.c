# checking-working-day.c
void main()
{
int holidays[3];
holidays[0]=date(2005, 1, 1);            
holidays[1]=date(2004,12,25);            
holidays[2]=nextWeekDay(holidays[2]);    
 
printf("\n StartDate   days   newDate");
int startdate=date("1 jan 2005");
for(int i=-50;i<50;i+=10)
{
  int d,m,y;
  dateYMD(startdate,y,m,d);
  printf("\n %2d-%2d-%d",d,m,y);

  dateYMD(workDay(startdate, i, 3, holidays),y,m,d);
  printf("  %2d   %2d-%2d-%d", i, d,m,y);
}
}
