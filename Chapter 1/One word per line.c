#include <stdio.h> 
int main(){
	double c;
	while((c = getchar()) != EOF){
		putchar(c);
		if( c == ' ')
		putchar('\n');
	}
}
