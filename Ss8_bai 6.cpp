#include<stdio.h>

int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};	
	int sum=0;
	printf("Cac phan tu nam tren duong cheo chinh la :");
	for(int i=0;i<3;i++){
		printf("%d ",a[i][i]);
		sum+=a[i][i];
	}
	printf("\nTong cac phan tu o duong cheo chinh trong mang la :%d",sum);
}