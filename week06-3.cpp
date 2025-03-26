///week06-3.cpp
#include <stdio.h>
int main(){
	printf("Enter the number of values to be processed: ");
	int a,b,c=1;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
	printf("Enter a value: ");
	scanf("%d",&b);
	c*=b;
	}
	printf("Product of the %d values is %d",a,c);
}
