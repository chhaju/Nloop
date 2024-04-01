#include<stdio.h>
int main()
{  
	int N,M;
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&N);
	printf("ENTER THE NUMBER :- ");
	scanf("%d",&M);
	
	for(int i=1;i<=N;i++)
	{
		if(i==1 || i==N)
		{
			for(int j=1;j<=M;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for(int j=1;j<=M;j++)
			{
				if(j==1 || j==M)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
}
