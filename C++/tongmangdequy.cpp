#include <iostream>
#include <vector>
using namespace std;
struct BigInt{
    int sign;
    vector<int> val;
}

BigInt tong(BigInt a[],int n){
	if (n==1) return a[0];
	return a[n-1]+tong(a,n-1);
}
int main()
{
    int n;cin >> n;BigInt a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    cout <<tong(a,n);
    return 0;
}
