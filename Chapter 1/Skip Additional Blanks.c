#include <stdio.h> 
int main(){
	double c, d = 0;
	//long wc = 0;
	while((c = getchar()) != EOF){
		if(c == 9){
			putchar(92);
			putchar(116);
		}
		else if(c == 92){
			putchar(92);
			putchar(92);
			}
		else if(c == 8){
			putchar(92);
			//putchar('b');
			}
		else
			putchar(c);
	}
}
