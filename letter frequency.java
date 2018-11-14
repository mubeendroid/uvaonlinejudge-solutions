import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String temp=sc.next();
        for(int i=0;i<n;i++){
            String str=sc.nextLine();
            if(i==0 && str.equals("")){
                str=temp;
            }
            str=str.toLowerCase();
            Map<Character,Integer> mp=new HashMap<>();
            String result="";
            int maximum=Integer.MIN_VALUE;
            for(int j=0;j<str.length();j++){
                char ch=str.charAt(j);
                if(ch>='a' && ch<='z'){
                    try{
                        int a=mp.get(ch)+1;
                        mp.put(ch, a);
                    }catch(Exception e){
                        mp.put(ch, 1);
                    }
                    if(mp.get(ch)>maximum){
                        maximum=mp.get(ch);
                    }
                }
            }
            for(int j=0;j<str.length();j++){
                char ch=str.charAt(j);
                if(ch>='a' && ch<='z'){
                    if(mp.get(ch)==maximum){
                        result+=ch;
                    }
                }
            }
            char[] chars = result.toCharArray();
            Set<Character> charSet = new LinkedHashSet<Character>();
            for (char c : chars) {
                charSet.add(c);
            }
            StringBuilder sb = new StringBuilder();
            for (Character character : charSet) {
                sb.append(character);
            }
            char[] chars2=sb.toString().toCharArray();
            Arrays.sort(chars2);
            System.out.println(chars2);
        }
    }
}
