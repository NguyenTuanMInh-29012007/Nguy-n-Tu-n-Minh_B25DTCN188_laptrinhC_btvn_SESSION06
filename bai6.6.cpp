#include<stdio.h>
int main(){
	float a,b;
	int chon;
	
	
	
	do{
		printf("\n=====Menu=====\n");
		printf("\n1.Tong 2 so");
		printf("\n2.Hieu 2 so");
		printf("\n3.Tich 2 so");
		printf("\n4.Thuong 2 so");
		printf("\n5.Thoat");
		
		printf("\nLua chon cua ban: ");
		scanf("%d",&chon);
		
		printf("Nhap so thu nhat: ");
	    scanf("%f",&a);
	
	    printf("Nhap so thu hai: ");
	    scanf("%f",&b);
		
	    switch (chon){
	    	case 1:
	    	    printf("Tong = %.0f",a+b);
	    	break;
	    	case 2:
	    		printf("Hieu = %.0f",a-b);
	    	break;
	    	case 3:
	    		printf("Tich = %.0f",a*b);
	    	break;
	    	case 4:
	    		if(b!=0)
	    		printf("Thuong = %.0f",a/b);
	    		else
	    		printf("Loi! khong the chia cho 0!");
	    	break;
	    	case 5:
	    		printf("Thoat");
	    		break;
	    	default:
	    		printf("Lua chon khong hop le, vui long chon lai!");
	    		
		}
	}while(chon!=5);
	return 0 ;
} 
