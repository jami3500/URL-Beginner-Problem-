#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c, sum,maxi;
cin >> a >> b >> c;
sum = (a+b+abs(a-b))/2;
maxi = (sum+c+abs(sum-c))/2;

cout << maxi << " eh o maior" << endl;


}
