#include<bits/stdc++.h>
using namespace std;
int main(){

int second, minute,hours;
cin >> second;

hours = (second/3600);
second = second - (hours*3600);

minute = (second/60);
second = second - (minute*60);

cout << hours << ":" << minute << ":" << second << endl;



}
