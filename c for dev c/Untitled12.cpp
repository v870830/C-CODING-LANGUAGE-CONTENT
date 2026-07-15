#include<stdio.h>
//int main(){
//	int n;
//	scanf("%i",&n);
//	for (i=1,i<=n;i++)
//	{
//		if (i%2==0)
//		printf("Even");
//		else{
//			printf("odd");
//		}
//	}
//	return 0;
//}


int main(){
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
