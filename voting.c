#include<stdio.h>
int main()
{
  int age;
  scanf("%d",&age);
  if(age>=18)
  {
    printf("you are eligible for voting\n");
  }
  else if(age<18)
  {
    printf("you cannot vote\n");
   }
 }     
