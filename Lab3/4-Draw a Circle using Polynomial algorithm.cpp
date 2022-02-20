#include<graphics.h>
#include<conio.h>
#include<math.h>

void setPixel(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, CYAN);
    putpixel(x+h, -y+k, CYAN);
    putpixel(-x+h, -y+k, CYAN);
    putpixel(-x+h, y+k, CYAN);
    putpixel(y+h, x+k, CYAN);
    putpixel(y+h, -x+k, CYAN);
    putpixel(-y+h, -x+k, CYAN);
    putpixel(-y+h, x+k, CYAN);
}
int main()
{
    int gd = 0,  gm, h, k, r;
    double x, y, x2;

    h = 200, k = 200, r = 100;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    x=0, y=r;
    x2 = r/sqrt(2);

    while(x <= x2)
    {
        y = sqrt(r*r - x*x);
        setPixel(floor(x), floor(y), h, k);
        x++;
    }
    getch();
    closegraph();

    return 0;
}
