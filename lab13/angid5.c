#include<stdio.h>
	struct triangle{
		int a,b,c;
	};
	void read (struct triangle *p){
		printf("a,b,c utgiig oruul:");
		scanf("%d%d%d",&p->a,&p->b,&p->c);
		
	}
	int main (){
		struct triangle g;
		read(&g);
		printf("%d, %d, %d", g.a, g.b, g.c);
		return 0;
	}
