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
	printf("Nhap vao vi tri muon sua :");
	int pos_fix;										
	scanf("%d",&pos_fix);
	if(pos_fix<0||pos_fix>n){
		return 0;
	}	
	printf("Nhap gia tri muon sua :");
	int value_fix;
	scanf("%d",&value_fix);
	for(int i=0;i<n;i++){
		if(i==pos_fix-1){
			a[i]=value_fix;
		}
	}
	printf("Day so sau khi sua : ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}