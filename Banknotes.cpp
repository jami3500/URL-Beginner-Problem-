#include<bits/stdc++.h>
using namespace std;
int main(){

int n, backup;
cin >> n;

 cout << n << "\n";
 cout << n/100 << " nota(s) de R$ 100,00\n";
 backup = (n%100);
 cout << backup/50 << " nota(s) de R$ 50,00\n";
 backup = (backup%50);
 cout << backup/20 << " nota(s) de R$ 20,00\n";
 backup = (backup%20);
 cout << backup/10 << " nota(s) de R$ 10,00\n";
 backup = (backup%10);
 cout << backup/5 << " nota(s) de R$ 5,00\n";
 backup = (backup%5);
 cout << backup/2 << " nota(s) de R$ 2,00\n";
 backup = (backup%2);
 cout << backup/1 << " nota(s) de R$ 1,00\n";
 backup = (backup%1);

}
