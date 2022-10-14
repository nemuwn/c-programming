#include <stdio.h>
#include <math.h>
struct vector {
	float i,j,k;
};
float dotProduct(vector a, vector b)
{
	return a.i*b.i+a.j*b.j+a.k*b.k;
}
float vec_scalar_multi(vector a,float t){
	return a.i*t+a.j*t+a.k*t;
}
int vec_scalar_multi(vector a, int t){
	return a.i*t+a.j*t+a.k*t;
}
int len(vector a){
	return sqrt( a.i*a.i+a.j*a.j+a.k*a.k);
}
int main(){
	vector A,B;
	printf("vector oo oruulna uu:");
	scanf("%f%f%f", &A.i,&A.j,&A.k);
	scanf("%f%f%f", &B.i,&B.j,&B.k);
	float n;
	int m;
	scanf("%f%d",n,m);
	printf("%f\n",dotProduct(A,B));
	printf("%f\n",vec_scalar_multi(A,n));
	printf("%d\n",vec_scalar_multi(A,m));
	printf("%f\n",len(A));	
}

