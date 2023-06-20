#include<stdio.h>
int main()
{
  int marks;
  printf("enter marks:");
  scanf("%d",&marks);
  if(marks<0||marks>100)
  {
    printf("wrong entry");
  }
    else if(marks<50)
  {
    printf("grade f");
  }
    else if(marks>=50&&marks<60)
  {
    printf("grade E");
  }
    else if(marks>=60&&marks<70)
  {
    printf("grade D");
  }
    else if(marks>=70&&marks<80)
  {
    printf("grade C");
  }
    else if(marks>=80&&marks<90)
  {
    printf("grade B");
  }
    else
  {
    printf("grade A");
  }}
