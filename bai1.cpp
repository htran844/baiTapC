#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a;
	printf("Moi nhap vao diem cua sinh vien= ");
	scanf( "%f", &a);
	printf("Diem cua ban la: %0.1f ", a);
	if( a>0 && a<=10){
		if(a>=9){
			printf("\nBan dat hoc luc xuat sac!");
		};
		if(a>=8 && a<9){
			printf("\nBan dat hoc luc gioi!");
		};
		if(a>=6.5 && a<8){
			printf("\nBan dat hoc luc kha!");
		};
		if(a>=5 && a<6.5){
			printf("\nBan dat hoc luc trung binh!");
		};
		if(a>=3.5 && a<5){
			printf("\nBan dat hoc luc yeu!");
		};
		if(a>=0 && a<3.5){
			printf("Ban dat hoc luc kem!");
		};
		
	} 
	else printf("\nXin moi nhap lai diem chinh xac");
	
	
	return 0;
}
