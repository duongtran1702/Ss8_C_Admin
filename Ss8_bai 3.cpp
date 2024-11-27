#include<stdio.h>

int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf ("In mang:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}