#include <iostream>
#include<math.h>
#include <algorithm>
using namespace std;
//---- to hop chap c(k,n)----
int C(int k,int n){
	if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
//------quay lui----


//------main----
int main(){
	int k,n;cin>>k>>n;
	int a[n];fill_n(a,n,1);
	cout<<pow(k,n)<<endl;
//	do {
		for (int i=1;i<=n;i++) cout<<a[i];
	//	while (i<>0&&a[i]==n){
			
	//	}	
	//}
}
