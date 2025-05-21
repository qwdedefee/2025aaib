///weeek14-2.cpp
#include <stdio.h>
int main(){
	int a[100],b,t=1;
	while(scanf("%d",&b)==1){
		int bad=0;
		for(int i=0;i<b;i++){
			scanf("%d",&a[i]);//part 1 input
			if(i>0 && a[i-1]>=a[i])
				bad=1;
		}
		int tab[20002]={};
		for(int i=0;i<b;i++){
			for(int j=i;j<b;j++){
				int now=a[i]+a[j];
				if(tab[now]>0)
					bad=1;
				tab[now]++;
			}
		}
		if(bad==0)
			printf("Case #%d: It is a B2-Sequence.\n\n",t);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n",t);
		t++;
	}
}
