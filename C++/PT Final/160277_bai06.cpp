#include <iostream>
using namespace std;

int main(){
	int n,k;cin>>n>>k;int a[n];
	int b[n];int l=0;int r=n-1;
	for (int i=0;i<n;i++) {cin>> a[i]; b[i]=b[i-1]+ a[i];}
	for (int i=0;i<n-1;i++)
	 for (int j=n-1;j>i;j--) {
	 	if (b[j]-b[i]==k && j-i < r-l) {l=i+2;r=j+1; }
	 }
	cout<< l<<" "<<r<<endl;
	for (int i=0;i<n;i++) cout <<b[i]<<" ";
	return 0; 
	
}
