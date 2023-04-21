#include<iostream>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>


void main(){
	float x ,y ,x1 ,y1 , x2 ,y2 , dx ,dy ,step;
	int i , gd = DETECT ,gm;
	initgraph(&gd, &gm ,"NULL");
	
	cout<<"FIRST CO-ORDINATES : ";
	cin>>x1>>y1;
	cout<<"Second CO-ORDINATES : ";
	cin>>x2>>y2;
	
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>=abs(dy)){
		step = abs(dx);
		
	}
	else{
		step=abs(dy);
	}
	dx=dx/step;
	dy=dy/step;
	x=x1;
	y=y1;
	i=1;
	while(i<=step){
		putpixel(x,y,15);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(200);
	}
	getch();
	closegraph();
	
}
