#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;int a[n];int b[n];
	cin >>a[0];b[0]=a[0];
	for (int i=1;i<n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	bool kt=true;
	for (int i=1;i<n;i++)
		if (a[i]<b[i-1]) kt=false;
	if (kt==1) cout<<"TRUE";
	else cout<<"FALSE";
	return 0;
}
