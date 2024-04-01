#include <stdio.h>
int main(){
int n;
printf("Enter no. of lines : ");
scanf("%d",&n);
	
		for(int j=1;j<=i;j++){
		    printf("%d",j);
		 }
		 for(int k=1;k<=i-1;k++){
		 printf("%d",a);
		 a--;
		 }
		 printf("\n");
		 int nsp = n-1;
	for(int i=1;i<=n;i++){
	int a = i-1;
	for(int q=1;q<=nsp;q++){
	printf(" ");
	}
	nsp--;
	}
return 0;
}
	
	
	
/*int nst=n;
int nsp=1;
int p=65;
	for(int i=1;i<=2*n+1;i++){
	char ch = (char)p;
	printf("%c",p);
	p++;
	}
	printf("\n");
	for(int i=1;i<=n;i++){
	int a=65;
	for(int j=1;j<=nst;j++){
	char ch = (char)a;
	printf("%c",a);
	a++;
	}
	for(int k=1;k<=nsp;k++){
	
	printf(" ");
	a++;
	}
	for(int j=1;j<=nst;j++){
	char ch = (char)a;
	printf("%c",a);
	a++;
	}
	nst--;
	nsp+=2;*/
