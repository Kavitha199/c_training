#include <stdio.h>
struct node
{
int data;
struct node *link;
};
typedef struct node ll;
ll * first = NULL, *top=NULL;
int data = 0, choice = 0, sizeoflist;
int
main ()
{
while (choice != 4)
 {
menu ();

scanf ("%d", &choice);

switch (choice)
{
case 1: push(); break;
case 2: pop(); break ;
case 3: print(); break;
case 4: exit (0);
default: printf ("Wrong choice");
 }
}
return
 0;
}
void
menu (){
printf("--------Linked Stack -----");
printf ("\nEnter your choice \n");
printf
 (" 1.Push \n 2.Pop \n 3.Print \n 4.Exit \n");
return;
}
void push(){

 ll *temp;int i;ll * temp1;

 // Gets executd only Once
 if(first == NULL) // When the stack is empty
 {
 first = (ll*) malloc(sizeof(ll));
 printf("Enter Data ");
 scanf("%d",&data);
 first->data =data;
 first->link = NULL;
 top = first;
 return;
 }

 temp = first;

 for(i=0;temp->link != NULL;)
 {
 temp=temp->link;
 }

 temp1 = (ll*) malloc(sizeof(ll));
 printf("Enter Data ");
 scanf("%d",&data);
 temp1->data =data;
 temp->link = temp1;
 return;
}
void pop()
{
 ll *t1=NULL, *t2=NULL;
 if(first == NULL)
 {
 printf("Stack Empty ");
 return;
 }
 t2 = first;

 for(;t2->link != NULL;)
 {
 t1 = t2;
 t2=t2->link;
 }
 printf("Poped Element is %d \n",t2->data);
 t1->link = NULL;
 free(t2);
}
void print(){

 ll *t2=NULL;
 if(first == NULL)
 {
 printf("Stack Empty ");
 return;
 }
 t2 = first;
 for(;t2!=NULL;)
 {printf("%d \t",t2->data);
 t2=t2->link;
 }

}
