import java.util.Scanner;
class Relational
{
    public static void main(String[] args){
       int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number: ");
        a = sc.nextInt();
System.out.println("Enter the second number: ");
        b = sc.nextInt();
        
        System.out.println("a>b is True / False: "+(a>b));
        System.out.println("True / False: "+(a<b));
        System.out.println("True / False: "+(a==b));
        System.out.println("True / False: "+(a!=b));
        System.out.println("True / False: "+(a>=b));
 
        System.out.println("Logical OR ");
        System.out.println((10>25) || (10>8));
        System.out.println((10>20) || (10>15));
    }
}