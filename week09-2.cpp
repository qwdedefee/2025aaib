///week09-2.cpp c++ std::sort()
#include <algorithm>
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main(){
	vector<int> a(100);
	for(int i=0;i<100;i++)
		cin>>a[i];
	std::sort(a.begin(),a.end());
	for(int i=0;i<100;i++)
		printf("%d ",a[i]);
}
