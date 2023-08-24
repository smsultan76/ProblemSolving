import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float X,Y;
    while (true)
    {
        X= sc.nextFloat();
        if(X>=0&&X<=10) break;
        else System.out.printf("nota invalida\n");
    }
    while (true)
    {
        Y= sc.nextFloat();
        if(Y>=0&&Y<=10) break;
        else System.out.printf("nota invalida\n");
    }
    System.out.printf("media = %.2f\n",(X+Y)/2);
}
}
