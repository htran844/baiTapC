#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float soDien, tienDien;
	printf("Nhap vao so dien tieu thu= ");
	scanf("%f", &soDien);
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
	return 0;
}
