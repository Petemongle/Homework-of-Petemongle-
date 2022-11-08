#include<stdio.h>

int main(){
	long ulsum = 0;
	long ulcount = 5;
	while(ulcount >= 0) {
		ulsum += ulcount;
		ulcount--;
	}
	printf("%ld\n",ulsum);
	return 0;
} 
