#include<stdio.h>
int main (){
	int nhan,so_nhap_vao;
	printf("hay nhap bang cu chuong: ");
	scanf("%d",&so_nhap_vao);
	for(nhan = 1 ; nhan <= 10 ;nhan ++){
		printf ("\n %d x %d = %d",so_nhap_vao,nhan, so_nhap_vao*nhan );
	}
}
