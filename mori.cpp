#include <bits/stdc++.h>
using namespace std;


#define NEG4 0
#define NEG3 1
#define NEG2 2
#define NEG1 3
#define ZERO 4
#define POS1 5
#define POS2 6
#define POS3 7
#define POS4 8
#define POS5 9
#define POS6 10
#define POS7 11
#define POS8 12


#define Z0 0
#define Z1 1
#define Z10 10

int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[8] = {1, -1, 1, -1, 2, -2, 2, -2};

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int e[11][11] = {
        {Z0, Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z0},
        {Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z1, Z0},
        {Z1, Z0, Z0, Z0, Z1, Z0, Z0, Z0, Z1},
        {Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z1, Z0},
        {Z1, Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z1},
        {Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z1, Z0},
        {Z1, Z0, Z0, Z0, Z1, Z0, Z0, Z0, Z1},
        {Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z1, Z0},
        {Z0, Z0, Z1, Z0, Z1, Z0, Z1, Z0, Z0}
    };


    for(int i = -4; i <= +4; i++){
        for(int j = -4; j <= +4; j++){
            if(i < 1 || i > 8 || j < 1 || j > 8){
                e[i+4][j+4] = Z0;
            } else {
                e[i+4][j+4] += Z10;
            }
        }
    }


    bool can = false;
    for(int i = 0; i < 8; i++){
        int x1 = a + dx[i];
        int y1 = b + dy[i];
        if(x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8) continue;
        for(int j = 0; j < 8; j++){
            int x2 = x1 + dx[j];
            int y2 = y1 + dy[j];
            if(x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) continue;
            if(x2 == c && y2 == d) can = true;
        }
    }

    if(can) cout << "yes";
    else cout << "no";
}
