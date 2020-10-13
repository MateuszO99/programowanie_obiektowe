#include <iostream>

using namespace std;

long long sil(int n){

long long silnia = 1;
for(int i=n;i>1;i--)
		silnia*=i;
		
return silnia;
}

long long newton(int n, int k){
long long nt = sil(n)/(sil(k)*sil(n-k));

return nt;
}

int main(){return 0;}

