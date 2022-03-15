#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int estPremier(int x){
	int i,cmp=0,test=0,limite;
	if(x==1){
	return -1;
	}
	if(x==2){
		return 1;
	}
	limite=sqrt(x)+1;
	if(x%2==0){
		test = 1;
	}
	
	else{
		for(i=3;i<limite && !test ; i+=2,cmp++){
			if(x%i ==0){
				test=1;
				
			}
		}
	}
	if(!test){
		//printf("%d nombre premier, nombre d iteration = %d",x,cmp);
		return 1;
	}else{
		//printf("%d nombre non premier, nombre d iteration = %d",x,cmp);
		return 0;
	}
	
}
int divise(int n,int k)
{
	if(n%k==0)
	{
		return 1+divise(n/k,k);
	}
	return 0;
	
}
void factoriser(int n)
{
	int k,r;
	int i=0;
	if(n>1)
	{
		if(estPremier(n)==1)
		{
			printf("%d^1",n);
		}
		else{
			for(k=2;k<n;k++)
			{
				if(estPremier(k)==1)
				{
					r=divise(n,k);
					if(r!=0){
					printf("%d^%d+\t",k,r);
					}
				}
				
			}
		}
	}
	return ;
}
int pgcd(int a,int b)
{
	int R=a%b;
	while(R!=0)
	{
		a=b;
		b=R;
		R=a%b;
	}
	return b;
}
int main() {
	factoriser(1240);
//	int z=pgcd(,11111);
//	printf("%d",z);
	return 0;
}
