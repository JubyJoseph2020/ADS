#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
void main()
{
top=-1;
printf("enter the size of the stack");
scanf("%d",&n);


#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push();
#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,i,x,top;
void push();
void pop();
void display();
void main ()
{
  printf("enter the size of stack");
  scanf(:%d",&n);
  printf("\nstack operations");
  printf("\n1.push\n 2.pop\n3.display/n4.exit");
  do
  {
  printf("enter the choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  {
  push();
  break;
  }
  case 2:
  {
  pop();
  break;
  }
  case 3:
  {
  display();
  break;
  }
  default:
  {
  printf("\nenter a valid choice");
  }
  }
  }
  while(choice!=4);
  return 0;
  }
  if(top>=n-1)
  {
  printf("/nstack is overflow");
  }
  else
  {
  printf("\nenter a value to be pushed");
  scanf("%d",&x);
  top++;
  stack[top]=x;
  }
  }
  void pop()
  {
  if(top<=-1)
  {
  printf("\n stack is under flow");
  top--;
  }
  void display()
  {
  if(top>=0)
  {
  printf("\nthe element in stack");
  for(i=top;i>0;1--)
  printf("\n%d",stack[i]);
  printf("\npress next choice");
  }
  else
  {
  printf("\nthe stack is empty");
  }

