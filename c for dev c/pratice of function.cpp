#include<stdio.h>
int  func1(int n){
	int i=1;
	for(i;i<=n;i++){
		printf("%d ",i*i);
	}
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("answer of your query is: ");
	int result = func1(n);
	return 0;
}
