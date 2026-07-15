#include<stdio.h>
//LECTURE 1
//printing base address of the array and address of any array element
//int main(){
//	int a[5]={1,2,3,4,5};
//	int i;
//	printf("\n Printing base address of the array");
//	printf("\n%p%p%p",&a[0],a,&a);
//	printf("\n Printing address of all array elements.");
//	for(i=0;i<5;i++){
//		printf("\n%d",&a[i]);
//	}
//	return 0;
//}


//wap to read and display elements of 1d array and sum 
//int main(){
//	int a[100],n,i,sum=0;
//	scanf("%d",&n);
//	printf("enter number one by one: \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("number after enter: \n");
//	for(i=0;i<n;i++){
//		printf("first number is a[%d] is : %d\n",i,a[i]);
//		sum+=a[i];
//	}
//	printf("the sum of enterd integer is : %d ",sum);
//	return 0;
//}

//Lecture of 2d array
//int main(){
//	int arr[3][3],i,j;
//	for(int i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			scanf("%d",& arr[i][j]);
//			printf("hello");
//		}
//	}
//	for(int i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			printf("the value is %d and %d %d\n",i,j,arr[i][j]);
//		}
//	}
//	return 0;
//	
//}



//LECTURE2
//address of enter integer that where thes elements are stored in memory
//int main(){
//	int a[100],n,i,sum=0;
//	scanf("%d",&n);
//	printf("enter number one by one: \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("number after enter: \n");
//	for(i=0;i<n;i++){
//		printf("address of number is a[%d] is : %p\n",i,&a[i]);
//		sum+=a[i];
//	}
//	printf("the sum of enterd integer is : %d ",sum);
//	return 0;
//}
//





//lecture 5
//to find the maximum of a element in a array
//int main(){
//	int a[10],n,i,max;
//	printf("enter the value of n: ");
//	scanf("%d",&n);
//	printf("\n enter number one by one: ");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	max=a[0];
//	for(i=1;i<n;i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	printf("the maximum value is : %d",max);
//	return 0;
//}



//to find the minumum of the array
//int main(){
//	int a[10],n,i,min;
//	printf("enter the value of n: ");
//	scanf("%d",&n);
//	printf("\n enter number one by one: ");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	min=a[0];
//	for(i=1;i<n;i++){
//		if(a[i]<min){
//			min=a[i];
//		}
//	}
//	printf("the minimum value is : %d",min);
//	return 0;
//}


//to calclulate both sum and average
//int main(){
//	int a[100],n,i,sum=0;
//	scanf("%d",&n);
//	printf("enter number one by one: \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("number after enter: \n");
//	for(i=0;i<n;i++){
//		printf("number is a[%d] is : %d\n",i,a[i]);
//		sum+=a[i];
//	}
//	printf("sum of all entered integer is : %d and average is : %d",sum,sum/n);
//	return 0;
//}





//LECTURE 3
//passing array to a function using by value(passing by element)
//void value(int);
//int main(){
//	int arr[100],n;
//	int i;
//	printf("\nEnter n: ");
//	scanf("%d",&n);
//	printf("\n Enter array elements: ");
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	printf("\n Passing elements by value: ");
//	for(i=0;i<5;i++){
//		value(arr[i]);
//	}
//	return 0;
//}
//void value(int u){
//	printf("%d",u);
//}


//passing by element print square of that
//
//void value(int b);
//int main(){
//	int a[10],n,i;
//	scanf("%i",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++){
//		value(a[i]);
//	}
//	return 0;
//}
//void value(int b){
//	int z=b*b;
//	printf("the value is after multiplication %d\n",z);
//}


//LECTURE 4
//Paassing array to a function using by refernces
//int reference(int[],int);
//int main(){
//	int arr[100],n,i;
//	printf("\n Enter n: ");
//	scanf("%d",&n);
//	printf("\n Enter array elements: ");
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	printf("\n Elements by references :");
//	reference(arr,n);
//	return 0;
//}
//void reference(int x[],int size){
//	int i;
//	for(i=0;i<size;i++){
//		printf("%d",x[i]);
//	}
//}



//wap to implement linear search in 1Darray(to find that the enter element wher in which position)
//int main(){
//	int a[50];
//	int i,loc=-1,key,n;
//	printf("\nEnter value of n: ");
//	scanf("%d",&n);
//	printf("\n Enter he elements: ");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("Enter integer value to search in array: ");
//	scanf("%d",&key);
//	for(i=0;i<n;i++){
//		if(a[i]==key){
//			loc=i;
//			break;
//		}
//	}
//	if(loc!=-1){
//		printf("Element found at %d",loc+1);
//	}else{
//		printf("Element not found");
//	}
//}

//if more than one element is present
//int main(){
//	int a[10],n,i,key;
//	scanf("%d",&n);
//	printf("after n: ");
//	scanf("%d",&key);
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++){
//		if(a[i]==key){
//			printf("location is : %d",i);
//		}
//	}
//	return 0;
//}






//lecture 6:(Method of insertion element into the array)\
//first part passing elememt at starting
//int main(){
//	int arr[100],n,i,item;
//	printf("starting enter element for: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("enter element after taking value n: ");
//		scanf("%d",&arr[i]);
//	}
//	printf("enter new values: ");
//	scanf("%d",&item);
//	n++;
//	for(i=n;i>1;i--){
//		arr[i-1]=arr[i-2];
//	}
//	arr[0]=item;
//	printf("value after inserting: \n");
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//second(Passing element at the end):

//int main(){
//	int arr[100],n,i,item;
//	printf("starting enter element for: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("enter element after taking value n: ");
//		scanf("%d",&arr[i]);
//	}
//	printf("enter new values: ");
//	scanf("%d",&item);
//	arr[n]=item;
//	n++;
//	printf("after inserting value: ");
//	for(i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//}

//very very important concept: 
//PASSING ELEMENT AT A SPECIFIC LOCATION 
//HERE LOCATION MEANS AT LOCATION IT IT START FROM 1 AS A HUMAN THINKING
//int main(){
//	int arr[100],n,i,pos,val;
//	printf("starting enter element for: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("enter element after taking value n: ");
//		scanf("%d",&arr[i]);
//	}
//	printf("enter new location: ");
//	scanf("%d",&pos);
//	printf("enter new values: ");
//	scanf("%d",&val);
//	for(int i=n-1;i>=pos-1;i--){
//		arr[i+1]=arr[i];
//	}
//	arr[pos-1]=val;
//	printf("at last the after insert value : ");
//	for(int i=0;i<=n;i++){
//		printf("%d",arr[i]);
//	}
//	return 0;
//}





//LECTURE 7
//DELETE ELEMENT FROM STARTING:
//int main(){
//	int arr[100],n,i,pos,val;
//	printf("starting enter element for: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("enter element after taking value n: ");
//		scanf("%d",&arr[i]);
//	}
//	n--;
//	for(int i=0;i<n;i++){
//		arr[i]=arr[i+1];
//	}
//	printf("element after deletetion: ");
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
	
	

//DELETE ELEMENT FROM ENDING:
//int main(){
//	int arr[100],n,i,pos,val;
//	printf("starting enter element for: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("enter element after taking value n: ");
//		scanf("%d",&arr[i]);
//	}
//	n--;
//	printf("element after delete from end: ");
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}





//LECTURE 5  (VERY VERY IMPORTANT CONCEPT)
//Binary Search use below cases carefully
//concept
//beg=0;
//last=n-1;
//while(beg<last){
//	mid=(beg+last)/2;
//	if(a[mid]==key){
//		loc=mid;
//		break;
//	}
//	else if(a[mid]>key){
//		last=mid-1;
//	}
//	else if(a[mid]<key){
//		beg=mid+1;
//	}
//	if(loc!=-1){
//		printf("\nfound at %d",loc+1);
//	}
//	else{
//		printf("\n Not Found")
//	}
//}

 
// Binary Search using Function:
//only possible if your entered elements in ascending order
//int binary(int arr[], int n, int key)
//{
//    int low = 0, high = n - 1, mid;
//
//    while(low <= high)
//    {
//        mid = (low + high) / 2;
//
//        if(arr[mid] == key)
//            return mid;          
//        else if(arr[mid] < key)
//            low = mid + 1;       
//        else
//            high = mid - 1;      
//    }
//
//    return -1; // element not found
//}
//
//int main()
//{
//    int arr[50], n, i, key, result;
//
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//
//    printf("Enter elements in sorted order:\n");
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("Enter element to search: ");
//    scanf("%d", &key);
//
//   
//    result = binary(arr, n, key);
//
//    if(result != -1)
//        printf("Element found at position %d", result + 1);
//    else
//        printf("Element not found");
//
//    return 0;
//}







//LECTURE 8;
//lecture of  bubble sort(in ascending order (1-2-3-4-5)
//important(complete view in notebook)
//int main(){
//	int a[100];
//	int hold ,i,j,n,c=0;
//	printf("enter value of n: ");
//	scanf("%d",&n);
//	printf("\n Enter elements: ");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("Data items in original order:");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//	for(i=0;i<n-1;i++){     //here why n-1 beacause here us phases that is n-1 
//		for(j=0;j<n-i-1;j++){ //here n-1-i beacuse in phase how many level 
//			if(a[j]>a[j+1]){ //here if next number is smaller then its first then we are doing swap
//			hold=a[j];  
//			a[j]=a[j+1];
//			a[j+1]=hold;
//`			c++;
//		}
//	}
//	}
//	printf("\n Data items in ascending order");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//	printf("no of comparison %d",count);
//	return 0;
//}


//same but in buuble sort in desending order (5-4-3-2-1)
//int main(){
//	int a[100];
//	int n,i,j,hold;
//	printf("order in desending order: ");
//	printf("hello buddy! Please enter the value of n: ");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("after enter into loop: ");
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//	for(i=0;i<n-1;i++){
//		for(j=0;j<n-1-i;j++){
//			if(a[j]<a[j+1]){
//				hold=a[j];
//				a[j]=a[j+1];
//				a[j+1]=hold;
//			}
//		}
//	}
//	printf("final notation of the answer is: \n");
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//	printf("end of the question");
//	return 0;
//}


//bubble sort using function

//void bubble(int arr[], int n)
//{
//    int i, j, temp;
//
//    for(i = 0; i < n - 1; i++)
//    {
//        for(j = 0; j < n - 1 - i; j++)
//        {
//            if(arr[j] > arr[j + 1])
//            {
//                
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//
//void printArray(int arr[], int n)
//{
//    int i;
//    for(i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//
//int main()
//{
//    int arr[50], n, i;
//
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//
//    printf("Enter elements:\n");
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    
//    bubble(arr, n);
//
//    printf("Sorted array:\n");
//    printArray(arr, n);
//
//    return 0;
//}
//
//






//practise question
//int main(){
//	int a[50],n,loc=-1,key,beg,last,mid,i;
//	printf("\n Enter number of array elements:");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	beg=0;
//	last=n-1;
//	printf("Enter integer value to search in sorted array: ");
//	scanf("%d",&key);
//	while(beg<=last){
//		mid=(beg+last)/2;
//		if(a[mid]==key){
//			loc=mid;
//			break;
//		}
//		else if(a[mid]>key){
//			last=mid-1;
//		}
//		else if(a[mid]<key){
//			beg=mid+1;
//		}
//	}
//	if(loc!=-1){
//		printf("element found at %d",loc+1);
//	}
//	else{
//		printf("element not found");
//	}
//	return 0;
//}


//2d array concept
//int main(){
//	int n;
//	printf("enter value of n: ");
//	scanf("%d",&n);
//	int a[n][n],i,j;
//	printf("enter number of elemnt: ");
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("Enter the element at index: a[%d][%d]: ",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("now i am going to print the element: \n");
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//this way also:
//int main(){
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	printf("now i am going to print the element: \n");
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//to find the sum in addition matrix form 
//int main(){
//	int i,j;
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int c[3][3];
//	printf("output : \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			 c[i][j] = a[i][j]+b[i][j];
//	}
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//for multiplication :
//int main(){
//	int i,j;
//	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int c[3][3];
//	printf("output : \n");
//	for(i=0;i<3;i++){
//		for(j=0;j<3;j++){
//			 c[i][j] = a[i][j]*b[i][j];
//	}
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//practise question
//to find the sum of diagnoal
//int main(){
//	int i,sum=1;
//	int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
//	for(i=0;i<3;i++){
//		sum+=a[i][i];
//	}
//	printf("%d",sum);
//}


//int main(){
//	int arr[10][10];
//	int tra[10][10];
//	int n,m;
//	scanf("%d",&n);
//	scanf("%d",&m);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			tra[i][j]=arr[j][i];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("%d ",tra[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//code for to find the transpose of given matrix:
//int main(){
//	int a[10][10],tra[10,10],r,c,i,j;
//	printf("enter rows and column of matrix");
//	scanf("%d %d",&r,&c);
//	printf("\n enter elements of matrix: \n");
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			printf("Enter element a%d%d:",i,j);
//			scanf("%d",&a[i][j]);
//		}
//	}
//	printf("\n enteres Matrix: \n ");
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(i=0;i<c;i++){
//		for(j=0;j<r;j++){
//			tra[i][j]=a[j][i];
//		}
//	}
//	printf("\n Transpose of Matrix:\n");
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			printf("%d ",tra[i][j]);
//		}
//		printf("%\n\n");
//	}
//	return 0;
//}

//
//
//int main(){
//	int a[2][2]={{1,2},{3,4}};
//	int b[2][2]={{5,6},{7,8}};
//	int c[2][2],sum=0;
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			sum=(a[i][j]*b[i][j])+(a[i][j]*b[i][j]);
//			c[i][j]=sum;
//		}
//	}
//	for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main(){
//	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//	int sum=0;
//	for(int i=3;i>1;i--){
//		sum+=arr[i][i];
//	}
//	printf("%d",sum);
//}

//print diagonal top to bottom and bottom to top
//int main(){
//	int a[10][10],sd=0,srd=0;
//	int i,j,m,n;
//	scanf("%d %d",&m,&n);
//	printf("Enter elements: ");
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		sd+=a[i][i];
//		srd+=a[i][n-1-i];
//	}
//	printf("Sum of Diagonal Elements = %d",sd+srd);
//	
//}




//code 
//int main(){
//	int n,m,sum=0;
//	scanf("%d",&n);
//	scanf("%d",&m);
//	int a[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			if(a[i][j]%2!=0){
//				printf("%d and %d is odd is : %d \n",i,j,a[i][j]);
//				sum+=a[i][j];
//			}
//		}
//	}
//	printf(" sum of odd elements : %d",sum);
//}















