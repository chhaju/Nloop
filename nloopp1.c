#include <stdio.h>
int main(){
int n,m;
printf("Number of rows : ");
scanf("%d",&n);
printf("Number of colums : ");
scanf("%d",&m);

for(int i=1;i<=n;i++){
for(int i=1;i<=m;i++){
printf("*");
}
printf("\n");
}
return 0;
}
