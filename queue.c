#include <stdio.h>
int f=0,r=-1,size=6;int ch=0;int data=0;
int queue[6];
int
main ()
{
 int queue[6];

 while(ch!=4)
 {
 printf("\n1.enqueue \n 2.dequeue \n 3.print \n4.Exit \n");
 printf("Enter your choice ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: enqueue();break;
 case 2: dequeue(); break;
 case 3: print(); break;
 case 4: exit(0);
 }

 }


}
 void enqueue()
 {
 
 if((r==size-1))
 {
 printf("queue full");
 return;
 }
 ++r;
 printf("Enter Data to enqueue");
 scanf("%d",&data);
 queue[r]=data;
 printf("Queued Data\n");

 }

 void dequeue(){
 if((f==0) && (r==-1))
 {
 printf("Q is empty ");
 return;
 }
 printf("dequeued data is %d",queue[f]);
 ++f;
 }
 void print(){


 for (int i = f; i <= r; i++) {
 printf("%d \t ",queue[i]);

 }
 }
