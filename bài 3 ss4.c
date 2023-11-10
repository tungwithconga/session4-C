#include <stdio.h>
int main (){
	int csc;
	printf ("Nhap vao chi so cu : ");
	scanf ("%d",&csc);
	int csm;
	printf ("Nhap vao chi so moi : ");
	scanf  ("%d",&csm);
	int gia,soDien;
	soDien = csm - csc;
	if (soDien >= 0 && soDien < 50){
		gia*10000;
		printf("so tien dien phai tra la: %d", gia);
	}else if(soDien>=50 && soDien<100){
		gia = soDien*15000;
		printf("so tien dien phai tra la: %d", gia);
	}else if(soDien>=100 && soDien<150){
		gia = soDien*20000;
		printf("so tien dien phai tra la: %d",gia);
	}else if(soDien>=150 && soDien<200){
		gia = soDien*25000;
		printf("so tien dien phai tra la: %d",gia);
	}else if(soDien>=200){
		gia = soDien*30000;
		printf("so tien dien phai tra la: %d",gia);
	}
}
	 
