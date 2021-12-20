#include <iostream>
using namespace std;

void ketqua(int a[], int b[],int n){
	b[0]=1;int max=0;
	for (int i=1;i<n;i++){
		if (a[i]>a[i-1]) b[i]=b[i-1]+1;
		else b[i]=1;
	}
	for (int i=0;i<n;i++)
		if (b[i]>max) max=b[i];
	cout << max;
}

int main(){
	int n; 
	cout<<"Nhap so phan tu mang: ";cin>>n;
	int a[n],b[n];
	cout<<"Nhap mang: ";
	for (int i=0;i<n;i++) cin >>a[i];
	ketqua(a,b,n);
	return 0;
}
