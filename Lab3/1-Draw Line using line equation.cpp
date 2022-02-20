#include<graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float x, y, xNEW, yNEW,
          x1, y1, x1NEW, y1NEW,
          m, y2, x2, b;

    initwindow(500,500, "");

    scanf("%f%f%f%f", &x, &y, &x1, &y1);

    xNEW  = floor(x);
    yNEW  = floor(y);
    x1NEW = floor(x1);
    y1NEW = floor(y1);
    printf("x= %f, y=%f\n x1= %f, y1=%f\n",xNEW, yNEW, x1NEW, y1NEW);

    m = (y1NEW-yNEW)/(x1NEW-xNEW);
    b = yNEW-(m*xNEW);

    if(m<1 || m==1)
        for(i = xNEW+1; i < x1NEW; i++)
        {
            y2=(m*i)+b;
            putpixel(i,y2,10);
        }
    else
        for(i=yNEW+1; i<y1NEW; i++)
        {
            x2=(i-b)/m;
            putpixel(x2,i,10);
        }

    getch();
    closegraph();

    return 0;
}
