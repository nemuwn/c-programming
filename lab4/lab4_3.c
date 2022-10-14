#include<stdio.h>
#import<math.h>
int main(){
    int x1,x2,x3,y1,y2,y3,z1,z2,z3,z4;
    printf("x1 = ");
    scanf("%d",&x1);
    printf("y1 = ");
    scanf("%d",&y1);
    printf("x2 = ");
    scanf("%d",&x2);
    printf("y2 = ");
    scanf("%d",&y2);
    printf("x3 = ");
    scanf("%d",&x3);
    printf("y3 = ");
    scanf("%d",&y3);
    z1=sqrt((x1*x1+y1*y1));
    z2=sqrt((x2*x2+y2*y2));
    z3=sqrt((x3*x3+y3*y3));
    while(1){
        if(z1>z2 && z1>z3){
            printf("Hamgiin hol : x=%d,y=%d\n", x1,y1);
            break;
    }
        else if(z2>z1 && z2>z3){
            printf("Hamgiin hol : x=%d,y=%d\n", x2,y2);
            break;
    }
        else if(z3>z1 && z3>z2){
            printf("Hamgiin hol : x=%d,y=%d\n", x3,y3);
            break;
    }
}
    while(1){
        if(z1<z2 && z1<z3){
            printf("Hamgiin oir : x=%d,y=%d\n", x1,y1);
            break;
        }
        else if(z2<z1 && z2<z3){
            printf("Hamgiin oir : x=%d,y=%d\n", x2,y2);
            break;
        }
        else if(z3<z1 && z3<z2){
            printf("Hamgiin oir : x=%d,y=%d\n", x3,y1);
            break;
        }
}
    printf("%d,%d,%d",z1,z2,z3);
}
 
 
