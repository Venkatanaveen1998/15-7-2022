#include<stdio.h>
#define s 7  
int stack[s];
int tos=-1;
void push(int ele)
{
	if(tos==s-1)
	{
		printf("stck is full\n");
		return;
	}
	else
	{
	tos++;          
	stack[tos]=ele;
	}
}
void pop()
{
    getmin();
	if(tos==-1)
	{	
		printf("stck is empty\n");
		return;
	}
	else
	{
	printf("poped ele %d\n",stack[tos]);
	tos--;
	}
}
void display()
{
	if(tos== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=tos;i++)
	printf("%d\n",stack[i]);
}
void getmin()
{
    int min;
    min=stack[tos];
    for(int i=0;i<tos;i++)
    {
        if(stack[i]<min)
        min=stack[i];
    }
    printf("min = %d \n",min);
}
int main()
{
	push(7);
	push(33);
	push(5);
	push(10);
	push(3);
	push(100);
	push(25);
	display();
	pop();
	pop();
	pop();
	pop();
}
