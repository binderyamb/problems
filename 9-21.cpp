#include <stdio.h>

//struct Point{
//	int x;
//	int y;
//};

int main(){
//	Tereg1 -> x1, x2
//	Tereg2 -> y1, y2

	int x1, x2, y1, y2;
	
	scanf("%d %d %d %d", &x1, &y1,&x2,&y2);
	
	if(x1 == x2 || y1 == y2){
		printf("YES");
	}else {
		printf("NO");
	}
}