#include<stdio.h>


//int TinhTienDien(int SoDien){
//	int GiaTienDien =0;
//	if(SoDien <=50){
//		GiaTienDien= SoDien*500;
//	}
//	if(SoDien >50 && SoDien <=100){
//		GiaTienDien+= (SoDien -50) *1000;
//	}
//	if(SoDien>100 && SoDien <=1000){
//		GiaTienDien += (SoDien-100) *1500;
//	}
//	if(SoDien>1000){
//		GiaTienDien += (SoDien-1000)*2000;
//	}
//     return GiaTienDien;
//}
//int main(){
//	int SoDien;
//	int GiaTienDien;
//	scanf("%d", &SoDien);
//	GiaTienDien = TinhTienDien(SoDien);
//	printf("tong tien dien la :%d\n" , GiaTienDien);
//	
//	printf("so dien tieu thu la : %d\n", SoDien);
//	return 0;
//}

int tinhTienDien(int soDien) {
	int tongTienDien;
	
	if (soDien <= 50) {
		tongTienDien = soDien * 500;
		return tongTienDien;
	}
	else {
		tongTienDien +=  50 * 500;
		
		if (soDien <= 100) {
			tongTienDien += (soDien - 50) * 1000;
			return tongTienDien;
		}
		
		if (soDien <= 1000) {
			tongTienDien += 50 * 1000;
			tongTienDien += (soDien - 100) * 1500;
			return tongTienDien;
		}
		
		if (soDien > 1000) {
			tongTienDien += 50 * 1000;
			tongTienDien += 900 * 1500;
			tongTienDien += (soDien - 1000) * 2000;
			return tongTienDien;
		}
	}
	
	return tongTienDien;
}

int main () {
	int soDien;
	int tongTienDien;
	printf("Moi ban nhap so dien: ");
	scanf("%d", &soDien);
	tongTienDien = tinhTienDien(soDien);
	printf("So dien da dung: %d \n", soDien);
	printf("Tong so tien phai tra: %d", tongTienDien);
	
	return 0;
}
