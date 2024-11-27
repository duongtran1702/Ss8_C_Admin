#include<stdio.h>
int main(){
	int a[]={1,2,3,1,4,1,5,2};
	int n=sizeof(a)/sizeof(int);
	int index;
	int index_max=0;
	int number_frequent;
	for(int i=0;i<n;i++){
		index=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				index+=1;
			}
			if(index>index_max){
				index_max=index;
				number_frequent=a[i];
			}
		}
	}
	printf("So xuat hien nhieu nhat la :%d",number_frequent);
}