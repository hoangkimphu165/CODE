#include <iostream>
#include <math.h>

using namespace std;
//-------kiem tra nguyen to----

bool ktra(int s){
	if (s<=1) return false;
	for (int i=2;i<=sqrt(s);i++)
		if (s%i==0) return false;
	return true;	
}
//------so doi xung-----
int dx(int n){
	int t=n; int r=0;
	while (t>0){
		r=r*10+t%10;
		t/=10;
	}
	return r;
}
int main(){
	int a,b;
	cout<<"Nhap a,b: ";
	cin>>a>>b;
	cout<<"Cac so thoa man giua doan "<<a<<", "<<b<<" la: ";
	for (int i=a;i<=b;i++)
		if (ktra(i)==1&&ktra(dx(i))==1) cout<<i<<" ";
	return 0;
}
