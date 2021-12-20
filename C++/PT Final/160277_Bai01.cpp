#include <iostream>
#include <math.h>
using namespace std;
//--------giai phuong trinh bac 2----
void giai(float a,float b,float c,float del,float x1,float x2){
	if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "Phuong trinh co  vo so nghiem";
            } else {
                cout << "Phuong trinh vo nghiem" ;
            }
        } else {
            cout << "Phuong trinh co 1 nghiem duy nhat: " << -c/b ;
        }
    } else {
        del = b*b - 4*a*c;
        if(del > 0) {
            x1 = (-b+sqrt(del))/(2*a);
            x2 = (-b-sqrt(del))/(2*a);
            cout << "Nghiem x1= " << x1 << endl;
            cout << "Nghiem x2 = " << x2 << endl;
        } else if ( del == 0) {
            cout << "Phuong trinh co nghiem kep: x= " << -b/2*a;
        } else {
            cout << "Phuong trinh vo nghiem";
        }
    }
}
//----------main-----------
int main()
{
 
    float a, b, c, del, x1, x2;
    cin >> a;
    cin >> b;
    cin >> c;
 //   clrscr();
    giai(a,b,c,del,x1,x2);
    return 0;
}
