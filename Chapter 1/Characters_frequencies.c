#include <stdio.h> 
int main(){
double c;
int x = 0;
int freq[255];
for(int i = 0; i < 256; i++)
freq[i] = 0;
while((c = getchar()) != EOF){
		x = c ;
		freq[x] = freq[x] + 1;
	}
	for(int i = 0; i <= 255; i++){
		putchar(i);
		printf("  ");
		printf("%d",freq[i]);
		for(int k = 0; k < freq[i]; k++)
		printf("-");
		printf("\n");
	}
}

