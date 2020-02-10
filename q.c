#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue_arr[max];
int rear=-1;
int front=-1;
void main()
{
int choice;
while(1)
{
printf("1.insert\n2.delete\n3.display\n4.quit\n");
printf("enter your choice");
scanf("%d",&choice);
switch (choice)
{
case 1:insert(1);
case 3:display(1);
break;
case 2:delete(1);
break;
break;
case 4:exit();
default:printf("wrong choice\n")
}
}
}
void insert()
{
int added_item;
if(rear==(max))
printf("queue overflow\n");
else
{
if(front==-1)
front=0;
printf("input the element for adding in the queue:");
scanf("%d",&added_item);
{
if(front==-1//front>rear)
{
printf("queue underflow");
return;
}
else
}
printf("element deleted from queue is=%d",queue_arr[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1)
printf("queue is empty\n");
else
{
printf("queue is:\n");
for(i=front;i<=rear;i++)
printf("%d",queue_arr[i]);
printf("\n");
}
}

