#include<graphics.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void drawline(int x0,int y0,int x1,int y1)
{
    int dx, dy, p, x, y;
    float m,b;
    x=0;
    while(x<x1){
        y=x+2;
        putpixel(x,y,7);
        x=x+1;
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x0=0,y0=0,x1=200,y1=200;
    drawline(x0,y0,x1,y1);
    int m[2][3]={{0,1,-2},{1,0,2}};

    int Coord[3][4]={{100,100,120,120},{60,90,60,90},{1,1,1,1}};

    for(int k=0;k<4;k++){
        putpixel(Coord[0][k],Coord[1][k],WHITE);
    }

    int row1=2,col1=3,row2=3,col2=4;
    int rlt[row1][col2];

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            rlt[i][j]=0;
            for(int k=0;k<row2;k++){
                rlt[i][j]+=m[i][k]*Coord[k][j];
            }
            cout<<rlt[i][j]<< "\t";
        }
        cout<<endl;
    }
    for(int k=0;k<4;k++){
        putpixel(rlt[0][k],rlt[1][k],7);
    }

    getch();
}
