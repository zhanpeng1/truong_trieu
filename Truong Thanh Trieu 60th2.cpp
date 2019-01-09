#include<stdio.h>
#include<conio.h>

int main(){
	float tien_ban_dau, tien_ky_vong, lai_suat;
	int so_nam;
	
	printf("nhap so tien ban dau: ");
	scanf("%f",&tien_ban_dau);
	
	printf("nhap so tien ky vong: ");
	scanf("%f", &tien_ky_vong);
	
	printf("nhap lai suat: ");
	scanf("%f", &lai_suat);
	
	so_nam = ((tien_ky_vong / tien_ban_dau) - 1) / lai_suat;
	
	printf("so nam can thiet: %d", so_nam);
	
	getch();
	return 0;
}
