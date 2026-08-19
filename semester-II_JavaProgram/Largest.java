import java.util.Scanner;
class Largest
{
    public static void main (String[] args)
    {
        int n,i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many numbers: ");
          n = sc.nextInt();
        
System.out.print("Enter number 1: ");
        int largest = sc.nextInt();
         for ( i = 2; i <= n; i++) {
            System.out.print("Enter number " + i + ": ");
            int num = sc.nextInt();

            if (num > largest) {
                largest = num;
            }
        }

        // Display result
        System.out.println("Largest number is: " + largest);

        sc.close();
        }


}