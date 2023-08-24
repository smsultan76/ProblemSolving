import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X,Y;
        while(true){
            X=sc.nextInt();
            Y=sc.nextInt();
            if(X==Y)break;
            if(X>Y){
                System.out.println("Decrescente");
            }
            else System.out.println("Crescente");
        }
    }
}
