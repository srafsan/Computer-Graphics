#include <math.h>
#include <bits/stdc++.h>
#include <conio.h>
#include <graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm,x1,x2,y1,y2,x4,y4;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	float angle=0,ang;
//	cout<<"\nROTATION OF A LINE\n";
	cout<<"Enter the first coordinate of a line:";
	cin>>x1>>y1;
	cout<<"Enter the second coordinate of a line:";
	cin>>x2>>y2;
	line(x1,y1,x2,y2);
	cout<<"Enter the angle:";
	cin>>ang;
	angle=(ang*3.14)/180;
	setcolor(CYAN);
	int p=x2, q=y2,a1,b1;
	a1=p+(x1-p)*cos(angle)-(y1-q)*sin(angle);
    b1=q+(x1-p)*sin(angle)+(y1-q)*cos(angle);

	line(x2,y2,a1,b1);
	getch();
	closegraph();
}
