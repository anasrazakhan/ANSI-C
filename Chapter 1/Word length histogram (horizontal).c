#include <stdio.h> 
int main(){
	double c;
	int length[10], i=0;
	for(int k = 0; k < 10; k++)
	length[k] = 0;
	while((c = getchar()) != EOF){
	//	i = 0;
		if(c != ' ' && c != '\n' && c != 9) //9 is the ASCII code for tab
		{
			i = i + 1;
			length[0] = i;
			printf("%d ",length[0]);
		}
		else{
		printf("\n");
		i = 0;
		}

	}
	}

