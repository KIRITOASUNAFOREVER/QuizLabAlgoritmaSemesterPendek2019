#include<stdio.h>

int main()
{
	float T,A,reamur,fahreinheit,kelvin;
	scanf("%f",&T);
	for(int i=0;i<T;i++)
	{
		scanf("%f",&A);
		printf("%.2f %.2f %.2f\n",(0.8*A),((1.8*A)+32),(A+273));
	}
}
