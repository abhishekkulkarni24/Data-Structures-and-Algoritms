#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int num;
	printf("enter the number of disk\n");
	scanf("%d",&num);
	printf("the sequence of moves are\n");
	towers(num,'A','B','C');
	return 0;
}
void towers(int num,char source,char destination,char aux)
{ 
	if(num==1)
	{
		printf("\nmove disk 1 from %c to %c\n",source,destination);
		return;
	}
	towers(num-1,source,aux,destination);
	printf("\nmove disk %d from %c to %c\n",num,source,destination);
	towers(num-1,aux,destination,source);
}
