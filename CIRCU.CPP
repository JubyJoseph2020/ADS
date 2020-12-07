#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
# define size 5
int q[size],front=0,rear=0;
void main()
{
int ch,i;
clrscr();
void enq();
void deq();
void display();
while(i)
{
cout<<"\n1.add element";
cout<<"\n2.remove element";
cout<<"\n3.display";
cout<<"\nexit";
cin>>ch;
switch(ch)
{
case 1:enq();
break;
case 2:deq();
break;
case 3:display();
break;
case 4:exit(0);
}
}
}
void enq()
{
int no;
if(rear==size&&front==0)
cout<<"\nqueue full";
else
{
cout<<"\nenter the num";
cin>>no;
q[rear]=no;
}
rear++;
}
void deq()
{
int no,i;
if(front==rear)
cout<<"\neq full";
else
{
no=q[front];
front++;
cout<<"\n"<<no<<"removed";
}
}
void display()
{
int i,temp,front;
if(front==rear)
cout<<"\nqueue is empty";
else
{
cout<<"\nelement in the queue";
for(i=temp;i<rear;i++)
{
cout<<q[i]<<" ";
}}}

