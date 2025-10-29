#include<stdio.h> 
int main(){
	int n, i;
	
	do{
		printf("Nhap vao so nguyen tu 1-9 de kiem tra bang cuu chuong: ");
		scanf("%d",&n);
		
		if(n<0 || n>10){
			printf("Khong hop le , xin vui long nhap lai bang can kiem tra tu 1-9! ");
		} 
	}while(n<0 || n>10);
	    printf("=== Bang cuu chuong %d ===",n);
	for(i = 1 ; i<=10 ; i++){
		printf("\n%d * %d = %d \n",n,i,n*i);
	}
return 0;
} 
