#include<stdio.h>

int main(){
	int a[5]={4,7,9,2,7};
	printf("Cac phn tu trong mang la :");
	for(int i=sizeof(a)/sizeof(int)-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}