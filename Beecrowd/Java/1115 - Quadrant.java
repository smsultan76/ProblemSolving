import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X,Y;
    while (true)
    {
        X=sc.nextInt();
        Y=sc.nextInt();
        if(X==0||Y==0) break;
        else if (X>0&&Y>0) System.out.printf("primeiro\n");
        else if (X>0&&Y<0) System.out.printf("quarto\n");
        else if (X<0&&Y<0) System.out.printf("terceiro\n");
        else System.out.printf("segundo\n");

    }}
    }
