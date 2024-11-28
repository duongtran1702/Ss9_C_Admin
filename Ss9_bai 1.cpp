#include<stdio.h>
int main(){
	int a[100];
	int n;
	printf("Nhap vao so luong phan tu :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Nhap vao vi tri muon chen :");
	int pos;										
	scanf("%d",&pos);
	if(pos<0||pos>100){
		return 0;
	}	
	printf("Nhap gia tri cho phan tu muon chen :");
	int value;
	scanf("%d",&value);
	for(int i=0;i<n;i++){
		if(pos>=n){
			a[pos-1]=value;
		}
		if(pos<n&&i>=pos-1){	
			a[n+pos-i-1]=a[n+pos-i-2];
		}
	}
	if(pos<n){
		a[pos-1]=value;
		printf("Day so sau khi chen : ");
		for(int i=0;i<=n;i++){
			printf("%d ",a[i]);
		}   
	}
	if(pos>=n){
		printf("Day so sau khi chen : ");
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("%d",a[pos-1]);   
	}
}



