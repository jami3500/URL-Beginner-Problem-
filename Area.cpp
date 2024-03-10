#include<bits/stdc++.h>
using namespace std;
int main(){
double a, b, c;
cin >> a >> b >> c;
double tri, cri, tra, squ, ret;

tri = 0.5*(a*c);
cri = 3.14159*(c*c);
tra = (a+b)/2*c;
squ = b*b;
ret = a*b;

cout << "TRIANGULO: " << fixed << setprecision(3) << tri << endl;
cout << "CIRCULO: " << fixed << setprecision(3) << cri << endl;
cout << "TRAPEZIO: " << fixed << setprecision(3) << tra << endl;
cout << "QUADRADO: " << fixed << setprecision(3) << squ << endl;
cout << "RETANGULO: " << fixed << setprecision(3) << ret << endl;

}
