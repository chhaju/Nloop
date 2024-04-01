#include <stdio.h>
int main(){
int n,m;
printf ("Enter a rows: ");
scanf("%d",&n);
printf("Enter a colume: ");
scanf("%d", &m);
	for(int i=1; i<=n; i++)
	{
		if(i==1 && i==n)
		{
			for(int j=1;j<=n;j++);
			{
			 	printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("* ");
			for(int j=1;j<=m;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
			
		}
	}
	return 0;
}

