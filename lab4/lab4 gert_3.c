#include<stdio.h>
int main(){
	int o, huis;
	float m,t,n;
	printf("Ondoroo oruulna uu\n");
	scanf("%d",&o);
	printf("Jingee oruulna uu\n");
	scanf("%f",&m);
	printf("Huisee oruulna uu: er bol 1, em bol 0\n");
	scanf("%d",&huis);
	 if(huis==1){
	 	t=52+((o-150)/2.5)*1.9;
	    printf("Tanii normal jin = %.1f\n",t);
	    if(m>t){
	    	n=m-t;
			printf("Ta %.1fkg-aar targan bn", n);
			}
			else{
				n=t-m;
				printf("Ta %.1fkg-aar turanhai bn", n);
				}
				}
				
				else if (huis==0){
					t=49+((o-150)/2.5)*1.7;
					printf("Tanii normal jin = %.1f\n",t);
					if(m>t){
						n=m-t;
						printf("Ta %.1fkg-aar targan bn", n);
						}
						else{
							n=t-m;
							printf("Ta %.1fkg-aar turanhai bn", n);
							}
						}
			}
