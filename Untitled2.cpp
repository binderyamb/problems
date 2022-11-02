#include <stdio.h>

//int main(){
//	
//	for(int i = 1; i <= 1000; i++){
//		int n = 0;
//		
//		for(int j = 1; j < i; j++){
//			if(i % j == 0 ){
//			n += j;
//			}
//		}
//		
//		if(n == i){
//		printf("%d " , i );
//		}
//	}
//}

//bool isEven(int n){
//	if( n % 2 == 0){
//		return true;
//	}else {
//		return false;
//	}
//}
//
//int main() {
//	for(int i = 10; i < 100; i++){
////		if(i % 2 == 0) printf(" - %d - ", i);
//		if(isEven(i))printf("%d ", i)
//	}
//	
//	for(int i = 10; i < 100; i++){
//		if((i % 10 + i / 10) % 2 == 0){
//			printf( "%d", i);
//		}
//	}
//}

int isPrime(int m){
	
	if( m == 1) return 0;
	
	if( m == 2) return 1;
	
	if( m % 2 == 0) return 0;
	
//	for( int i = 2; i <= n; i++){
//		if(n % i == 0){
//			return 0;
//		}else{
//			return 1;
//		}
//	}

	int k = 3;
	
	while(m >= k * k){
		if(m%k == 0) return 0;
		
		k += 3;
	}
	
	return 1;
}

int main() {
	int n;
	scanf("%d", n);
	for(int m = 1; n - m <= n + m; m++){
		isPrime(n);
		int counter++;
		
		if(n - m > m - n){
			printf("%d ", n);
		} else printf("%d", m);
	}
}