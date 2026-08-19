// Multilevel Inheritance
import java.util.Scanner;
class A 
{
    int a,b,c;
    Scanner scanner = new Scanner(System.in);
    void add ()
    {
         
        System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
                c=a+b;
        System.out.println("Sum of two numbers: "+c);
    }
     void sub ()
    {
         System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
                c=a-b;
        System.out.println("Substraction of two numbers: "+c);
    }
}
class B extends A
{
     void mul ()
    {
        System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
        c=a*b;
        System.out.println("Multification of two numbers: "+c);
    }
     void div ()
    {
         System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
        c=a/b;
        System.out.println("Division of two numbers: "+c);
    }
}
class C extends B 
{
     void rem ()
    {
         System.out.print("Enter first number: ");
         a = scanner.nextInt();
        System.out.print("Enter second number: ");
         b = scanner.nextInt();
        c=a%b;
        System.out.println("Remainder of two numbers: "+c);
    }
}
class MultilevelInheritance
{
    public static void main (String[] args){
        Scanner scanner = new Scanner(System.in);
        C r=new C();
       
        int choice;
        do{
            System.out.println("\n-------------------------------MENU-------------------------------------------------- ");
            System.out.println("1. Addition ");
            System.out.println(" 2. Sustraction");
            System.out.println(" 3. Multification");
            System.out.println(" 4. Division");
            System.out.println(" 5. Remainder");
            System.out.println(" 0.Exit");
            System.out.println(" Enter your choice: ");
            choice = scanner.nextInt();
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
                case 0: System.out.println(" Exiting program.");
                break;
                default: System.out.println("Invalid choice! \n Please select 1,2,3,4, or 5. ");
            }
        }
        while(choice != 0);
    }
}