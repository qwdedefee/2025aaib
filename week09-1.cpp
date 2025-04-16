///week-09-1.cpp
///selection sort
#include <stdio.h>
int main(){
	int a[10]={9,8,7,0,1,2,6,5,4,3},c;
	for(int i=0;i<10;i++)
		printf("%d ",a[i]);
    printf("\n");
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]>a[j]){
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		printf("現在排好了 %d\n",a[i]);
	}
}
