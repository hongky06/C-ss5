#include<stdio.h>
int main(){
	float num1,num2;
	printf ("hay nhap so thu nhat ");
	scanf("%f",&num1);
	printf ("hay nhap so thu hai ");
	scanf("%f",&num2);
	
	printf ("1. tong ha so \n ");
	printf ("2. Hieu hai so ");
	printf ("3. tich hai so \n");
	printf ("4. thuong hai so \n");
	printf ("5. thoat \n");
	  
	  int click;
	  printf ("ban chon so: ");
	  scanf("%d",&click);
    	switch(click){
    		case 1 :
    			printf("tong hai so la: %.1f + %.1f = %.1f ",num1,num2,num1+num2);
    			break;
			case 2 :
    			printf("hieu hai so la: %.1f - %.1f = %.1f ",num1,num2,num1-num2);
    			break;
	        case 3 :
    			printf("tich hai so la: %.1f x %.1f = %.1f ",num1,num2,num1*num2);
    			break;
            case 4 :
    			printf("thuong hai so la: %.1f : %.1f = %.1f ",num1,num2,num1/num2);
    			break;
    		case 5 :
    			break;
			}
	
	return 0;
}
