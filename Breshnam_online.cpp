#include <stdio.h>
#include <stdlib.h>
int flag=0;
void breshnamline(int xa, int ya, int xb, int yb)				
{
    int dx, dy;
    dx = xb - xa;			
    dy = yb - ya;			

    int c, r, f;

    int d = 2 * abs(dy) - abs(dx);					




        if (dx > 0)												
        {
            c = xa;				
            r = ya;				
            f = xb;				
        }
        else
        {
            c = xb;
            r = yb;
            f = xa;
        }
        if(flag==0){
       		printf("%d\t%d\t%d\n", c, r, d);
    	}
    	else{
       		printf("%d\t%d\t%d\n", r, c, d);
		}
        while (f > c)
        {
            if (d < 0)
            {
                c = c + 1;
                d = d + (2 * abs(dy));
				if(flag==0){
	       			printf("%d\t%d\t%d\n", c, r, d);
	    		}
	    		else{
	       			printf("%d\t%d\t%d\n", r, c, d);
				}
			}
            else
            {
                c = c + 1;
                if((dy>0&&dx>0)||dy<0&&dx<0){
                	r = r + 1;
				}
                else{
                	r = r - 1;
				}
                d = d + (2 * abs(dy) - 2 * abs(dx));
                if(flag==0){
       				printf("%d\t%d\t%d\n", c, r, d);
    			}
    			else{
       				printf("%d\t%d\t%d\n", r, c, d);
				}
            }
        }
//    }
}

int main()
{
    int xa, ya, xb, yb;

    printf("\nEnter the first point : ");
    scanf("%d%d", &xa, &ya);			

    printf("\nEnter the second point : ");
	scanf("%d%d", &xb, &yb);			
	
	int dx,dy;
	dx=xb-xa;							
	dy=yb-ya;							
	
	if(abs(dx)>abs(dy)){
		breshnamline(xa, ya, xb, yb);		
	}
	else{
		flag=1;
		breshnamline(ya,xa,yb,xb);			
	}

    

    return 0;
}
