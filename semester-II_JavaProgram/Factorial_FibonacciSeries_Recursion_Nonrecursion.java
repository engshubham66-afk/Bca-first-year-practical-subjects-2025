import java.util.Scanner;
class Factorial_FibonacciSeries_Recursion{
        static int fib(int m){
            if(m <= 1)
                return m;
            else 
                return fib(m-1) + fib(m-2);

            
        }
        
                static int fact(int n){
                    if(n == 1 || n == 0)
                    return 1;
                else
                    return n*fact(n-1);
                }
            }
class Factorial_FibonacciSeries_NonRecursion 
{
    static void fibonacci(int n){
    int a = 0, b = 1, c;
   System.out.print("Fibonacci series: ");
    for(int i = 1; i <= n; i++ ){
        System.out.print(a+" ");
         c = a + b;
        a = b;
        b = c;
       
    } 
    System.out.println();
    }

    static int factorial(int n){
        int fact = 1;
        for(int i = 1; i <= n; i++){
            fact = fact*i;
        }
        return fact;
    }
}
class Factorial_FibonacciSeries_Recursion_NonRecursion {
    public static void main(String[] args){

        // Factorial_FibonacciSeries_Recursion
 int n,m;
 System.out.println("-------------Using Recurion------------");
                System.out.println("Enter any number to find Factorial: ");
                Scanner r = new Scanner(System.in);
                n = r.nextInt();
                System.out.println("Enter the number of term for fibonacci series: ");
                m = r.nextInt();
                System.out.print("Fibonacci series is: ");
               for(int i = 0; i< m; i++){
                System.out.print(Factorial_FibonacciSeries_Recursion.fib(i)+" ");
            }
            System.out.println();
                int result = Factorial_FibonacciSeries_Recursion.fact(n);

                System.out.println("Factorial of  " +n+ " is: " +result);


        // Factorial_FibonacciSeries_NonRecursion
   int term;
   System.out.println("-------------Using NonRecurion------------");
    System.out.println("Enter the number: ");
    Scanner sc = new Scanner(System.in);
    term = sc.nextInt();
    Factorial_FibonacciSeries_NonRecursion.fibonacci(term);
    System.out.println("Factorial of " +term+ " = "+Factorial_FibonacciSeries_NonRecursion.factorial(term));
    }
}