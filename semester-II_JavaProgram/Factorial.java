import java.util.Scanner;
class Factorial{
    public static void main(String[] args){
        Scanner r = new Scanner(System.in);
        System.out.println("Enter a number to find factorial: ");
        int n = r.nextInt();

        int fact = 1; 
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        System.out.println("Factorial of " +n+ " = "+fact);
    }
}