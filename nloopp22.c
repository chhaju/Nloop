#include<stdio.h>
int main(){
int n;
printf("Enter no. of lines : ");
scanf("%d",&n);
	int nst=1;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
		printf(" ");
		}
		int a =1;
	for(int j=1;j<=nst;j++){
	printf("%d",a);
	a++;
	}
	nst=nst+2;
	printf("\n");
}
return 0;
}
