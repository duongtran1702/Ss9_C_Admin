#include<stdio.h>
#include<math.h>
int number_prime(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}

int main(){
	int a[100];
	int n;
	printf("1.Nhap so phan tu va gia tri cac phan tu \n2.In ra cac phan tu dang quan li\n3.In ra cac phan tu chan va tinh tong\n");
	printf("4.In ra gia tri lon nhat va nho nhat\n5.In ra phan tu la so nguyen to va tinh tong\n6.Nhap vao phan tu va so phan tu do\n");
	printf("7.Them mot phan tu vao vi tri chi dinh\n8.Thoat\n");
	do{
	int choice;
	printf("Moi ban nhap lua chon (1-8):");
	scanf("%d",&choice);
	if(choice==1){	
    	printf("Nhap vao so luong phan tu :");
    	scanf("%d",&n);
    	for(int i=0;i<n;i++){
			printf("Nhap phan tu thu %d :",i+1);
			scanf("%d",&a[i]);
		}
	}
	else if(choice==2){	
    	printf("In mang :");
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");	
	}
	else if(choice==7){
		printf("Nhap vao vi tri muon them :");
		int pos;										
		scanf("%d",&pos);
		if(pos<0||pos>n+1){
		return 0;
		}	
		printf("Nhap gia tri cho phan tu muon them :");
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
		a[pos-1]=value;
		n+=1;
	}
	else if(choice==3){
		int sum=0;
		int index=0;
		printf("Cac so chan trong mang la :");
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				printf("%d ",a[i]);
				sum+=a[i];
				index+=1;
			}
		}
		if(index==0){
			printf("\nKhong co so chan nao!");
		}
		printf("\nTong cac so chan trong mang :%d\n",sum);
	}
	else if(choice==4){
		int min,max;
		min=a[0];
		max=a[0];
		for(int i=1;i<n;i++){
			if(a[i]<min){
				min=a[i];
			}
			if(a[i]>max){
				max=a[i];
			}			
		}
		printf("Phan tu co gia tri lon nhat la :%d\n",max);
		printf("Phan tu co gia tri nho nhat la :%d\n",min);
	}
	else if(choice==5){
		int sum=0;
		int index=0;
		printf("Cac so nguyen to trong mang:");
		for(int i=0;i<n;i++){
			if(number_prime(a[i])==1){
				printf("%d ",a[i]);
				sum+=a[i];
				index+=1;
			}
		}
		if(index==0){
			printf("\nKhong co so so nguyen to nao!");
		}
		printf("\n");
		printf("Tong cac so nguyen to trong mang :%d\n",sum);
	}
	else if(choice==6){
		int number;
		int index=0;
		printf("Nhap vao mot so :");
		scanf("%d",&number);
		for(int i=0;i<n;i++){
			if(a[i]==number){
				index+=1;
			}
		}
		printf("So lan xuat hien cua %d la:%d lan\n",number,index);	
	}
	else {
		printf("Finish!");
	    break;
	}	
    }while(true);
}