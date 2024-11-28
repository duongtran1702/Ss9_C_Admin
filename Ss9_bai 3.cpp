#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so luong phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Nhap vao vi tri muon xoa :");
	int pos;										
	scanf("%d",&pos);
	if(pos<0||pos>n){
		return 0;
	}	
	for(int i=0;i<n;i++){
		if(i>=pos-1){
			a[i]=a[i+1];
		}
	}
	printf("Day so sau khi xoa : ");
	for(int i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
}