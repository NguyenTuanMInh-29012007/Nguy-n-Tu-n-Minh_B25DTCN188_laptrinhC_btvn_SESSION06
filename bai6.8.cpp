#include<stdio.h>
int main(){
	int a,b,BCNN,UCLN,a1,b1;
	
	printf("Nhap a: ");
	scanf("%d",&a);
	
	printf("Nhap b: ");
	scanf("%d",&b);
	
	a1 = a;
	b1 = b; 
	
	while(a!=b){
		if(a>b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	UCLN = a; 	
	BCNN = (a1*b1)/UCLN;
	
	printf("\nUCLN cua a va b : %d",UCLN);
	printf("\nBCNN cua a va b la : %d",BCNN);
	
	return 0; 
}
