#include<stdio.h>
int main(){
	int secret = 25;
	int i;
	
	do{
		printf("\nNhap mot nguyen bat ki: ");
		scanf("%d",&i);
		
		if(i!= secret){
			printf("Sai roi, hay thu lai nhe!");
		}
	}while(i != secret ) ;{
		printf("Chuc mung , ban da doan dung! ");
	}
return 0 ;
}
