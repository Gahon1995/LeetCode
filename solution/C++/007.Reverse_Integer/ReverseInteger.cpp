#include<iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
    	int result = 0;
    	while(x!=0){
    	        if((result>0?result:result*(-1)) > (INT_MAX / 10)) return 0;
    	        result=result*10+x%10;
    	        x=x/10;
    	    }
    	return result;
    }
};
  

int main(){
	Solution s;
	printf("%d\n",s.reverse(123725) );
}
