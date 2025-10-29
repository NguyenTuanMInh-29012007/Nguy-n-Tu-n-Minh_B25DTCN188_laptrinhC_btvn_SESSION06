#include<stdio.h>
int main(){
	int n,temp,divisor=1;
	
	printf("Nhap mot so nguyen bat ki: ");
	scanf("%d",&n);
	
	if(n==0){
		printf("0");
	return 0;
    }
	if(n<0){
		printf("- ");
		n=-n; 
	} 
	
	temp = n;
	
	while(temp>=10){
		temp = temp / 10;
		divisor = divisor * 10;	
	}
	printf("\nCac chu so tu trai sang phai la: ");
	} 
	while(divisor>0){
		int digit = n /divisor; 
		printf("%d ",digit);
		n%=divisor;
		divisor /=10; 
	} 

	printf("\n"); 
}
