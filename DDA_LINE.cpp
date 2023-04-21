#include<iostream>
using namespace std;

void dda(float x1 , float y1 ,int x2  , int y2){
	
	int dx= x2-x1;
	int dy=y2-y1;
	float steps;
	
	if(dx>dy){
		steps = dx;
	}
	else{
		steps = dy;
	}
	float xinc=dx/steps;
	float yinc=dy/steps;
	cout<<x1<<"\t"<<(int)y1<<"\t";
	for(int i=0;i<steps;i++){
		
		cout<<"\n";
		x1=(float)(x1+xinc);
		y1=(float)(y1+yinc);
		cout<<x1<<"\t"<<(int)y1<<"\t";
	}
}

int main(){
	int a,b,c,d;	
	cout<<"Enter the first co-ordinate : ";
	cin>>a>>b;
	cout<<"Enter the second co-ordinate : ";
	cin>>c>>d;
	dda(a,b,c,d);
	
}
