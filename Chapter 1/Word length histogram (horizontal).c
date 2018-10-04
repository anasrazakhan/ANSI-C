#include <stdio.h> 
int main(){
	double c;
	int nalph[26], i=0, wlength[1000], wcount = 0, lcount = 0, frequency[20], x = 0;
	for(int k = 0; k < 1000; k++)
	wlength[k] = 0;
	for(int k = 0; k < 20; k++)
	frequency[k] = 0;
	for(int k = 0; k < 26; k++)
	nalph[k] = 0;
	while((c = getchar()) != EOF){
		if( c == ' ' || c == '\n' || c == '\t'){
			wcount++;
			wlength[wcount] = lcount;
			lcount = 0;
			}
		else{
			lcount++;
			} 
	}
	printf("\nWord count =");
	printf(" %d",wcount);
	printf("\nWords lengths (First 20) =");
	for (int i =1; i <= 20 ; i++)
	printf(" %d",wlength[i]);
	printf("\nFrequency =");
	for (int i = 0; i < 1000 ; i++){
	x = wlength[i];
	frequency[x] = frequency[x] + 1;
	}
	for (int i = 1; i <=20; i++)
	printf(" %d",frequency[i]);
	printf("\n\n**********HISTOGRAM**********\n\n");
	for(int i = 1; i <= 20; i++){
		if(i >=1 && i <=9)
		printf("0%d  ",i);
		else
		printf("%d  ",i);
		for(int k = 0; k < frequency[i]; k++)
		printf("-");
		printf("\n");
	}
	
}

