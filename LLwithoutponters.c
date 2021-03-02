#include <stdio.h>
struct node
{
 int data;
 struct node *link;
};
typedef struct node ll;
int main ()
{
 ll l1,l2,l3,l4;
 l1.data=2;
 l2.data=4;
 l3.data=6;
 l4.data=8;

 l1.link = &l2 ;
 l2.link = &l3;
 l3.link = &l4;
 l4.link = NULL;

 printf("\n %d %u --> ",l1.data,l1.link);
 printf(" %d %u --> ",l2.data,l2.link);
 printf(" %d %u --> ",l3.data,l3.link);
 printf(" %d %u --> \n",l4.data,l4.link);

return 0;
}
