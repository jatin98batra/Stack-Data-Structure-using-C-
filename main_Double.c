/*
Simple stack data structure built on C.
The UB is the Upper Bound and is the maximum size of array.
The LB is lower bound that is at -1 initially and its acting as the symbol for the base of the stack
Everything is almost self explaining
if you find any difficulty while understanding the code feel free to mail me at:

jatin98batra@gmail.com

EDIT: Now this on



*/



#include <stdio.h>
#include <stdlib.h>
#define UB 10
#define LB -1
int i;
int array[UB],top=-1;
int st_arr[UB],top1=-1;
int select=0;

void Push()
{   printf("Which Stack?\n0.Stack 0\n1.Stack 1\n");
    scanf("%d",&select);
    if((select==0)||(select==1))
    {
    if((top!=(UB-1))&&(select==0)) //Push: Stack 0
        {
        printf("\nEnter the value to be pushed in Stack0:\n");
        int n;
        scanf("%d",&n);
        top++;
        array[top]=n;
        }
    else if((top1!=(UB-1))&&(select==1)) //Push: Stack 1
       {
        printf("\nEnter the value to be pushed in Stack1:\n");
        int n;
        scanf("%d",&n);
        top1++;
        st_arr[top1]=n;
       }
    else
        printf("\nOverflow! Bitch\n");
    }
    else
        printf("\nWrong Choice\n");

}// End of Push();

void Pop()
{
    printf("Which Stack?\n0.Stack 0\n1.Stack 1\n");
    scanf("%d",&select);
if((select==0)||(select==1))

{
    if((top!=LB)&&(select==0))
{   printf("\nOne Number is going to be deleted from Stack 0:\n");
    top--;
    }
else if((top1!=LB)&&(select==1))
    {
 printf("\nOne Number is going to be deleted from Stack 1:\n");
    top1--;
    }

else printf("\nUnderflow! Bitch\n");
}//End of if((sel==0)||(sel==1));
else printf("\nWrong Choice\n");
}//End OF POP

void Traversal()
{
    if((top!=LB))
    {
    printf("\n");
     for(i=top;i>=0;i--)
     printf("\n_______%d_______",array[i],st_arr[i]);
     //break
     printf("\nStack A\n\n");

     }
    else
    printf("\ncan't dig deep in Stack A\n");
    if((top1!=LB))
    {
    printf("\n");
     for(i=top1;i>=0;i--)
     printf("\n_______%d_______",st_arr[i]);
       //break
     printf("\nStack B\n\n");

    }
    else
    printf("\ncan't dig deep in Stack B\n");

}

int main()
{
    //Basic Initializing both array
for(i=0;i<UB;array[i++]=-1);
for(i=0;i<UB;st_arr[i++]=-1);
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
