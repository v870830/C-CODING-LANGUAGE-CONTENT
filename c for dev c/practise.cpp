#include<stdio.h>
//int main(){
//	char str;
//	scanf("%c",&str);
//	switch(str){
//		case 'A':
//			printf("hello i am A");
//		case 'B':
//			printf("hello i am B");
//		case 'C':
//			printf("hello i am C");
//		case 'D':
//			printf("hello i am D");
//		case 'E':
//			printf("hello i am E");
//		default:
//			printf("i am default");
//	}
//	return 0;
//}


//in this case formula always -(n+1);
//int main(){
//	int n=12;
//	scanf("%i",&n);
//	int y=~n;
//	printf("%i",y);
//	return 0;
//}


//int main(){
//	int n=10;
//	printf("%d, %d ,%d ,%d\n",--n,++n,n--,n++);
//	printf("%i",n);
//	return 0;
//} 


//in all this type of case it will give infinite loop
//int main(){
//	int a;
//	a=0;
//	for(;a<=3;){
//		printf("hello");
//	}
//	return 0;
//}



//int main() {
//    int n;
//    for (n = 9; n>=0; n--)
//        printf("%d", n--);
//    return 0;
//}

//int main() { 
//    int num = 2; 
//    while (num < 16) { 
//        printf("%d ", num); 
//        num *= 2; 
//    } 
//    return 0; 
//}

//int main() { 
//    int x = 20; 
//    switch (x) { 
//        case 10: 
//            if (x == 10) 
//                printf("Ten "); 
//        case 20: 
//            if (x == 20) 
//                printf("Twenty "); 
//        case 30: 
//            printf("Thirty "); 
//        default: 
//            printf("Other "); 
//    } 
//    return 0; 
//}

//int main() { 
//    int n = 16; 
//    switch(n >> 4) { 
//        case 4:  
//            printf("Four "); 
//        case 3:  
//            printf("Three "); 
//        default:  
//            printf("This case is default "); 
//    } 
//    return 0; 
//} 


//int main() {
//    int num = 0;
//    while (num < 5) {
//        if (num % 2 == 0) {
//            printf("%d ", num);
//        }
//        num++;
//        continue;
//    }
//    return 0;
//}


//int main() {
//    int i = 0, count = 0;
//    while (i < 10 && count < 4) {
//        if (i % 2 == 0) {
//            count++;
//        }
//        printf("%d ", count);
//        i++;
//    }
//    return count;
//}


//int main() { 
//    for(int j = 6; j >= 1; j--) { 
//        if(j % 2 == 1) 
//            break; 
//        printf("%d ", j); 
//    } 
//    return 0; 
//}



//int main() {
//    int n = 100;
//
//    if (n < 103) {
//        fun:
//            printf("%d", n);
//            goto fun;
//    }
//
//    return 0;
//}


//int main(){
//	int a=6;
//	gonm:
//		printf("hello");
//}
//

//int main() { 
//    int m; 
//    for(m = 1; m <= 4; m++) { 
//        if(m == 2) 
//            printf("Two "); 
//        else if(m == 3) 
//            continue; 
//        else 
//            printf("%d ", m); 
//    } 
//    return 0; 
//}

//
//int main() { 
//    int i = 1, sum = 0; 
//    while (i <= 5) { 
//        if (i != 3) { 
//            sum += i * 5 + 2; 
//            printf("%d ", sum); 
//        } 
//        i++; 
//        if (sum > 60) 
//        return sum; 
//    } 
//    return sum; 
//}





//question based on platform question if it divide both3 and both 4 then to do
//int main(){
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<=n;i++){
//        if(i%3==0&&i%5==0){
//            continue;
//        }else{
//            if(i%4==0){
//                printf("Critical Issue\n");
//                if(i%7==0){
//                    printf("Routine Maintenance\n");
//                }
//            }
//            else if(i%7==0){
//                printf("Routine Maintenance\n");
//            }
//            else{
//                printf("Safe Event");
//            }
//        }
//    }
//    return 0;
//}



//type conversion
//int main(){
//	double db=5.67;
//	int intvalue;
//	intvalue=(int)db;
//	printf("%lf\n",db);
//	printf("%d",intvalue);
//	return 0;
//}


//int main() {
//    int num = 15;
//    short result = (num > 10) ? (short)(num * 2) : (short)(num + 2);
//
//    printf("%hd", result);
//
//    return 0;
//}




//int main() {
//    char charValue = 'Z'; 
//    int intValue;
//
//    intValue = (int)charValue;
//
//    printf("%d", intValue);
//
//    return 0;
//}




//int main() { 
//    int a = 5; 
//    double b = 2.3; 
//    printf("%d", (int)(a * b)); 
//    return 0; 
//}


//int main() { 
//    int a = 50;    
//    char b = 'd'; 
//    a = a + b; 
//     
//    float c = a - 1.0; 
//  
//    printf("%d %f", a, c); 
//    return 0; 
//}

//
//int main() {
//    double x = 5.6;
//    int y = 2;
//    printf("%d", (int)x / y);
//    return 0;
//}


//int main() {
//    float x = 3.5f, y = 2.2f;
//    double z;
//    z = (double)(x * (y - 1));
//
//    printf("%.2lf", z);
//    
//    return 0;
//}


//int main() {
//    double x = 85.487;
//    float y = 52.41;
//    int z;
//
//    z = (int) x;
//    printf("%d", z);
//
//    z = (int) y;
//    printf("%d", z);
//
//    return 0;
//}
//


//
//int main(){
//    int n,i=1,digit1,rev=0,rev2=0,digit2;
//    scanf("%i",n);
//    while(n>0){
//        digit1=n%2;
//        rev=rev+digit1*i;
//        n=n/2;
//        i*=10;
//    }
//    printf("%i",rev);
//    while(n>0){
//        digit2=n%16;
//        rev2=rev2+digit2*i;
//        n=n/16;
//        i*=10;
//    }
//    printf("%i",rev2);
//    return 0;
//}



//int main(){
//   int oct_value=077; //here it will automatically will give output in hex format and in case of 4 digit starting form zero it will givein dec
//   printf("%d",oct_value);
//   return 0;
//}




//int main(){
//	char ch[20];
//	gets(ch);
//}



//here in this case we can say that first it leave 10 space and then it will printa and 
//in case of -10 it will remmove 10 space after a
//int main(){
//	char ch='A';
//	printf("%10c",ch);
//	return 0;
//}


int main(){
	char ch='A';
	switch(ch){
		case 'A':
			printf("ram");
			break;
		default :
			printf("shree shivay namestubhayam");
			break;
	}
}



