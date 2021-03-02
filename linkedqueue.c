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
case 1: enqueue(); break;
case 2: dequeue(); break ;
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
printf("--------Linked Queue -----");
printf ("\nEnter your choice \n");
printf
 ("\n1.Enqueue \n2.Dqueue \n3.Print \n4.Exit \n");
return;
}
void enqueue(){

 ll *temp;int i;ll * temp1;

 // Gets executd only Once
 if(first == NULL) // When the queue is empty
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
void dequeue() // delete first of Linked list is equal to dequeue
{
 ll *t1=NULL, *t2=NULL;
 if(first == NULL)
 {
 printf("Queue Empty ");
 return;
 }
 t2 = first;
 printf("Dequeued %d \n",first->data);
 first = first = first -> link;
 free(t2);
}
void print(){

 ll *t2=NULL;
 if(first == NULL)
 {
 printf("Queue Empty ");
 return;
 }
 t2 = first;
 for(;t2!=NULL;)
 {printf("%d \t",t2->data);
 t2=t2->link;
 }

}
