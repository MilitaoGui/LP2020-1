#include <stdio.h>

int main(){
	
	int a, b;
	
	scanf("%d %d",&a, &b);
	
	printf("%d %d\n",a ,b);
	if(a<b){
		if ((a-b) == -1 ){
			printf("%d %d %d %d ",a-1,a,b,b+1);
	
		}
		if((a-b) == -2){
			printf("%d %d %d %d %d ",a-1,a,a+1,b,b+1);
		}
	
		if((a-b) == -3){
			printf("%d %d %d %d %d %d ",a-1,a,a+1,b-1,b,b+1);
		}
	}
	if(a>b){
	
		if(a-b==0){
			printf("%d %d %d",a-1,a,a+1);
			
		}
		if((a-b)==1){
			printf("%d %d %d %d ",b-1,b,a,a+1);	
		}
		if((a-b)==2){
			printf("%d %d %d %d %d ",b-1,b,b+1,a,a+1);
		}
		if((a-b) == 3){
			printf("%d %d %d %d %d %d ",b-1,b,b+1,a-1,a,a+1);
		}
	}
	if((a-b)>=4 || (a-b)<=-4){
			
		printf("%d %d %d %d %d %d",a-1,a,a+1,b-1,b,b+1);
	}
	return 0;
}