#include<stdio.h>
int main(){
	int n,i;
	
	do{
		printf("Nhap so nguyen duong tu 1-10:  ");
		scanf("%d",&n);
		
		if(n<0 || n>10){
			printf("Loi! vui long nhap lai khoang tu 1-10. \n");
		}
	}while(n<1 || n>10);
	    printf("===Bang cuu chuong cua %d===",n);
	for(i = 1; i<=10; i++){
		printf("\n%d * %d = %d\n",n,i,n*i);
	}
return 0 ;
} 
