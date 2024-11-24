#include<stdio.h>
int main (){
	// nhap du lieu 
	int number1 = 1;
	int number2;
	printf("hay nhap so : ");
	scanf("%d",&number2);

	
	// xua du lieu 

	do {
		printf("%d\n",number2); 
		--number2;
	}while (number1 <= number2);
	return 0;
	
			
}
