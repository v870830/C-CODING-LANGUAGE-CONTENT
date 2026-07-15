#include<stdio.h>
int rec(int n){
	int d1,sum=0,count=0;
	while(n>1){
		d1=n%10;
		sum+=d1;
		n=n/10;
		count+=1;
	}
	printf("%d\n",sum);
	printf("%d",count);
}
int main(){
	int n;
	scanf("%d",&n);
	rec(n);
	return 0;
}
