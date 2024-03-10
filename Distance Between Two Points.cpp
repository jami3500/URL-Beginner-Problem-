#include <bits/stdc++.h>

using namespace std;

int main() {

    double x1,y1,x2,y2,a,b,c,d,distance;
    cin >> x1 >> y1 >> x2 >> y2;

    a = (x2-x1);
    b = a*a;

    c = (y2-y1);
    d = c*c;

    distance = sqrt(b+d);

   cout << fixed << setprecision(4) << distance << endl;

}
