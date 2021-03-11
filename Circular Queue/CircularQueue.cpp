#include<stdio.h>
void enqueue(int x);
void dequeue();
void traverse();
int front=-1,rear=-1,ch;
int queue[5],size=5;

int main()
{

	do
	{
		
		printf("\nenter your choice\n");
		printf("\n1:enqueue\n2:dequeue\n3:traverse\n4:exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{ 
				enqueue(queue[rear]);
				break;
			}
			case 2:		
			{
				dequeue();
				break;
			}		

			case 3:
			{
				traverse();
				break;
				
			}
			case 4:
				{
					break;
				}

		}

	}while(ch!=4);

    return 0;
}
void enqueue(int x)
{
	
	if(front==(rear+1)%size)
	printf("\n queue overflow");
	else
	{

		if(front%size==-1)
		{
			front=(front+1)%size;
			rear=(rear+1)%size;
		}
		else
		{
			rear=(rear+1)%size;
		}
		printf("enter a number to enqueue\n");
		scanf("%d",&queue[rear]);
		printf("%d is enqueued\n",queue[rear]);
	}		
} 


void dequeue()
{
	if(front%size==-1)
		printf("\n queue underflow");
	else
	{
		printf("%d is dequeued",queue[front]);
		front=(front+1)%size;

		if(front==(rear+1)%size)
		{
			front=-1;
			rear=-1;
		}

	}

}

void traverse()
{
	int i;
	if(front%size==-1)
		printf("\nqueue empty");
	else
	{
		for(i=front;i<=(i%size);i++)
		printf("%d\n",queue[i]);
	}
}


