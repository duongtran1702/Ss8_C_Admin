#include<stdio.h>
int main(){
	int a[]={1,1,1,2,2,2,3,3,3,4,4,4};
	int n=sizeof(a)/sizeof(int);
	int index;
	int k=0;
	int index_max=0;
	int number_frequent[100];
	int appeared[100];
	for(int i=0;i<n;i++){
		index=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				index+=1;
			}
			if(index>index_max){
				index_max=index;
			}
		}
	}
	for(int i=0;i<n;i++){
		index=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				index+=1;
			}			
		}
		if(index==index_max&&appeared[a[i]]-a[i]!=0){
			appeared[a[i]]=a[i];
			number_frequent[k++]=a[i];	
		}
	}
	printf("So xuat hien nhieu lan la :");
	for(int i=0;i<k;i++){
		printf("%d ",number_frequent[i]);
	}	
}