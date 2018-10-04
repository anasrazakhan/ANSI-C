#include <stdio.h> 
int main(){
	double c;
	int length[10], i;
	for(int k = 0; k < 10; k++)
	length[k] = 0;
	while((c = getchar()) != EOF){
		i = 0;
		if(c != ' ' && c != '\n' && c != 9) //9 is the ASCII code for tab
		{
			i = i + 1;
			for(int n = 0; n < i; n++){
			length[n] = n;
			printf("%d ",length[n]);
		}
		}
		else
			printf("\n");
	}
}
