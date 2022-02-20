#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int gd = DETECT, gm,
        x1=20,y1=30,x2=40,y2=30,x3=30,y3=10;
    float a=5.0, b=5.0;

    initgraph(&gd, &gm, "");
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);

    x1 *= a, y1 *= b;
    x2 *= a, y2 *= b;
    x3 *= a, y3 *= b;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);

    getch();
}
