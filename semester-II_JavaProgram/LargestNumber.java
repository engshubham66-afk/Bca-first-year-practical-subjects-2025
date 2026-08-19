import java.util.Scanner;

class LargestNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Read number of elements
        System.out.print("Enter how many numbers: ");
        int n = sc.nextInt();

        // Read first number as largest
        System.out.print("Enter number 1: ");
        int largest = sc.nextInt();

        // Read remaining numbers
        for (int i = 2; i <= n; i++) {
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