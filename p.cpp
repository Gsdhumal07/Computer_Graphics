#include<iostream>
using namespace std;

int main(){
	int f1=0 ,f2=0,flag;
	int x1 =0;
	int  v1=3;
	int x2 =4;
	int v2=2;	
	
while(1){
	if (x1==x2&&f1==f2) {
		flag=1;
	}

	
		x1=x1+v1;
		f1++;
		x2=x2+v2;
		f2++;
	
	if(flag){
		cout<<"YES";
		break;
	}
	else{
		cout<<"NO";
		break;
	}
	
}


}


