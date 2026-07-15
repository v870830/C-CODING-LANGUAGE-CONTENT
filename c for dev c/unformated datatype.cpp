#include<stdio.h>
//int main(){
//	int a=11;
//	if(a==10){
//	goto mylabel;
//	}
//mylabel:
//	printf("this is in gotot");
//	
//	return 0;
//}


//int main(){
//	printf("hello\n");
//	return 0;
//	printf("olleh");
//}

//int main(){
//	int a=9;
//	int b=2;
//	printf("%i",float(a/b));
//}

//int main(){
//	char ch;
//	ch=getchar();
//	putchar(ch);
//	return 0;
//	
//}

//int main(){
//	char vansh[20];
//	scanf("%s",vansh);
//	printf("%s",vansh);
//}

//int main()
//{
//	int s = 6;
//	int x;
//	while (s--) {
//		x = getchar();
//		putchar(x);
//	}
//	return 0;
//}

int main(){
	int n,i=2;
	scanf("%i",&n);
	if(n>=2){
		for(i;i<n;i++){
			if(n%i==0){
				printf("is not a prime");
				break;
			}
	}
	}else if(n<=1){
		printf("not a prime");
	}else{
		printf("is a prime number");
	}
}





