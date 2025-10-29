#include<stdio.h>
int main(){
	int a,b,c,tong,min,max,thoat,chon,danhap = 0;
	float TBcong;

	do{
	
	printf("\n=====Menu=====");
	printf("\n1.Nhap 3 so nguyen \n2.Tinh tong 3 so  \n3.Tinh trung binh cong 3 so  \n4.So nho nhat \n5.So lon nhat  \n6.Thoat \n\tchon cac so tu 2 - 5:  ");
	scanf("%d",&chon);	
	
	switch(chon){
	
		case 1: 
		    printf("Nhap a: ");
	        scanf("%d",&a);	
	        printf("Nhap b: ");
	        scanf("%d",&b);
	        printf("Nhap c: ");
	        scanf("%d",&c);
	        danhap = 1;
	        break;
		case 2: 
		if(!danhap){
			printf("Vui long nhap 3 so truoc de tinh!\n");
			printf("Nhap a: ");
	        scanf("%d",&a);	
	        printf("Nhap b: ");
	        scanf("%d",&b);
	        printf("Nhap c: ");
	        scanf("%d",&c);
		
		    tong = a+b+c;
		    printf("Tong cua 3 so : %d",tong);
	    }
		    break;
		case 3: 
		if(!danhap){
		    printf("Vui long nhap 3 so can tinh");
		    printf("\nNhap a: ");
	        scanf("%d",&a);	
	        printf("\nNhap b: ");
	        scanf("%d",&b);
	        printf("\nNhap c: ");
	        scanf("%d",&c);
	    
		    TBcong = (a+b+c) / 3;
		    printf("\nTrung binh cong cua 3 so : %f",TBcong);
		}
		    break;
		case 4: if(!danhap){
			printf("\nVui long nhap 3 so can tinh");
			printf("\nNhap a: ");
	        scanf("%d",&a);	
	        printf("\nNhap b: ");
	        scanf("%d",&b);
	        printf("\nNhap c: ");
	        scanf("%d",&c);
	    
		   	min = a;
			if(b<min)
			    min=b;
			if(c<min)
			    min=c;
		    printf("\nSo nho nhat giua 3 so : %d",min);
		}
		    break;
		case 5:
			if(!danhap){
				printf("\nVui long nhap 3 so can tinh");
				printf("\nNhap a: ");
	        scanf("%d",&a);	
	        printf("\nNhap b: ");
	        scanf("%d",&b);
	        printf("\nNhap c: ");
	        scanf("%d",&c);
			
			max = a;
			if(b>max)
			    max = b;
			if(c>max)
			    max = c;
			printf("\nSo lon nhat giua 3 so : %d ",max);
		    }
			break;
		case 6: 
		    printf("Thoat\n");
		    break;
		default:
			printf("\nLoi! Vui long chon tu 2 den 5 de thuc hien phep tinh: .\n");
		

}
}while(chon!=6);

return 0;
}


