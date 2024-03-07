import java.util.Scanner;
public class lista1{
    public static void main(String[] agrs){
        System.out.println("escolha a atv");
        Scanner batata = new Scanner(System.in);
        int escolha = batata.nextInt();
        switch (escolha) {
            case 1:
                atv1();
                break;
            case 2:
                atv2();
                break;
            case 3:
            atv3();
                break;
            case 4:
            atv4();
                break;
        
            default:
                break;
        }
        batata.close();
    }
    private static void atv1(){
        System.out.println("essa atv serve para calcular a area de um retangulo");
        Scanner atv1scanner = new Scanner(System.in);
        System.out.println("me de a base");
        int number1 = atv1scanner.nextInt();
        System.out.println("agr me de a altura");
        int number2 = atv1scanner.nextInt();
        int resu = number1 * number2;
        System.out.println("o resultado é" + " " + resu);
        atv1scanner.close();
    }    
    private static void atv2(){
    System.out.println("comversor de dinheiro, me de o valor em real q ele sera comvertido em dolar, euro, peso argentino");
    Scanner atv2Scanner = new Scanner(System.in);
    int real = atv2Scanner.nextInt();
    double dolar = 5.17, euro = 6.14, peso = 0.05;
    double rd = real * dolar;
    double re = real * euro;
    double rp = real * peso;
    System.out.println("dolar" + " = " + rd + " " + "euro" + " = " + re + " " + "peso" + " = " + rp);
    atv2Scanner.close();
    }
    private static void atv3(){
        System.out.println("atv serve para vc escolher 2 numeros e eu irei falar qual é o meno e qual é o maior");
        Scanner atv3Scanner = new Scanner(System.in);
        System.out.println("escolha o primeiro numero");
        int number1 = atv3Scanner.nextInt();
        System.out.println("escolha o segundo numero");
        int number2 = atv3Scanner.nextInt();
        if (number1 > number2) {
            System.out.println("o valor " + " " + number1 + " " + "é maior do q o valor" + " " + number2);
        }
        else
        System.out.println("o valor " + " " + number2 + " " + "é maior do q o valor" + " " + number1);
        atv3Scanner.close();
    }
    private static void atv4(){
        System.out.println("esta atv serve para cada idade de uma pessoa vai ter uma frase diferente");
        Scanner atv4Scanner = new Scanner(System.in);
        System.out.println("qual é a sua idade?");
        int idade = atv4Scanner.nextInt();
        if (idade <= 13 ) {
            System.out.println("criança");
        }
        else if (idade > 13 && idade <= 18) {
            System.out.println("adolecente");
        }
        else if (idade > 18 && idade <= 60) {
            System.out.println("adulto");
        }
        else if (idade > 60){
            System.out.println("idoso");
        }
    } 
}

