#include <stdio.h>
int main(){
int n,m;
printf("Number of rows : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
	int a = 65;
	for(int j=1;j<=i;j++){
		if (i%2==0){
		char ch = (char)a;
		printf("%c ",ch);
		a++;
		}
		else{
			printf("%d ",j);

		}		
		
	}
		printf("\n");
}
return 0;
}
