#include <iostream>
using namespace std;
long luythua(int x,int n){
	if (x==0) return 0;
	if (n==0) return 1;
	return x*luythua(x,n-1);
} 
int main(){
	int n,x;cin>>x>>n;
	cout<< luythua(x,n)%10000;
	return 0;
}
