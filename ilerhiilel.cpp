#include<bits/stdc++.h>
using namespace std;
int main (){
    double x, y;
    cin >> x >> y;
    double x1,y1, xy = 1;
    
    if(x < 0) x1 = x * (-1);
    else x1 = x;

    if(y < 0) y1 = y * (-1);
    else y1 = y;

    if(x * y < 0) xy = (x * y) * (-1);
    else xy = x * y;

    cout << fixed << setprecision(1) <<  (x1 - y1)/(1 + xy) << endl;
    return 0;
}