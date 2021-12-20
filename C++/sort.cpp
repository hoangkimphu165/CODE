#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	sort(a,a+8);
	for (int i=0;i<9;i++) cout<<a[i]<<" ";
	return 0;
}
