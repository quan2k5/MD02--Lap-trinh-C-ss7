#include<stdio.h>
int main(){
	float input_money,rate,month,money;
	printf("nhap vao so tien gui la ");
	scanf("%f",&input_money);
	printf ("\nnhap vao lai suat la ");
	scanf ("%f",&rate);
    printf("\nnhap vao so thang gui la ");
    scanf ("%f",&month);
    float profit=0;
    for(int i=1;i<=month;i++){
    	profit=profit+input_money*rate/12;
    	}
    	printf("lai xuat la %f",profit);
    	printf("\ntien nhan duoc la %f",input_money+profit);
}
