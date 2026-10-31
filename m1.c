#include<stdio.h>
int main(){
	int c;
	float f,k;
	scanf("%i",&c);
	f=(float)(c*9/5)+32;
	k=(float)c+273.15;
	printf("%.2f \n%.2f",f,k);
}

