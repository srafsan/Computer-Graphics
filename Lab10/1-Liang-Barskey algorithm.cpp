#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
void Window()
{
    line(100,100,350,100);
    line(350,100,350,350);
    line(100,100,100,350);
    line(100,350,350,350);
}

void Code(char c[4],float x,float y)
{
    c[0]=(x<100)?'1':'0';
    c[1]=(x>350)?'1':'0';
    c[2]=(y<100)?'1':'0';
    c[3]=(y>350)?'1':'0';
}

void Clipping  (char c[],char d[],float &x,float &y,float u)
{
    int flag=1,i=0;
    for (i=0; i<4; i++)
    {
        if(c[i]!='0' && d[i]!='0')
        {
            flag=0;
            break;
        }
        if(flag)
        {
            if(c[0]!='0')
            {
                y=u*(100-x)+y;
                x=100;
            }
            else if(c[1]!='0')
            {
                y=u*(350-x)+y;
                x=350;
            }
            else if(c[2]!='0')
            {
                x=((100-y)/u)+x;
                y=100;
            }
            else if(c[3]!='0')
            {
                x=((350-y)/u)+x;
                y=350;
            }
        }
    }
}

int main()
{
    int gd = DETECT, gm, errorcode;
    float x1,y1,x2,y2;
    float u;
    char c[4],d[4];
    initgraph(&gd, &gm, "");
    x1=50, y1=200, x2=300, y2=400;
    Window();
    line(x1,y1,x2,y2);
    getch();
    cleardevice();
    u=float((y2-y1)/(x2-x1));
    Code(c,x1,y1);
    Code(d,x2,y2) ;
    Clipping(c,d,x1,y1,u);
    Clipping(d,c,x2,y2,u);
    Window();
    line(x1,y1,x2,y2);
    getch();
    getch();
    closegraph();
}
