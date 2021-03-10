#include<stdio.h>
#include<stdlib.h>

void push(int n);
void pop();
void traverse();
void tos();
int stack[5],top=-1;

int main()
{
        int ch,n;
        do
        {
        printf("Enter the choice\n");
        printf("1.push\n2.pop\n3.traverse\n4.top of stack\n5.exit");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                push(n);
                break;
            }
        case 2:
            {
                    pop();
                    break;
            }
        case 3:
                { 
                    traverse();
                    break;
                }
        case 4:
                {
                    tos();
                    break;
                }
        case 5:
            {
                exit(0);
            }
                default:
                printf("Wrong input\n");
                }
        }while(ch!=5);

         return 0;
}


        void push(int n)
        {
                    int a;
                    if(top>4)
                    {
                        printf("stack overflow\n");
                    }
                    else
                    {
                        printf("Enter the number to be pushed\n");
                        scanf("%d",&a);
                        top=top+1;
                        stack[top]=a;
                        printf("%d is pushed\n",stack[top]);
                    }
         }

        void pop()
        {
            if(top==-1)
                printf("\n stack underflow");
            else
            {
                printf("%d is popped\n",stack[top]);
                top=top-1;
            }
        }

        void traverse()
        {
                int i;
                if(top==-1)
                {
                    printf("Stack is  empty\n");
                }
                else
                {
                    for(i=top;i>-1;i--)
                        {
                            printf("%d\n",stack[i]);
                        }
                }
        }

        void tos()
        {
            if(top==-1)
                printf("\n stack empty");
            else
                printf("%dis tos\n",stack[top]);
        }    
                   