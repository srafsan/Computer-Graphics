#include<graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,xNEW,yNEW,x1,y1,x1NEW,y1NEW,m,y2,x2,b;
    int i;
    initwindow(500,500, "");


    scanf("%f%f%f%f",&x,&y,&x1,&y1);
    xNEW=floor(x);
    yNEW=floor(y);
    x1NEW=floor(x1);
    y1NEW=floor(y1);
    printf("x= %f, y=%f\n x1= %f, y1=%f\n",xNEW,yNEW,x1NEW,y1NEW);


    m=(y1NEW-yNEW)/(x1NEW-xNEW);


    printf("%f\n",m);
    if(m<1 || m==1)
    {
        y2=yNEW;
        while(y2<=y1NEW)
        {
            putpixel(xNEW,y2,10);
            printf("%f %f\n",xNEW,y2);
            y2=y2+m;
            xNEW=xNEW+1;
        }
    }

    else
    {
        x2=xNEW;
        while(x2<=x1NEW)
        {
            putpixel(x2,yNEW,10);
            printf("%f %f\n",x2,yNEW);
            x2=x2+(1/m);
            yNEW=yNEW+1;
        }
    }



    getch();
    closegraph();

    return 0;

}
