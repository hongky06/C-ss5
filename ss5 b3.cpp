#include<stdio.h>
int main(){
	int so,tong=0;
	printf("hay nhap so: ");
	scanf("%d",&so);
	while(so!=0){
	   	tong += so;
	   	if(so>0){
	   		so--;
		}else{
		   	so++;
		}
	}
     printf("%d",tong);
     
    
	
	return 0;
}
