#include <iostream>
using namespace std;
//-------tim day con-----
void daycon(int a[],int n){
	int b[n];int vt;
	b[0]=1;int max=0;
	for (int i=1;i<n;i++){
		if (a[i]>a[i-1]) b[i]=b[i-1]+1;
		else b[i]=1;
	}
	for (int i=0;i<n;i++)
		if (b[i]>max) {max=b[i];vt=i; }
			
	cout <<"Day con dai nhat co "<<max<<" phan tu do la: ";
	for (int i=vt-max+1;i<=vt;i++) cout <<a[i]<<" ";		
}
//--------main-----
int main(){
	int n; 
	cout<<"So phan tu cua mang: ";cin >> n;
	int a[n];
	cout<<"Cac phan tu cua mang: ";
	for (int i=0;i<n;i++) cin >>a[i];
	daycon(a,n);	
	return 0;
}
