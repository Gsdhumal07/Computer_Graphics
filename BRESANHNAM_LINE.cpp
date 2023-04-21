#include<iostream>
using namespace std;

void bresanham(int x1 , int y1 ,int x2 , int y2){
	int x=x1;
	int y=y1;
	
	int dx=x2-x1;
	int dy=y2-y1;
	int p=2*dy-dx;
	cout<<"X"<<"\t"<<"Y"<<"\t"<<"P"<<"\n";
	while(x<=x2){
		cout<<x<<"\t"<<y<<"\t"<<p;
		cout<<"\n";
		x++;
		if(p<0){
			p=p+2*dy;
		}
		else{
			p=p+2*dy-2*dx;
			y++;
		}
	}
}

int main(){
	int a,b,c,d;
	cout<<"Enter the first co-ordinate : ";
	cin>>a>>b;
	cout<<"Enter the Second co-ordinate : ";
	cin>>c>>d;
	bresanham(a,b,c,d);
	
	
}
