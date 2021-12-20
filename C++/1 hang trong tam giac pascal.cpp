#include <iostream>
using namespace std;

//---- to hop chap c(k,n)----
int C(int k,int n){
	if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
//------main----

int main(){
	int n; 
	cout<<"Nhap so hang can tim trong tam giac pascal: ";cin >>n;
	cout<<"Cac phan tu hang do la: ";
	for (int i=0;i<=n-1;i++) cout<<C(i,n-1)<<" ";
	return 0;
}
