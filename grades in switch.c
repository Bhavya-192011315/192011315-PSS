#include<stdio.h>
int main()
{
  int marks;
  printf("enter marks:");
  scanf("%d",&marks);
  switch(marks/10)
  {
  case 10:
  case 9:
  printf("grade A");
  break;
  case 8:
  printf("grade B");
  break;
  case 7:
  printf("grade C");
  break;
  case 6:
  printf("grade D");
  break;
  case 5:
  printf("grade E");
  break;
  case 4:
  printf("grade F");
  break;
  }
  return 0;
  }
