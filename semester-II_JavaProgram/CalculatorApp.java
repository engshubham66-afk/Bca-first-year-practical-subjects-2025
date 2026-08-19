import java.util.Scanner;
class A
{
    int a, b, result;
    Scanner sc = new Scanner(System.in);
     void add(){
System.out.print("Enter the first number: ");
a = sc.nextInt();
System.out.print("Enter the second number: ");
b = sc.nextInt();
result = a + b;
System.out.println("Addition of two numbers is "+result);
    }

    void sub(){
        System.out.print("Enter the first number: ");
a = sc.nextInt();
System.out.print("Enter the second number: ");
b = sc.nextInt();
result = a - b;
        System.out.println("Substraction of two numbers is "+result);
    }

    void mul(){
        System.out.print("Enter the first number: ");
a = sc.nextInt();
System.out.print("Enter the second number: ");
b = sc.nextInt();
result = a * b;
        System.out.println("Multification of two numbers is "+result);
    }

    void div(){
        System.out.print("Enter the first number: ");
a = sc.nextInt();
System.out.print("Enter the second number: ");
b = sc.nextInt();
result = a / b;
System.out.println("Division of two numbers is "+result);
    }

    void rem(){
        System.out.print("Enter the first number: ");
a = sc.nextInt();
System.out.print("Enter the second number: ");
b = sc.nextInt();
result = a % b;
System.out.println("Remainder is "+result);
    }
}
class CalculatorApp
{
    public static void main(String[] args){
        int choice;
        Scanner sc = new Scanner(System.in);
        A r = new A();
        do{
            System.out.println("\n------------------Menu-----------------------------\n");
            System.out.println("1. Addition");
            System.out.println("2. Substraction");
            System.out.println("3. Multification");
            System.out.println("4. Division");
            System.out.println("5. Remainder");
            System.out.println("0. Exit");

            System.out.println("Enter your choice: ");
            choice = sc.nextInt();
        
        switch(choice){
            case 1: r.add();
            break;

            case 2: r.sub();
            break;

            case 3: r.mul();
            break;

            case 4: r.div();
            break;

            case 5: r.rem();
            break;

            case 0 : System.out.println("End of program") ;
            break;

            default : System.out.println("Invalid choice");
        }
        
    } while(choice != 0);
}
}