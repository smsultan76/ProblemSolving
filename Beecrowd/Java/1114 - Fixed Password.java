import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X;
    while (true)
    {
        X=sc.nextInt();
        if(X==2002){
            System.out.print("Acesso Permitido\n");
            break;
        }
        else System.out.printf("Senha Invalida\n");
    }
    }
}
