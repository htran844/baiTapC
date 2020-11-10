#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c, delta, x1,x2, KQ;
	printf("GIAI PHUONG TRINH BAC 2 DANG ax^2+bx+c=0");
	printf("\nNhap a= ");
	scanf("%f", &a);
	printf("\nNhap b= ");
	scanf("%f", &b);
	printf("\nNhap c= ");
	scanf("%f", &c);
	if(a==0){ 
		KQ= -c/b ;
		if(b==0){
			if(c==0){
			printf("\nPhuong trinh co vo so nghiem!");
		}else printf("\nPhuong trinh vo nghiem");
		
	}else printf("\nPhuong trinh co nghiem la: %f", KQ);
		
	}else {
		delta = b*b-4*a*c;
		if(delta < 0){
			printf("\nPhuong trinh vo nghiem");
		};
		if(delta==0){
			x1= -b/(2*a);
			printf("\nPhuong trinh co nghiem kep x= %f, x1");
		};
		if(delta>0){
			x1= (-b+sqrt(delta))/ (2*a);
			x2= (-b-sqrt(delta))/ (2*a);
			printf("\nNhiem cua phuong trinh la: \n x1= %f va x2= %f", x1, x2);
		};
		
	};
	
	return 0;
}
