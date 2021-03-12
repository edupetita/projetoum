#include <stdio.h>

int main(){
	
	
int v[4]={1,2,3,4};
int *p=v;
int *w=&v[2];
int i=30;

int* x= &i;


	printf("%i\n",p);
	printf("%i\n",v);
}

