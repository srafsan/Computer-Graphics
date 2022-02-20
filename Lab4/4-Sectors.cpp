#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

using namespace std;
main()
{
    int x,y,r,i,h,k,s,g;

    cout << "Enter the x and y coordinates: ";
    cin  >> h >> k;
    cout << "Enter the radius : ";

    cin >> r;
    x = s= 0;
    y = g = r;

    int gd = DETECT, gm;

    initgraph(&gd, &gm,"");
    setcolor(WHITE);
    setcolor(8);

    while(x<=y)
    {
        putpixel(x+h,y+k,8);
        x++;
        y = sqrt((r*r)-(x*x));
    }

    setcolor(8);
    line(h,k,x+h,y+k);
    line(h,k,s+h,g+k);
    setcolor(8);

    getch();
}
