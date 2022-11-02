#include <stdio.h>
#include <math.h>

//int main() {
//	for(int i = 10; i <= 100; i++){
//		int n = 0;
//		for(int j = 2; j < i; j++){
//			if(i % j == 0){
//				n++;
//				break;
//			}
//		}
//		
//		if(n == 0 ) {
//			printf("%d", i);
//		}
//	}
//}

// perfect number 6= 1+ 2+3

int main(){
	int n, s = 0;
    for(int i = 1; i <= 100; i++){
    	while( n > i){
			if(n % i == 0) 
			s = s + i;
		}
	if( n == s) printf("%d ", i);	
	}
}