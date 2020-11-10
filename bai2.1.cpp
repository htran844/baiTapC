#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b, KQ;
	printf("GIAI PHUONG TRINH ax+b=0");
	printf("\nNhap a= ");
	scanf("%f", &a);
	printf("\nNhap b= ");
	scanf("%f", &b);
	KQ= -b/a;
	if(a==0){
		if(b==0){
			printf("\nPhuong trinh co vo so nghiem!");
		}else printf("\nPhuong trinh vo nghiem");
		
	}else printf("\nPhuong trinh co nghiem la: %f", KQ);
	
	
	
	return 0;
}
