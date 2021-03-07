#include <stdio.h>

int main(){
	
	int a, b, c;
	
	scanf("%i %i %i",&a, &b, &c);
	
	if(a != b && b != c && c!= a)
	{
		printf("inconclusivo");
		if(a==1 && b==1 && b==1 && c==1 && c==1 && a==1)
		{	
			printf("aprovado com A");
		}
			
		if(a==2 && b==2 && b==2 && c==2 && c==2 && a==2)
		{	
			printf("aprovado com B");
		}
		
		if(a==3 && b==3 && b==3 && c==3 && c==3 && a==3)
		{
			printf("aprovado com C");
		}
	}else{
		printf("reprovado");
	}
	return 0;
}