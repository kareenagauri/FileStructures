#include <stdio.h>
#include <stdlib.h>
void main( )
{
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int i,d,m,y,nd,nm,ny,ndays;
printf("enter the date,month,year");
scanf("%d%d%d",&d,&m,&y);
if((y%100!=0)&&(y%4==0)||(y%400==0))
{
month[2]=29;
}
ndays =month [m-1];
if((y<1812) || ( y>2012) || (d<1) || (d>ndays)|| (m<1) || ( m>12))
{
printf ("invalid input");
}
else
{
if(m==2)
{ if(y%100==0)
{ if(y%400==0)
ndays=29;
}
else if(y%4==0) ndays=29;
}
nd=d+1; nm=m; ny=y; if(nd>ndays)
{
nd=1; nm++;
}
if(nm>12)
{
nm=1; ny++;
}
printf("\n Given date is %d:%d:%d",d,m,y);
printf("\n Next day date is %d:%d:%d",nd,nm,ny);
}
return 0;
}
