 #include<stdio.h>
//int sum(int a,int b);//function decleraition here we can do it outside and inside of the main function 
//int main(){
//	int num1,num2,total=0;
//	printf("please enter first number:  ");
//	scanf("%i",&num1);
//	printf("please enter the second number");
//	scanf("%i",&num2);
//	total=sum(num1,num2);
//	printf("total of two number is : %d",total);
//	return 0;
//}
//int sum(int a,int b){
//	return (a+b);
//}


//int sum(int a,int b){
//	return (a+b);
//}//here you can it upper function header if you are not delerar thefunction
//int main(){
//	int num1,num2,total=0;
//	printf("please enter first number:  ");
//	scanf("%i",&num1);
//	printf("please enter the second number");
//	scanf("%i",&num2);
//	total=sum(num1,num2);
//	printf("total of two number is : %d",total);
//	return 0;
//}


//int mul(int a,int b){
//	return a*b;
//}
//int div(int a,int b){
//	return a/b;
//}
//int main(){
//	int a,b,multiply=0,division=0;
//	scanf("%i",&a);
//	scanf("%i",&b);
//	multiply=mul(a,b);
//	division=div(a,b);
//	printf("multiplication of two number is %i\n",multiply);
//	printf("division of two number is %i",division);
//	return 0;
//}



//int mul(int a,int b){
//	printf("%multiplication : %i\n",a*b);
//	printf("division : %i",a/b);
//	
//}
//int main(){
//	int a,b,multiply;
//	scanf("%i\n",&a);
//	scanf("%i",&b);
//	multiply=mul(a,b);
//	return 0;
//}

//int main(){
//	int a;
//	scanf("%i",&a);
//	printf("%i",a);
//	return 0;
//}



//int  func1(int n){
//	int i=0;
//	for(i;i<=n;i++){
//		printf("%d ",i);
//	}
//	return 0;
//}
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int result = func1(n);
//	printf("answer of your query is :  %d",result);
//	return 0;
//}


//void add(int a,int b);
//int add(){
//	int a,b;
//	scanf("%d %d",a,b);
//	int add=a+b;
//	printf("the value of add is : %d",add);
//}
//int main(){
//	add();
//	return 0;
//}







int main(){
	int arr[10];
	int *parr=arr;
	for(int i=0;i<10;i++){
		scanf("%d",parr+i);
	}
	for(int i=0;i<10-1;i++){
		for(int j=0;j<10-1-i;j++){
			if(*(parr+j)>*(parr+j+1)){
				int temp=*(parr+j);
				*(parr+j)=*(parr+j+1);
				*(parr+j+1)=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",*(parr+i));
	}
	return 0;
}














