#include<stdio.h>
//first question
//int main(){
//	int n;
//	scanf("%d",&n);
//	int factorial=0;
//	int fact=1;
//	for(int i=2;i<n;i++){
//		fact*=i;
//		if(fact==n){
//			factorial=1;
//			break;
//		}
//	}
//	if(factorial==1){
//		printf("factorial");
//	}
//	else{
//		printf("not factoprial");
//	}
//}



//q2 to count how many word in a string entered
#include<ctype.h>
//int main(){
//	char str[20];
//	int count=0;
//	fgets(str,20,stdin);
//	for(int i=0;str[i]!='\0';i++){
//		if(str[i]==' '){
//			count+=1;
//		}
//	}
//	printf("%d",count+1);
//}


//q3
//int main(){
//	char str[20];
//	fgets(str,20,stdin);
//	for(int i=0;str[i]!='\0';i++){
//		if(isupper(str[i])){
//			str[i]=tolower(str[i]);
//		}else{
//			str[i]=toupper(str[i]);
//		}
//	}
//	printf("%s",str);
//}

//q4
#include<string.h>
//int main(){
//	char str1[20];
//	char str2[20];
//	scanf("%s",&str1);
//	scanf("%s",&str2);
//	if(strcmp(str1,str2)==0){
//		printf("Yes");
//	}else{
//		printf("No");
//	}
//}


//q5(check wheter given string is palindrome or not)
//int main(){
//	char str[20];
//	int pali=0;
//	scanf("%s",&str);
//	int n=strlen(str);
//	for(int i=0;i<n/2;i++){
//		if(str[i]!=str[n-1-i]){
//			pali=-1;
//		}
//	}
//	if(pali==-1){
//		printf("Not");
//	}else{
//		printf("Yes");
//	}
//	return 0;
//}

//insert index at an a particular index
//int main(){
//	int n;
//	printf("Enter an integer n :");
//	scanf("%d",&n);
//	int arr[n];
//	printf("Enter number in loop");
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	int val,ind;
//	printf("Enter index: ");
//	scanf("%d",&ind);
//	printf("Enter valued: ");
//	scanf("%d",&val);
//	n++;
//	for(int i=n-1;i>=ind;i--){
//		arr[i]=arr[i-1];
//	}
//	arr[ind]=val;
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//Delete an element from an particular index
//int main(){
//	int n;
//	printf("Enter an integer n :");
//	scanf("%d",&n);
//	int arr[n];
//	printf("Enter number in loop");
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	int ind;
//	printf("Enter index: ");
//	scanf("%d",&ind);
//	n--;
//	for(int i=ind;i<n;i++){
//		arr[i]=arr[i+1];
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//quetion is to join two array
//int main(){
//	int arr[3]={1,2,3};
//	int arr2[4]={4,5,6,7};
//	int res[7];
//	for(int i=0;i<3;i++){
//		res[i]=arr[i];
//	}
//	for(int i=3;i<7;i++){
//		res[i]=arr2[i-3];
//	}
//	for(int i=0;i<7;i++){
//		printf("%d ",res[i]);
//	}
//	return 0;
//}


//int main(){
//	int arr[5]={1,2,3,4,5};
//	int sum=0;
//	for(int i=0;i<5;i++){
//		sum+=arr[i];
//	}
//	float avg=sum/5;
//	printf("%.2f",avg);
//	return 0;
//}


//int main(){
//	int arr[5]={1,2,2,3,2};
//	int n,count=0;
//	scanf("%d",&n);
//	for(int i=0;i<5;i++){
//		if(arr[i]==n){
//			count+=1;
//		}
//	}
//	printf("%d",count);
//}


//bubble sort
//int main(){
//	int n;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(arr[j]>arr[j+1]){
//				int temp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=temp;
//			}
//		}
//	}
//	printf("%d",arr[n-1-1]);
//	return 0;
//}



//reverse of an array
//int main(){ 
//int arr[5]={1,2,3,4,5}; 
//int n= sizeof(arr)/sizeof(arr[0]); 
//for(int i=0;i<n/2;i++){ 
//	int temp=arr[i]; 
//	arr[i]=arr[n-1-i]; 
//	arr[n-1-i]=temp; 
//} 
//for(int i=0;i<n;i++){ 
//printf("%d ",arr[i]); 
//} 
//}


//int main(){
//	int n;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	int hold=arr[0];
//	for(int i=1;i<n;i++){
//		if(arr[i]>hold){
//			hold=arr[i];
//		}
//	}
//	printf("largest value in array is : %d",hold);
//	return 0;
//}



//int main(){
//	int n,m,lcm=1;
//	scanf("%d",&n);
//	scanf("%d",&m);
//	int less=(n>m)?m:n;
//	for(int i=1;i<less;i++){
//		if(n%i==0 && m%i==0){
//			lcm*=i;
//		}
//	}
//	printf("%d",lcm);
//	return 0;
//}

//int main(){
//	int n,m,hcf=1;
//	scanf("%d",&n);
//	scanf("%d",&m);
//	int less=(n>m)?m:n;
//	for(int i=1;i<less;i++){
//		if(n%i==0 && m%i==0){
//			hcf=i;
//		}
//	}
//	printf("hcf is : %d",hcf);
//	return 0;
//}


//fibonic series
//int main(){
//	int n;
//	scanf("%d",&n);
//	int a=0;
//	int b=1;
//	int c;
//	printf("%d %d",a,b);
//	for(int i=2;i<n;i++){
//		c=a+b;
//		printf(" %d",c);
//		a=b;
//		b=c;
//	}
//}


//question to check given number is strong or not
//145=1!+4!+5!;
//int main(){
//	int n,d1;
//	scanf("%d",&n);
//	int temp=n,sum=0;
//	while(temp>0){
//		d1=temp%10;
//		int fact=1;
//		for(int i=d1;i>=2;i--){
//			fact*=i;
//		}
//		sum+=fact;
//		temp=temp/10;
//	}
//	if(sum==n){
//		printf("yes strong number.");
//	}else{
//		printf("not an strong number.");
//	}
//	return 0;
//}



//question check wheter perfect or not
//if 6->1,2,3,1+2+3==6 then perfect
//int main(){
//	int n,sum=0;
//	scanf("%d",&n);
//	for(int i=1;i<n;i++){
//		if(n%i==0){
//			sum+=i;
//		}
//	}
//	if(sum==n){
//		printf("Perfect number.");
//	}else{
//		printf("Non perfect number.");
//	}
//	return 0;
//}


//question find armstrong
//int main(){
//	int n,d1,sum=0;
//	scanf("%d",&n);
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		sum+=d1*d1*d1;
//		temp=temp/10;
//	}
//	if(sum==n){
//		printf("Armstrong number.");
//	}else{
//		printf("Not an Armstrong number");
//	}
//	return 0;
//}


//question find smallest number in intered integer
//int main(){
//	int n,d1;
//	scanf("%d",&n);
//	int hold=n%10;
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		if(d1<hold){
//			hold=d1;
//		}
//		temp=temp/10;
//	}
//	printf("%d",hold);
//	return 0;
//}


//find largest number in integer
//int main(){
//	int n,d1;
//	scanf("%d",&n);
//	int hold=n%10;
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		if(d1>hold){
//			hold=d1;
//		}
//		temp=temp/10;
//	}
//	printf("%d",hold);
//	return 0;
//}



//question is to count number of digit
//and sum of digit
//int main(){
//	int n,d1,sum=0;
//	scanf("%d",&n);
//	int count=0;
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		count+=1;
//		sum+=d1;
//		temp=temp/10;
//	}
//	printf("count is :%d\n",count);
//	printf("Sum is : %d",sum);
//	return 0;
//}


//to check given number is palindrome or not
//int main(){
//	int n,rev,d1;
//	scanf("%d",&n);
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		rev=rev*10+d1;
//		temp=temp/10;
//	}
//	if(rev==n){
//		printf("Yes,given number is palindrme.");
//	}else{
//		printf("No,given number is not plaindrome");
//	}
//	return 0;
//}


//question is to check given number is prime or not
//int main(){
//	int n;
//	scanf("%d",&n);
//	if(n<=1){
//		printf("Not Prime");
//		return 0;
//	}
//	int prime=1;
//	//we need to check upto root n;
//	for(int i=2;i*i<=n;i++){
//		if(n%i==0){
//			prime=0;
//			break;
//		}
//	}
//	if(prime){
//		printf("Prime");
//	}else{
//		printf("Not Prime");
//	}
//	return 0;
//}



//string type question
//replace space 
#include<stdio.h>
#include<string.h>
//int main(){
//    char str[] = "vedprakash saini ji";
//    int n = strlen(str);
//    for(int i = 0; i < n; i++){
//        if(str[i] == ' '){
//            for(int j = i; j < n; j++){
//                str[j] = str[j+1];
//            }
//            i--;
//            n--;
//        }
//    }
//    printf("%s", str);
//}



////question is to find first non repeted character
#include<stdio.h>
#include<string.h>
//int main(){
//	char str[20];
//	fgets(str,20,stdin);
//	int n=strlen(str);
//	int index;
//	for(int i=0;i<n;i++){
//		int count=0;
//		for(int j=0;j<n;j++){
//			if(str[i]==str[j]){
//				count++;
//			}
//		}
//		if(count==1){
//			index=i;
//			break;
//		}
//	}
//	printf("first non repeted digit is: %c",str[index]);
//	return 0;
//}




//question is to find first repeating
//int main(){
//	char str[20];
//	fgets(str,20,stdin);
//	int n=strlen(str);
//	int index;
//	for(int i=0;i<n;i++){
//		int count=0;
//		for(int j=0;j<n;j++){
//			if(str[i]==str[j]){
//				count++;
//			}
//		}
//		if(count>1){
//			index=i;
//			printf("Your character repetes: %d",count)
//			break;
//		}
//	}
//	printf("first non repeted digit is: %c",str[index]);
//	return 0;
//}


//logic to find number of first repeted digit 
//int main(){
//	int n,d1,rev=0,d2;
//	scanf("%d",&n);
//	int temp=n,fin;
//	while(temp>0){
//		d1=temp%10;
//		rev=rev*10+d1;
//		temp=temp/10;
//	}
//	int rev2=rev;
//	int rev3=rev;
//	int result;
//	while(rev2>0){
//		int count=0;
//		d2=rev2%10;
//		while(rev3>0){
//			int d3=rev3%10;
//			if(d3==d2){
//				count++;
//			}
//			rev3=rev3/10;
//		}
//		if(count>1){
//			result=d2;
//			printf("Total number of count: %d\n",count);
//			fin=count;
//			break;
//		}
//		rev2=rev2/10;
//	}
//	if(fin==0){
//		printf("No repeted digit ");
//	}else{
//	printf("%d",result);
//	}
//	return 0;
//}

//better solution to find upper(non repeted digit) problem
#include<stdio.h>
//int main(){
//	int n,d1,rev,d2,res=-1;
//	scanf("%d",&n);
//	int count[10]={0};
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		count[d1]++;
//		rev=rev*10+d1;
//		temp=temp/10;
//	}
//	while(rev>0){
//		d2=rev%10;
//		if(count[d2]==1){
//			printf("First non repeted digit is : %d",d2);
//			break;
//		}
//		rev=rev/10;
//	}
//	return 0;
//}


//better way to find repeted digit
//int main(){
//	int n,d1,rev,d2,res=-1;
//	scanf("%d",&n);
//	int count[10]={0};
//	int temp=n;
//	while(temp>0){
//		d1=temp%10;
//		count[d1]++;
//		rev=rev*10+d1;
//		temp=temp/10;
//	}
//	while(rev>0){
//		d2=rev%10;
//		if(count[d2]>1){
//			printf("First repeted digit is : %d",d2);
//			res=1;
//			break;
//		}
//		rev=rev/10;
//	}
//	if(res!=1){
//		printf("No repeted digit");
//	}
//	return 0;
//}


//to find factorial of a number....
//int fact(int n){
//	if(n==0 || n==1) return 1;
//	else return n*fact(n-1);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int result=fact(n);
//	printf("Factorial of your entered integer is: %d",result);
//	return 0;
//}


//create a function to swap two numbers...
//int swap(int a,int b){
//	int temp=a;
//	a=b;
//	b=temp;
//	printf("Value after swapping is a:= %d and b:= %d",a,b);
//}
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	swap(a,b);
//	return 0;
//}


//using call by reference:
//int swap(int *a,int *b){
//	int temp=*a;
//	*a=*b;
//	*b=temp;
//	printf("%value after swapping: %d %d ",*a,*b);
//}
//int main(){
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	swap(&a,&b);
//	return 0;
//}


//fibonic series using recursive
#include<stdio.h>

//int fibonacci(int n){
//    if(n == 0)
//        return 0;
//    if(n == 1)
//        return 1;
//    return fibonacci(n-1) + fibonacci(n-2);
//}
//int main(){
//    int n;
//    scanf("%d",&n);
//    for(int i = 0; i < n; i++){
//        printf("%d ", fibonacci(i));
//    }
//}



//find largest number using pointer
//int main(){
//	int arr[5]={1,5,2,9,3};
//	int *p=arr;
//	int hold=*p;
//	for(int i=1;i<5;i++){
//		if(*(p+i)>hold){
//			hold=*(p+i);
//		}
//	}
//	printf("%d",hold);
//	return 0;
//}


//int main(){
//	int arr[]={1,2,3,9,4,5};
//	int *p=arr;
//	for(int i=0;i<6/2;i++){
//		int temp=*(p+i);
//		*(p+i)=*(p+6-1-i);
//		*(p+6-1-i)=temp;
//	}
//	for(int i=0;i<6;i++){
//		printf("%d",*(p+i));
//	}
//}

//union
//union student{
//	int id;
//	float marks;
//	char a;
//};
//int main(){
//	union student s1;
//	s1.id=15;
//	printf("%d\n",s1.id);
//	s1.marks=99.9;
//	printf("%d %f\n",s1.id,s1.marks);
//	s1.a='A';
//	printf("%d %f %c",s1.id,s1.marks,s1.a);
//	return 0;
//}



//class questions
//class student{
//public:
//	int id;
//	int marks;
//};
//int main(){
//	class student s1;
//	scanf("%d",&s1.id);
//	scanf("%d",&s1.marks);
//	printf("%d",s1.id);
//	printf("%d",s1.marks);
//	return 0;
//}



#include<iostream>
//using namespace std;
//class student{
//public:
//	void display(int a,int b){
//		cout<<"value of sum: "<<a+b<<endl;
//	}
//};
//int main(){
//	class student s1;
//	s1.display(3,7);
//	return 0;
//}

//
#include<iostream>
//using namespace std;
//class Student{
//   public:
//   int id;
//   int marks;
//   Student(int i, int m){
//       id = i;
//       marks = m;
//   }
//   void display(){
//       cout << id << " " << marks;
//   }
//};
//int main(){
//    Student obj(1, 95);
//    obj.display();
//}


#include<iostream>
using namespace std;
//class operation{
//public:
//	int id,marks;
//	void init(){
//		cin>>id>>marks;
//	}
//	void fun(){
//		cout<<id<<" : "<<marks;
//	}
//};
//int main(){
//	operation o1;
//	o1.init();
//	o1.fun();
//	return 0;
//}


#include<iostream>
//using namespace std;
//class Member{
//public:
//    static int count;
//    Member(){
//        count++;
//    }
//    static int fun(){
//        return count;
//    }
//};
//int Member::count = 0;
//int main(){
//    Member obj1, obj2, obj3;
//    cout << Member::fun();
//}



//to find the sum of matrix:
//int main(){
//	int arr[3][3],sum=0;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			scanf("%d",&arr[i][j]);
//			sum+=arr[i][j];
//		}
//	}
//	printf("sum of entered integer is : %d",sum);
//	return 0;
//	
//}


//to find the transpose of a matrix:
//int main(){
//	int arr[3][3];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d ",arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(){
//	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int arr2[3][3]={{1,1,1},{1,1,1},{1,1,1}};
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d ",arr1[i][j]*arr2[i][j]);
//		}
//		printf("\n");
//	}
//}


//sum of primary diagonals:
//int main(){
//	int arr1[3][3];
//	int sum=0;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			scanf("%d",&arr1[i][j]);
//			if(i==j){
//				sum+=arr1[i][j];
//			}
//		}
//	}
//	printf("sum of primary diagnoal is: %d",sum);
//	return 0;
//}


//sum of secondary diagonals:
//int main(){
//	int arr[3][3],sum=0;
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			scanf("%d",&arr[i][j]);
//			if(i+j==2){
//				sum+=arr[i][j];
//			}
//		}
//	}
//	printf("%d",sum);
//}


////to find symetric or not
//int main(){
//	int count=1;
//	int arr[3][3];
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			if(arr[i][j]!=arr[j][i]){
//				count=-1;
//			}
//		}
//	}
//	if(count==-1){
//		printf("Not symetric");
//	}else{
//		printf("Symetric");
//	}
//	return 0;
//}



//to find duplicate elemets in array
#include<stdio.h>
//int main(){
//    int arr[] = {1,2,3,2,4,1};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    for(int i = 0; i < n; i++){
//        int duplicate = 0;
//        for(int k = 0; k < i; k++){
//            if(arr[i] == arr[k]){
//                duplicate = 1;
//                break;
//            }
//        }
//        if(duplicate == 1){
//            continue;
//        }
//        for(int j = i+1; j < n; j++){
//            if(arr[i] == arr[j]){
//                printf("%d ",arr[i]);
//                break;
//            }
//        }
//    }
//}





//move all zero to end of array
//int main(){
//	int arr[6]={1,0,2,0,3,4};
//	int nonz=0;
//	for(int i=0;i<6;i++){
//		if(arr[i]!=0){
//			arr[nonz++]=arr[i];
//		}
//	}
//	while(nonz<6){
//		arr[nonz]=0;
//		nonz++;
//	}
//	for(int i=0;i<6;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//different different method to print 
//int main(){						
//	int n;							
//	scanf("%d",&n);					 
//	for(int i=1;i<=n;i++){			
//		for(int j=1;j<=i;j++){
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(){						
//	int n;							
//	scanf("%d",&n);					
//	for(int i=1;i<=n;i++){			
//		for(int j=i;j<=n;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(){				
//	int n;					
//	scanf("%d",&n);				
//	int count=0;				
//	for(int i=1;i<=n;i++){		
//		for(int j=1;j<=i;j++){
//			count++;
//			printf("%d ",count);
//		}
//		printf("\n");
//	}
//}


//binary format  
//int main(){
//	int n;
//	n=4;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			int res=(i+j)%2;
//			if(j<=i){
//			printf("%d ",res);
//		}
//	}
//		printf("\n");
//	}
//	return 0;
//}


//to print (a,a b,a b c)
//int main(){				
//	int n;					
//	scanf("%d",&n);				
//	int count=0;				
//	for(int i=1;i<=n;i++){		
//		int j=1;
//		while(j<=i){
//			printf("%c ",j+64);
//			j++;
//		}
//		printf("\n");
//	}
//}


#include<stdio.h>
//pyramid like star
//int main(){
//	int n;
//	scanf("%d",&n);
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n-i-1; j++){
//            printf(" ");
//        }
//        for(int j = 0; j <= i; j++){
//            printf("* ");
//        }
//        printf("\n");
//    }
//}



//for reverse pyramid
#include<stdio.h>

//int main(){
//    int n = 4;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<i;j++){
//            printf(" ");
//        }
//        for(int j=0;j<n-i;j++){
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}




//question is to find given number is binary or not
//int main(){
//	int n,count=1,d1;
//	scanf("%d",&n);
//	while(n>0){
//		d1=n%10;
//		if(d1!=0 && d1!=1){
//			count=-1;
//			break;
//		}
//		n/=10;
//	}
//	if(count==-1){
//		printf("No");
//	}else{
//		printf("Yes");
//	}
//}


//to convert given number into decimal
#include<stdio.h>
#include<math.h>
//int main(){
//    int n;
//    scanf("%d",&n);
//    int dec = 0;
//    int pos = 0;
//    for(int i = n; i > 0; i /= 10){
//        int digit = i % 10;
//        dec += digit * pow(2, pos);
//        pos++;
//    }
//    printf("%d",dec);
//}



//to convert decimal into binary
//int main(){
//	int n;
//	scanf("%d",&n);
//	int place=1;
//	int rev=0,temp=n;
//	while(temp>0){
//		int d1=temp%2;
//		rev=rev+place*d1;
//		place=place*10;
//		temp=temp/2;
//	}
//	printf("%d",rev);
//}


//to find the fequency of character is same or not in both string
#include<stdio.h>
#include<string.h>
//int main(){
//    char str1[] = "listen";
//    char str2[] = "silent";
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    int anagram = 1;
//    if(len1 != len2){
//        anagram = 0;
//    }
//    for(int i = 0; i < len1; i++){
//        int count1 = 0;
//        int count2 = 0;
//        for(int j = 0; j < len1; j++){
//            if(str1[i] == str1[j]){
//                count1++;
//            }
//            if(str1[i] == str2[j]){
//                count2++;
//            }
//        }
//        if(count1 != count2){
//            anagram = 0;
//            break;
//        }
//    }
//    if(anagram == 1){
//        printf("string anagram");
//    }
//    else{
//        printf("string not anagram");
//    }
//}


//int main(){
//	int arr[7]={1,2,3,4,5,6,7};
//	int a0=1;
//	int a1=2;
//	for(int i=0;i<7;i++){
//		arr[i]=arr[i+2];
//	}
//	arr[5]=a0;
//	arr[6]=a1;
//	for(int i=0;i<7;i++){
//		printf("%d ",arr[i]);
//	}
//}







//union test{
//	int n;
//	char asc;
//};
//int main(){
//	union test t1;
//	scanf("%d",&t1.n);
//	printf("%d\n",t1.n);
//	printf("%c",t1.asc);
//	return 0;
//}




#include<stdio.h>
//union test
//{
//    int a;
//    char b;
//};
//int main()
//{
//    union test t;
//    t.a = 70;
//    printf("Before overwrite:\n");
//    printf("a = %d\n",t.a);
//    t.b = 'A';
//    printf("\nAfter overwrite:\n");
//    printf("b = %c\n",t.b);
//    printf("a = %d\n",t.a);
//    return 0;
//}





//union test{
//	int n;
//	char ch;
//};
//int main(){
//	union test t;
//	scanf("%d",&t.n);
//	printf("Integer value = %d\n",t.n);
//	printf("Integer value = %c",t.ch);
//}



//union weatherdata{
//	float temp;
//};
//int main(){
//	union weatherdata t;
//	scanf("%f",&t.temp);
//	printf("Temperature: %.2f degree",t.temp);
//	if(t.temp>=30.0){
//		printf("It is a hot day!");
//	}else{
//		printf("It is a cold day!");
//	}
//	return 0;
//}


#include<iostream>
#include<iomanip>
//using namespace std;
//class student{
//public:
//	double radius;
//	void area(){
//		double area=radius*radius*3.14;
//		cout<<"Area is : "<<fixed<<setprecision(2)<<area;
//	}
//};
//int main(){
//	student s1;
//	cin>>s1.radius;
//	s1.area();
//	return 0;
//}


//code for malloc
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//    int *arr;
//    int n,i;
//
//    printf("Enter size: ");
//    scanf("%d",&n);
//
//    arr=(int*)malloc(n*sizeof(int));
//
//    printf("Enter elements:\n");
//
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//
//    printf("Array elements are:\n");
//
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//
//    free(arr);
//
//    return 0;
//}


//code for calloc
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//    int *arr;
//    int n,i;
//    printf("Enter size: ");
//    scanf("%d",&n);
//    arr=(int*)calloc(n,sizeof(int));
//    printf("Enter elements:\n");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    printf("Array elements are:\n");
//
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    free(arr);
//    return 0;
//}



//for realloc
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//    int *arr;
//    int n,i,newsize;
//    printf("Enter initial size: ");
//    scanf("%d",&n);
//    arr=(int*)malloc(n*sizeof(int));
//    printf("Enter elements:\n");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    printf("Enter new size: ");
//    scanf("%d",&newsize);
//    arr=(int*)realloc(arr,newsize*sizeof(int));
//    printf("Enter new elements:\n");
//    for(i=n;i<newsize;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    printf("Array elements are:\n");
//    for(i=0;i<newsize;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    free(arr);
//    return 0;
//}

//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-1-i;j++){
//			printf(" ");
//		}
//		for(int j=0;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>
#include <stdio.h>

#include <stdio.h>

//int main() {
//    int i, j, n;
//    printf("Enter number: ");
//    scanf("%d", &n);
//    for(i = n; i >= 1; i--) {
//        for(j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for(j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}










//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<=n-i-1;j++){
//			printf(" ");
//		}
//		for(int j=0;j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}


//class student{
//private:
//	int a;
//	float marks;
//public:
//	void display(int a1,float marks1){
//		a=a1;
//		marks=marks1;
//		printf("%d %.2f",a,marks);
//	}
//};
//int main(){
//	student s1;
//	int a;
//	float marks;
//	scanf("%d",&a);
//	scanf("%f",&marks);
//	s1.display(a,marks);
//	return 0;	
//}























