#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,r,p,h,k;

    initwindow(400,400, "");

    printf("Enter co-ordinate of center(h,k)= ");
    scanf("%d%d",&h,&k);

    printf("Enter the radius:");
    scanf("%d", &r);

    x = 0;
    y = r;
    p = 1-r;

    while(x<=y)
    {
        if(p<0)
            p += (2*x+3); //T
        else
        {
            p += (2*(x-y)+5); //S
            y--;
        }
        x++;

        putpixel(x+h,y+k, CYAN);
        putpixel(x+h,-y+k, CYAN);
        putpixel(y+h,-x+k, CYAN);
        putpixel(-y+h,-x+k, CYAN);
        putpixel(-x+h,-y+k, CYAN);
        putpixel(-x+h,y+k, CYAN);
        putpixel(-y+h,x+k, CYAN);
        putpixel(y+h,x+k, CYAN);
    }

    getch();
    closegraph();

    return 0;
}
