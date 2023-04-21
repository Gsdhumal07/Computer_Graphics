#include <stdio.h>
#include <stdlib.h>
void bresnham(int x1,int y1,int x2,int y2){
	int dy=y2-y1;
	int dx=x2-x1;
    int d=2*abs(dy)-abs(dx);
    if(abs(dx)>abs(dy)){
    		int x,y,f;
    		if(dx>0){
    			x=x1;
    			y=y1;
    			f=x2;
			}
			else{
				x=x2;
				y=y2;
				f=x1;
			}
    		printf("\n%d\t%d\t%d\n",x,y,d);
		while(f>x){
			if(d<0){
				x=x+1;
				d=d+2*dy;
			}
			else{
				x=x+1;
				if((dy>0&&dx>0)||(dy<0&&dx<0)){
				
				y=y+1;}
				else{
					y=y-1;
				}
				d=d+(2*abs(dy)-2*abs(dx));
			}
			printf("%d\t%d\t%d\n",x,y,d);
			
		}
    	
	}
    
}



int main(){
	int x1,y1,x2,y2;
	printf("enter the value of x1 ,y1:");
	scanf("%d%d",&x1,&y1);
	printf("enter the value of x2 ,y2:");
	scanf("%d%d",&x2,&y2);
	bresnham(x1,y1,x2,y2);
	}
