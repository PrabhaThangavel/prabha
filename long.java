import.java.io.*;
import.java.util.*;
public String longCommonPrefix(String[] strs) {
    String longPrefix = "";
    if(strs.length>0){
        longPrefix = strs[0];
    }
    for(int i=1; i<strs.length; i++){
        String analyzing = strs[i];
        int j=0;
        for(; j<Math.min(longestPrefix.length(), strs[i].length()); j++){
            if(longPrefix.charAt(j) != analyzing.charAt(j)){
                break;
            }
        }
        longPrefix = strs[i].substring(0, j);
    }
    return longPrefix;
}
