// WAP that takes two operands and one operator from the user, perform the operation, prints the result by using Switch statement. 
#include<stdio.h>
int main ()
{
   int N,a,b;
   printf("press 1 for addition\n press 2 for subtraction\n press 3 for multiplication\n press 4 for division\n"); // fixed spelling + newline
   scanf("%d",&N);
   printf("Now enter your two numbers="); // unchanged
   scanf("%d%d",&a,&b);
   switch(N)
   {
       case 1:
       printf("addition of %d & %d=%d\n",a,b,a+b); // newline
       break;
       case 2:
       printf("subtraction of %d & %d=%d\n",a,b,a-b); // newline
       break;
       case 3:
       printf("multiplication of %d & %d=%d\n",a,b,a*b); // fixed spelling + newline
       break;
       case 4:
       if(b==0)
       {
           printf("division is not possible\n"); // fixed spelling + newline
       }
       else
       {
           printf("division of %d & %d=%.2f\n",a,b,(float)a/b); // newline
       }
       break;
       default:
       printf("please select numbers between 1 to 4\n"); // fixed spelling + newline
   }
   return 0; // ensure main returns an int
}