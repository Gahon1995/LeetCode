package com.gahon.medium._003;

import java.util.HashMap;

public class LengthOfLongestSubstring {
    public static int lengthOfLongestSubstring(String s) {
        int len = 0,j=0;
        HashMap<Character,Integer> map = new HashMap<>();
        for(int i=0;i<s.length();++i){
            if(map.containsKey(s.charAt(i))){
                j=Math.max(map.get(s.charAt(i)),j);
            }
            len = Math.max(len,i-j+1);
            map.put(s.charAt(i),i+1);
        }
        return len;
    }

    public static void main(String[] args) {
        String s= "ohomm";
        System.out.println(lengthOfLongestSubstring(s));
    }
}
