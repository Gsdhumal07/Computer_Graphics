#include<iostream>
using namespace std;
void brescircle(int xc, int yc , int r){
	int p=3-2*r;
	int x=0;
	int y=r;
	cout<<"P"<<"\t"<<"X"<<"\t"<<"Y"<<"\t"<<"Xc"<<"\t"<<"Yc"<<"\n";
	while(x<=y){
		cout<<p<<"\t"<<x<<"\t"<<y<<"\t"<<xc+x<<"\t"<<yc+y<<"\n";
		x++;
		if(p<0){
			p=p+4*x+6;
		}
		else{
			p=p+4*(x-y)+10;
			y--;
		}
	}
	cout<<p<<"\t"<<x<<"\t"<<y<<"\t"<<xc+x<<"\t"<<yc+y<<"\n";
	
}

int main(){
	int a , b , r;
	cout<<"Enter the center of circle : ";
	cin>>a>>b;
	cout<<"Enter the radius of circle : ";
	cin>>r;
	brescircle(a,b,r);
	
	
}
