#include <iostream>
#include <algorithm>
using namespace std;
bool myfunction (int i, int j) { return (i > j); }

int main(){
int n,j,t,comp;
cin>>n; int a[n];
for (int i=0;i<n;i++) cin>>a[i];
sort(a,a+n,myfunction); j=1; t=a[0];
while (a[j]>j){t+=a[j]-j;j++;
}
cout<<t;
return 0;
}

