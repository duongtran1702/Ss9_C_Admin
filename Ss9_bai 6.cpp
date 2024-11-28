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
	int admin[100][100]={0};
	int row,col;
	printf("1.Nhap so phan tu va gia tri cac phan tu \n2.In ra cac phan tu theo ma tran\n3.In ra cac phan tu le va tinh tong\n");
	printf("4.In ra cac phan tu o bien va tinh tich\n5.In ra cac phan tu nam tren duong cheo chinh\n6.In ra cac phan tu nam tren duong cheo phu\n");
	printf("7.In ra dong co tong lon nhat\n8.Thoat\n");
	do{
	int choice;
	printf("Moi ban nhap lua chon (1-8):");
	scanf("%d",&choice);
	if(choice==1){	
	printf("Nhap vao so hang :");
	scanf("%d",&row);
	printf("Nhap vao so cot :");
	scanf("%d",&col);
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
			scanf("%d",&admin[i][j]);
		}
	}
	}
	else if(choice==2){	
	printf ("In mang:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%3d",admin[i][j]);
		}
		printf("\n");
	}	
	}
	else if(choice==7){
		int sum_max=-100;
		int sum_temp=0;
		int row_max=0;
		for(int i=0;i<row;i++){
			sum_temp=0;
			for(int j=0;j<col;j++){
				sum_temp+=admin[i][j];
			}
			if(sum_temp>sum_max){
				sum_max=sum_temp;
				row_max=i;
			}
		}
	printf("Dong %d tong lon nhat trong mang :%d\n",row_max+1,sum_max);	
	}
	else if(choice==3){
		int sum=0;
		int index=0;
		printf("Cac so le trong mang la :");
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(admin[i][j]%2!=0) {
					printf("%d ",admin[i][j]);
					sum+=admin[i][j];
					index+=1;
				}
			}	
		}
		
		if(index==0){
			printf("\nKhong co so le nao!");
		}
		printf("\nTong cac so le trong mang :%d\n",sum);
	}
	else if(choice==4){
		int multi=1;
		printf("Cac so o bien la :\n");
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(i==0||j==0||i==row-1||j==col-1){
					printf("%3d ",admin[i][j]);
					multi*=admin[i][j];	
				}
				else{
					printf("    ");
				}
			}
			printf("\n");
		}
		printf("\nTich cac so o bien trong mang :%d\n",multi);
	}
	else if(choice==5){
		if(row==col){
			printf("Cac phan o duong cheo chinh la :");
			for(int i=0;i<row;i++){
				printf("%4d",admin[i][i]);
			}
			printf("\n");
		}
		else{
			printf("So hang cot khac nhau => khong co duong cheo chinh!\n");
		}
	}
	else if(choice==6){
		if(row==col){
			printf("Cac phan o duong cheo phu la :");
			for(int i=0;i<row;i++){
				printf("%d ",admin[row-1-i][i]);
			}
			printf("\n");
		}
		else{
			printf("So hang cot khac nhau => khong co duong cheo phu!\n");
		}
	}
	else {
		printf("Finish!");
	    break;
	}	
    }while(true);
}