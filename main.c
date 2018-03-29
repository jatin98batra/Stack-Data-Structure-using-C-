/*
Simple stack data structure built on C.
The UB is the Upper Bound and is the maximum size of array.
The LB is lower bound that is at -1 initially and its acting as the symbol for the base of the stack
Everything is almost self explaining
if you find any difficulty while understanding the code feel free to mail me at:

jatin98batra@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>
#define UB 10
#define LB -1
int array[UB]={0,0,1,1,1,1,1,5,8,9},top=-1;

void Push()
{   if(top!=UB-1)
    {
        printf("\nEnter the value to be pushed\n");
        int n;
        scanf("%d",&n);
        top++;
        array[top]=n;
    }
    else
        printf("\nBuddy don't you get sooo HIGH \n");
}
void Pop()

{
if(top!=LB)
{
    printf("\nOne Number is going to be deleted\n");
    top--;
}
else
    printf("\ncan't dig deep\n");
}

void Traversal()
{
    if(top!=LB)
    {printf("\n");
     for(int i=top;i>=0;i--)
     {
        printf("\n_______%d_______",array[i]);
     }
     }
  else
    printf("\ncan't dig deep\n");

}

int main()
{
int choice;
int ques=1;

while(ques)
{
printf("\n\nEnter The Choice");
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Show\n\n");

scanf("%d",&choice);
switch(choice)
{
  case 1:Push();
  break;
  case 2:Pop();
  break;
  case 3:Traversal();
  break;
  default:
   printf("\nFuck You\n\n");
    break;
}

printf("\nContinue?(1/0)");
scanf("%d",&ques);
}

return 0;
}
