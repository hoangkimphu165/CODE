#include <iostream>

using namespace std;

void nhapmang(int a[],int na){
for (int i=0;i<na;i++) cin>>a[i];
}

void taomang(int a[],int na,int b[],int nb,int c[],int nc){
	int k=0;
	for (int i=0;i<na;i++){
		int d=0;
		for (int j=0;j<nb;j++) 
			if (a[i]==b[j]) d++;
		if (d==0) {c[k]=a[i];k++; cout <<a[i]<<" ";}
		}
	for (int i=0;i<nb;i++){
		int d=0;
		for (int j=0;j<na;j++) 
			if (b[i]==a[j]) d++;
		if (d==0) {c[k]=a[i];k++;cout << b[i]<<" ";}  
		}
	nc=k;
}

void xuatmang(int c[],int nc){
	for (int i=0;i<=nc;i++){
		cout <<c[i];
	}
}

int main(){
	int na;cin>>na;int a[na];
	nhapmang(a,na);
	int nb;cin>>nb;int b[nb];
	nhapmang(b,nb); 
	int c[255];int nc;
	taomang(a,na,b,nb,c,nc); cout<<endl;
	cout<<nc;
//	xuatmang(c,nc);
	return 0;
}
