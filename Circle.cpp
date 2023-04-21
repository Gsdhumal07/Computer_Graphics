

#include <stdio.h>


void Breascir(int xc, int yc,int r){
    int d, x, y;
    x=0;
    y=r;
    d=3-2*r;
    do{
    	
        printf("%d\t%d\t%d\t%d\t%d\n",x,y, x+xc,y+yc,d);
        
        if(d<0){
            x=x+1;
            y=r;
            d=d+4*x+6;
           
            
        }
        else{
            x=x+1;
            y=y-1;
            d=d+4*x-4*y+10;
           
        }
    }while(x=y);
}


int main()
{
	int x,y;
	printf("Enter the center co=ordinate: ");
	scanf("%d%d",&x,&y);
    int radius;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    Breascir(x,y,radius);
    
}

/* if xc=10 and yc=20 r=5
x=10
y=25
*/



