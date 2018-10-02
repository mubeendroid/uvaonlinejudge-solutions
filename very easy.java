import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a,b;
        BigInteger sum,A;
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
            a=sc.nextInt();
            b=sc.nextInt();
            sum=new BigInteger("0");
            A=BigInteger.valueOf(b);
            for(int i=1;i<=a;i++)
               sum = sum.add(BigInteger.valueOf(i).multiply(A.pow(i)));
            System.out.println(sum);
        }
    }
}