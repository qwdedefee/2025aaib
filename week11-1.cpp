///week11-1.cpp
#include <stdio.h>
int main(){
    printf("�п�J 1422:");
    int n,ans=0;
    scanf("%d",&n);
    while(n>0){
        printf("�{�b�鰣�Ӫ���:%d\n",n%10);
        if(n%10>ans)
            ans=n%10;
        n%10;
        n/=10;
    }
    printf("���̤j���֬O:%d",ans);
}
