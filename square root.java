import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            BigInteger a=sc.nextBigInteger();
            System.out.println(sqrt(a));
            if(i!=n-1){
                System.out.println();
            }
        }
    }
    public static BigInteger sqrt(BigInteger x) {
        BigInteger div=BigInteger.ZERO.setBit(x.bitLength()/2);
        BigInteger div2=div;
        while(true){
            BigInteger y=div.add(x.divide(div)).shiftRight(1);
            if(y.equals(div) || y.equals(div2))
                return y;
            div2=div;
            div=y;
        }
    }
}
