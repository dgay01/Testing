#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void) {

		FILE *finout;
	    finout=fopen("datatest3.txt","w");

	double n, x, y, z;
	double a,c;
	double A, B, p,X, Y;
	double pi;

	//x=0;
	//y=1;
	
	A=0.001;
	pi=3.14159265359;
	B=0.00534679805621781608330843237138;
	
for(n=0;n<2173;n++){


	/*if(n<=1) z=n;
	else
	{
	z=x+y;
	x=y;
	y=z;
	}*/
	
	
	
	
	X=A*cos(n*pi/180)*exp(B*n);
	Y=A*sin(n*pi/180)*exp(B*n);

	
	

	printf("%g %g\n",X,Y);
	fprintf(finout, "%g %g\n",X,Y);
				}
	
	

				
	return EXIT_SUCCESS;
}





