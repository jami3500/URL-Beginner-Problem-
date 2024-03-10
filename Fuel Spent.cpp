#include <bits/stdc++.h>

using namespace std;

int main() {

   int x,y;
   float fuel_need;
   cin >> x >> y;
   fuel_need = (y/12.0)*x;

   cout << fixed << setprecision(3) << fuel_need << endl;

    return 0;
}
