///week13-2.cpp
#include <stdio.h>
int main(){
	int a=51,b=68,ans=1;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0)
			ans=i;
	}
	printf("���%d %d���̤j���]��:%d\n",a,b,ans);
	printf("%d/%d������A�ܦ�%d/%d",a,b,a/ans,b/ans);
}
