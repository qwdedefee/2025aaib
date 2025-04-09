#include <stdio.h>
int main(){
	int a[100],c;
	for(int i=0;i<100;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<99;i++){
		for(int j=0;j<99;j++){
			if(a[j]>a[j+1]){
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	for(int i=0;i<100;i++)
	printf("%d ",a[i]);

}
