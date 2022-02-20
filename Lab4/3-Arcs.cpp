#include<stdio.h>
#include<graphics.h>
#include<math.h>
# define M_PI 3.14
void plotcircle(int,int,int,int);

int main()
{
    int gd=DETECT,gm,i,start_angle=0,end_angle=100;
    float a, b, h, k,r,theta, thetaend,step,xend;
    initgraph(&gd,&gm,"");

    h=319,k=329,a=40,b=50,step=0.005,r=40;
    float angle=(((start_angle<=end_angle)?start_angle:end_angle)*(M_PI/180));
    float range=(((end_angle>start_angle)?end_angle:start_angle)*(M_PI/180));

    float x=(r*cos(angle));
    float y=(r*sin(angle));

    do
    {
        putpixel((int)(h+x+0.5),(int)(k-y+0.5),GREEN);

        angle+=0.001;

        x=(r*cos(angle));
        y=(r*sin(angle));
    }
    while(angle<=range);
    getch();
    closegraph();
    return 0;
}
