#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so :");
	scanf("%d",&number);
	int index=0;
	int a[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		if(a[i]==number){
			index=1;
			printf("vi tri cua phan tu trong mang la : %d",i+1);
		}
	}
	if(index==0) 
		printf("Khong co phan tu nay trong mang");
}