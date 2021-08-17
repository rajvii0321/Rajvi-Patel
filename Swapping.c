//Swapping of values without using any temporary variable
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  clrscr();
  
  printf("\nEnter the value of a:= ");
  scanf("%d", &a);
  printf("\nEnter the value of b:= ");
  scanf("%d",&b);
  
  a=a+b;
  b=a-b;
  a=a-b;
  
  printf("\nSwapped value of a is: ",a);
  printf("\nSwapped value of b is: ",b);
  
  getch();
  return 0;
  }
  
