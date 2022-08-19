#include <iostream>
using namespace std;

int max(int x, int y);

int main (){
    int xb,yb,xc,yc;
    cin >> xb >> yb >> xc >> yc;

    const int mapx = max(xb , xc);
    const int mapy = max(yb , yc);

    int map[mapx][mapy] = {0};

    for (int i = 0 ; i < mapx ; i ++){
        for (int j = 0 ; j < mapy ; j ++){
            map[i][j] = 0;
        }
    }

    map [xc    ][yc    ] = 1;
    map [xc - 2][yc + 1] = 1;
    map [xc - 2][yc - 1] = 1;
    map [xc + 2][yc + 1] = 1;
    map [xc + 2][yc - 1] = 1;
    map [xc - 1][yc - 2] = 1;
    map [xc + 1][yc + 2] = 1;
    map [xc + 1][yc - 2] = 1;
    map [xc - 1][yc + 2] = 1;

    for (int i = 0 ; i < mapx ; i ++){
        for (int j = 0 ; j < mapy ; j ++){
            cout << map[i][j] << " " ;
        }
        cout << endl;
    }

    return 0;
}

int max (int x,int y){
    if (x > y)
        return x;
    else 
        return y;
}
