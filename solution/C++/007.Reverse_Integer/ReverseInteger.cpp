#include<stdio.h>
int reverse(int x) {
    int result = 0;
    while(x!=0){
            if((result>0?result:result*(-1)) > (2147483647 / 10)) return 0;
            result=result*10+x%10;
            x=x/10;
        }
        return result;
}

int main(){
	printf("%d\n",reverse(1245) );
}
