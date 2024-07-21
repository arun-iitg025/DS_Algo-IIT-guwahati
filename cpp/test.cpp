#include<iostream>
#include<graphics.h>
using namespace std;

main()
{
        int gd=0,gm;
        initgraph(&gd,&gm,"");
        circle(100,80,20);
        getch();
        closegraph();

}
