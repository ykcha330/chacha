#include <stdio.h>

int main(){
	int a=1, i, j;

	while(a!=0){
        
        printf("숫자를 입력하세요(stop하려면 0을 누르세요):");
        scanf("%d",&a);
        
		for(i=1; i<10; i++){
			printf("%d x %d = %d",a,i,a*i);
            printf("\n");
		}
        printf("\n");
	}
        return 0;
}
