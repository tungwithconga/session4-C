#include <stdio.h>
int main(){
	int son;
	printf ("nhap so nguyen : ");
	scanf ("%d",&son);
	if (son % 3 ==0 && son % 5 == 0){
		printf ("chia het cho ca 3 va 5");
	}else{
		printf ("so nay khong chia het cho 3 va 5 ");
	}
}
