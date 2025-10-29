#include<stdio.h>
int main (){
	int N , i , Tong = 0;
	
	printf("Nhap vao so nguyen duong N : ");
	scanf("%d",&N);
	
	if (N<=0){
		printf("Loi! , N phai la so nguyen duong! ");
		return 0;
	}
	
	 for(i = 1; i<=N ; i++){
	 
		Tong = Tong + i;
    }
	printf("Tong = %d\n",Tong);
	
	return 0 ;
}
