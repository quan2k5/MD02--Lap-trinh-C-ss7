#include <stdio.h>
int main (){
	int number;
	printf("nhap mot so nguyen n bat ky ");
	scanf ("%d",&number);
	int choice;
	do{
		printf("\n  SO NGUYEN  \n");
		printf("1.in ra day so nho hon hoac bang n va tinh tong\n");
		printf ("2.in ra va dem cac so chia het cho 3 ma nho hon n\n");
		printf ("3.kiem tra so nguyen co phai la so nguyen to\n");
		printf ("4.kiem tra so nguyen co phai la so hoan hao\n");
		printf ("5.tinh tong cac uoc so cua n\n");
		printf ("6.tinh giai thua cua n\n");
		printf ("7.in ra so dao nguoc cua n\n");
		printf ("8.in ra cac so nguyen to tu 1 den n\n");
		printf ("9. thoat\n");
		printf ("nhap vao lua chon cua ban");
		scanf ("%d",&choice);
		int sum;
		int i1=0;
		int check = 0;
		int sum1=0;
		int sum2=0;
		int multiply=1;
		int check1=0;
		switch (choice){
			case 1:
				number=number-1;
				while(number!=0){
					printf("%d",number);
					sum=sum+number;
					number=number-1;							
				}
				printf("tong cua cac day so nho hon n la %d",sum);
				break;
			case 2:
				while(number!=0){
					if(number%3==0){
						printf ("cac so chia het cho 3 la %d\n",number);
						 i1=i1+1;
					}
					number=number-1;
				}
				printf ("co %d chia het cho 3",i1);
				break;
			case 3:
				if(number<2){
					printf ("khong phai la so nguyen to");
				}else if(number==2){
					printf ("so 2 la so nguyen to");
				}else{
					for(int i= number-1;i>=2;i--){
						if(number%i==0){
							check=check+1;
							break;
						}
					}
					if(check == 0){
						printf(" %d la so nguyen to\n ",number);
					}else{
						printf("khong phai la so nguyen to\n");
					}
				}
				break;
			case 4: 
			for(int i=number-1;i>0;i--){
				if (number%i==0){
					sum1=sum1+i;
				}
			}
			if(sum1==number){
				printf("%d la so hoan hao\n",number);
			}else{
				printf("%d khong phai la so hoan hao\n",number);
			}
			break;
			case 5:
				for(int i=number;i>0;i--){
					if (number%i==0){
					sum2=sum2+i;
					}					
				}
			      printf("tong cac uoc so cua n la %d",sum2);
			break;
			case 6:
			    for(int i=number;i>0;i--){
			    	multiply=multiply*i;
			}
			printf ("giai thua cua n la %d",multiply);
			break;
			case 8:
			printf ("cac so nguyen to nho hon n la ");                                
			for(int i=number;i>0;i--){ 
				for(int index=i;index>0;index--){
					if(i%index==0){
						check1=check1+1;
					}				
				} 
				if(check1==2){
					printf ("%d ",i);
				}
				check1=0;	
			}
			break;				
		}
	}while(choice!=9);
}
