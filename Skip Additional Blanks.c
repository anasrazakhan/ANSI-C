#include <stdio.h> 
int main(){
	double c, d = 0;
	//long wc = 0;
	while((c = getchar()) != EOF){
		if(c == 32 && d != 1){
			c = ' ';
			d = 1;
			putchar(c);
			}
		if(c != 32){
			d = 0;
			}
		if(d==0)
		putchar(c);
	}
}
