class Solution {
     public static boolean isVowels(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' ||
               ch == 'O' || ch == 'U';
    }
    String modify(String s) {
       char ch[]=s.toCharArray();
       int st=0,end=ch.length-1;
       while(st<=end){
           if(isVowels(ch[st]) && isVowels(ch[end])){
               char temp=ch[st];
               ch[st]=ch[end];
               ch[end]=temp;
               st++;
               end--;
           }
           else if(!isVowels(ch[st]))
           {
               st++;
           }else{
               end--;
           }
       }
       String result=new String(ch);
       return result;

    }
}

