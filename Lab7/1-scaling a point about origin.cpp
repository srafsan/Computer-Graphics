#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int gd = DETECT, gm,
        x1 = 30, y1 = 30, x2 = 60, y2 = 60;
    float a = 5.0, b=5.0;

    initgraph(&gd, &gm, "");
    line(x1,y1,x2,y2);

    x1 *= a, y1 *= b;
    x2 *= a, y2 *= b;

    line(x1,y1,x2,y2);

    getch();
}
