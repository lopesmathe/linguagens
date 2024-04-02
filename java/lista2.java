import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.net.URL;

public class lista2 {
    public static void main(String[] args) {
        System.out.println("Escolha qual atividade você quer:");
        Scanner scanEscolha = new Scanner(System.in);
        int escolha = scanEscolha.nextInt();
        switch (escolha) {
            case 1:
                runtxt();
                break;
            default:
                System.out.println("Opção inválida.");
        }
    }

    public static void runtxt(){
        try{
            File txt = new File("C:\\Users\\Matheus\\Desktop\\atv der\\a.txt");
            File a = txt;
            Scanner scanner = new Scanner(a);
            while (scanner.hasNextLine()) {
                System.out.println(scanner.nextLine());
            }
        }

        catch (FileNotFoundException e) {
            System.out.println("no");
        }

    }

    public static void runtxt2(){
        try{
            URL txt = new URL("C:\\Users\\Matheus\\Desktop\\atv der\\a.txt");
            Scanner scanner = new Scanner(txt.openStream());
            while (scanner.hasNextLine()) {
                System.out.println(scanner.nextLine());
            }
        }

        catch (FileNotFoundException e) {
            System.out.println("no");
        }

    }
    
}
