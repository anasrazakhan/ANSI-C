#include <stdio.h> 
int main(){
	double c;
	int nalph[26], i=0, wlength[20], wcount = 0, lcount = 0, frequency[20], x = 0;
	for(int k = 0; k < 20; k++)
	wlength[k] = 0;
	for(int k = 0; k < 20; k++)
	frequency[k] = 0;
	for(int k = 0; k < 26; k++)
	nalph[k] = 0;
	while((c = getchar()) != EOF){
		if( c >= 'A' && c <= 'Z' ){
			int d = c - 'A';
			nalph[d] = nalph[d] + 1;
			lcount++;
			}
		else if( c == ' ' || c == '\n' || c == '\t'){
			wcount++;
			wlength[wcount] = lcount;
			lcount = 0;
			}
	}
	printf("\nalphabets = ");
	for (int i = 0; i < 26 ; i++)
		printf(" %d", nalph[i]);
	printf("\n %d",wcount);
	printf("\n f =");
	for (int i =1; i <= 20 ; i++)
	printf(" %d",wlength[i]);
	printf("\n fr =");
	for (int i = 0; i < 20 ; i++){
	x = wlength[i];
	frequency[x] = frequency[x] + 1;
	}
	for (int i = 1; i <=20; i++)
	printf(" %d",frequency[i]);
	printf("\n \n");
	for(int i = 1; i <= 20; i++){
		printf("%d ",i);
		for(int k = 0; k < frequency[i]; k++)
		printf("-");
		printf("\n");
	}
	
}

