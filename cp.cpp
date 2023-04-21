#include<iostream>
using namespace std;
	
int main(){
	
	int a[]={34,-50,42,14,-5,86};
	
	int maxsum;
	int minsum;
	maxsum=0;
	minsum=0;
	for(int i=0;i<6;i++){
		if(a[i]<0){
			minsum=minsum+a[i];
			i++;
		}
			maxsum=maxsum+a[i];
		
	}
	
//	the maximun sum  of no of array is the sum of the positive numbers in the array
//  the minimun sum of no of array is the sum of negative numbers in the array 

	cout<<"MaxSum : "<<maxsum<<"\n";
	cout<<"MinSum : "<<minsum;
}
