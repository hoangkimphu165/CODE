#include <iostream>
using namespace std;

//-----------------Tinh giai thua---------//
int giaithua(int n)
{
    if (n == 1)
        return 1;
    return n * giaithua(n - 1);
}
 
//----------Tong cac so tu 1 den n------------//
int total(int n){
    int t=0;
    for (int i=1;i<=n;i++) t+=i;
    return t;
}
//---------------Tong cac so 1+1/2+...+1/n-------//
float total1(int n){
    float t=0.0;
    for (int i=1;i<=n;i++) t+=1.0/i;
    return t;
}
//---------------Tong cac so 1+1/2!+..+1/n!-------------//
float total2(int n){
    float t=0.0;
    for (int i=1;i<=n;i++) t+=1.0/giaithua(i);
    return t;
}
void Menu() {
	cout << "=================MENU================\n";
	cout << "1. Tong cac so tu 1 den n\n";
	cout << "2. Tong cac so 1+1/2+...+1/n\n";
	cout << "3. Tong cac so 1+1/2!+..+1/n!\n";
	cout << "4. Thoat\n";
	cout << "=====================================\n";
}

int ChonMenu()
{
	int m;
	cout << "\n\nMoi chon menu: ";
	cin >> m;
	if (m < 0 || m > 5 )
	return ChonMenu();
	return m; 
}


int main()
{   int n,x;
	cout <<"Nhap n: ";
	cin>>n;	
    Menu();
    int chon = ChonMenu();
    
	switch (chon)
	{
	case 1:		
		cout << "Tong cac so tu 1 den n: "<<total(n);
		break;
	case 2:
		cout << "Tong cac so 1+1/2+...+1/n: "<<total1(n);
		break;
	case 3:
		cout << "Tong cac so 1+1/2!+..+1/n!: "<<total2(n);
		break;
	case 4:
		cout << "Hen gap lai!!!\n";
		exit(1);
		break;
	}
	
    return 0;
}
