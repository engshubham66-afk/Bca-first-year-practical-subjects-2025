
class SquareNumberCommandLine  {
    public static void main(String[] args) {
        // Check if an argument is provided
        if (args.length == 0) {
            System.out.println("Please provide a number.");
            return;
        }


        // Convert command line argument to integer
        int num = Integer.parseInt(args[0]);

        // Calculate and print square
        int square = num * num;
        System.out.println("Square of " + num + " is: " + square);
    }
}