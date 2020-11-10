#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hocLuc(float e) {	
	if( e>0 && e<=10){
		if(e>=9){
			printf("\nBan dat hoc luc xuat sac!");
		};
		if(e>=8 && e<9){
			printf("\nBan dat hoc luc gioi!");
		};
		if(e>=6.5 && e<8){
			printf("\nBan dat hoc luc kha!");
		};
		if(e>=5 && e<6.5){
			printf("\nBan dat hoc luc trung binh!");
		};
		if(e>=3.5 && e<5){
			printf("\nBan dat hoc luc yeu!");
		};
		if(e>=0 && e<3.5){
			printf("Ban dat hoc luc kem!");
		};		
	} 
	else printf("\nXin moi nhap lai diem chinh xac");	
}

void giaiPTbac1(float a, float b) {	
	float KQ;
	KQ=-b/a;
	if(a==0){
		if(b==0){
			printf("\nPhuong trinh co vo so nghiem!");
		}else printf("\nPhuong trinh vo nghiem");
		
	}else printf("\nPhuong trinh co nghiem la: %f", KQ);
}

void giaiPTbac2(float j, float k, float l) {
	float delta, x1, x2, KQ;
	if(j==0){ 
		KQ= -l/k ;
		if(k==0){
			if(l==0){
			printf("\nPhuong trinh co vo so nghiem!");
		}else printf("\nPhuong trinh vo nghiem");
		
	}else printf("\nPhuong trinh co nghiem la: %f", KQ);
		
	}else {
		delta = k*k-4*j*l;
		if(delta < 0){
			printf("\nPhuong trinh vo nghiem");
		};
		if(delta==0){
			x1= -k/(2*j);
			printf("\nPhuong trinh co nghiem kep x= %f, x1");
		};
		if(delta>0){
			x1= (-k+sqrt(delta))/ (2*j);
			x2= (-k-sqrt(delta))/ (2*j);
			printf("\nNhiem cua phuong trinh la: \n x1= %f va x2= %f", x1, x2);
		};	
	};
}

void tinhTienDien(float soDien) {
	float tienDien;
	if(soDien>0 && soDien<=50){
		tienDien= soDien*1.678;
		printf("\nTien can phai dong la: %0.1f dong", tienDien);
	};
		if(soDien>51 && soDien<=100){
		tienDien= soDien*1.734;
		printf("\nTien can phai dong la: %0.1f dong", tienDien);
	};
		if(soDien>101 && soDien<=200){
		tienDien= soDien*2.014;
		printf("\nTien can phai dong la: %0.1f dong", tienDien);
	};
		if(soDien>201 && soDien<=300){
		tienDien= soDien*2.536;
		printf("\nTien can phai dong la: %0.1f dong", tienDien);
	};
		if(soDien>301 && soDien<=400){
		tienDien= soDien*2.834;
		printf("\nTien can phai dong la: %0.1f dong", tienDien);
	};
		if(soDien>401 ){
		tienDien= soDien*1.678;
		printf("\nTien can phai dong la: %0.1f dong", tienDien);
	};
}
int main() {
	int chon;
	printf("MOI CHON CHUONG TRINH");
	printf("\n1.TINH HOC LUC");
	printf("\n2.GIAI PT BAC 1");
	printf("\n3.GIAI PT BAC 2");
	printf("\n4.TINH TIEN DIEN\n");
	scanf("%d", &chon);
	switch (chon){
		case 1 :
			float e;
			printf("\nMoi nhap vao diem cua sinh vien= ");
			scanf( "%f", &e);
			printf("\nDiem cua ban la: %0.1f ", e);
			hocLuc(e);
			
			break;
		case 2 :
			float a, b;
			printf("GIAI PHUONG TRINH ax+b=0");
			printf("\nNhap a= ");
			scanf("%f", &a);
			printf("\nNhap b= ");
			scanf("%f", &b);
			giaiPTbac1(a,b);
			break;
		case 3 :
			float j,k,l;
			printf("GIAI PHUONG TRINH BAC 2 DANG ax^2+bx+c=0");
			printf("\nNhap a= ");
			scanf("%f", &j);
			printf("\nNhap b= ");
			scanf("%f", &k);
			printf("\nNhap c= ");
			scanf("%f", &l);
			giaiPTbac2(j,k,l);
			break;
		case 4 :
			float soDien;
			printf("Nhap vao so dien tieu thu= ");
			scanf("%f", &soDien);
			tinhTienDien(soDien);
			break;
		
	}
	return 1;
}
