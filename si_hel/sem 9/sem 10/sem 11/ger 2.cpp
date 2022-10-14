#include <stdio.h>
#include <math.h>
//2tsegiin hoorondoh zaig oloh
struct Point{
	int x ,y;
};
 double distance(Point a, Point b);
int main(){
	struct Point a , b;
	int i, p, x, y;
	float c;
	printf("1deh gurwaljnii a ,b , c tal:\n");
	scanf("%d %d %d", &a.x,  &a.y);
	printf("2 doh gurwaljnii a ,b , c tal:\n");
	scanf("%d %d %d", &b.x,  &b.y);
	c = distance(a , b);
	printf("%lf", c);
	return 0;
   }
double distance(Point a, Point b){
	double d;
	d = sqrt (pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
	return d;
}
