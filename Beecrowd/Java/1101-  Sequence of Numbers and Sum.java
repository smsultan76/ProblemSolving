import java.util.Scanner;
public class Main{
    static int m,n;
    static void swap(){
        int temp = m;
        m = n;
        n = temp;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
            m=sc.nextInt();
            n=sc.nextInt();
            if(n<=0||m<=0)break;
            if(n<m){
                swap();
            }
            int s=0;
            for(int i=m;i<=n;i++) {
                System.out.print(i+" ");
                s=s+i;
            } System.out.println("Sum="+s);
        }
    }
}
