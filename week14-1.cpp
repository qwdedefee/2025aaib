///weeek14-1.cpp
#include <stdio.h>
int main(){
	int a[100],b,t=1;
	while(scanf("%d",&b)==1){
		for(int i=0;i<b;i++)
			scanf("%d",&a[i]);//part 1 input
		printf("Case #%d: It is a B2-Sequence.\n\n",t);
		t++;
	}
}
