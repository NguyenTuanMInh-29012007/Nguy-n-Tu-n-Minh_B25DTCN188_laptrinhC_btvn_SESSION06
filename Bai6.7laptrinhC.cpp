#include<stdio.h>
int main(){
	int a,b,UCLN;
	
	printf("Nhap a:  ");
	scanf("%d",&a);
	
	printf("Nhap b: ");
	scanf("%d",&b);
	
	while(a!=b){
		if(a>b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	printf("\nUCLN cua a va b : %d",a);
    return 0;
} 
