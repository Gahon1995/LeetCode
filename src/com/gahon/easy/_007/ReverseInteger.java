package com.gahon.easy._007;

public class ReverseInteger {
    public static int reverse(int x) {
        int result=0;
        while(x!=0){
            if(Math.abs(result) > Integer.MAX_VALUE / 10) return 0;
            result=result*10+x%10;
            x=x/10;
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(reverse(1534236469));
    }
}
