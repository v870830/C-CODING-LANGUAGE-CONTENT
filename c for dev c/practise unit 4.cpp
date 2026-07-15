#include<stdio.h>
int main(){
	int n,m,c;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",&arr[i][j]);
		}
		printf("\n");
	}
	scanf("%d",&c);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j][c]>arr[j+1][c]){
				int temp;
				temp=arr[j][c];
				arr[j][c]=arr[j+1][c];
				arr[j+1][c]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",&arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
