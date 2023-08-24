import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X,Y,n,i;
        n= sc.nextInt();
    for(i=0;i<n;i++){
        X= sc.nextInt();
        Y= sc.nextInt();
        if(Y==0) System.out.printf("divisao impossivel\n");
        else System.out.printf("%.1f\n",(float)X/(float)Y);
    }}
    }
