#include <stdio.h>
int stack[5], top=-1,choice=0,size=5,element;
int main ()
{
 //int stack[5]={1,2,3,4}; // Cannot be done like this


 while(choice != 4)
 {
 menu();
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 if(top == size - 1)
 {
 printf("\n Stack Full Cannot Push ");
 break;
 }
 else
 {
 push();
 }
 break;

 case 2: if(top == - 1)
 {printf("\n Stack is Empty Cannot Pop \n ");
 break;}
 else
 {pop();}
 break;

 case 3: print(); break;

 case 4: choice = 4; break;
 default: printf("\n Wrong choice");
 break;
 }


 }




return 0;
}
 void menu()
 {
 printf("Enter your choice\n");
 printf("1.Push \n 2. Pop \n 3. Print \n 4.Exit \n");
 return;
 }
 void push()
 {
 printf("Enter element to push");
 scanf("%d",&element);
 ++top;
 stack[top]=element;
 printf("Pushed %d",element);
 return;
 }
void pop()
 {
 printf("Poped Element is %d ",stack[top]);
 --top;
 return;
 }
void print()
{
 printf("-------Stack is ------- \n");
 for (int i = top; i >= 0; i--) {
 printf("\n %d \n",stack[i]);
 }

}
