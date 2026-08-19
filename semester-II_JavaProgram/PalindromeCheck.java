import java.util.Scanner;
class PalindromeCheck{
    public static void main(String args[]){
        Scanner r = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = r.nextLine();
        String original = str;
        String reverse = ""; // initialize as empty space

        // Reverse String
        for(int i=str.length() - 1; i >= 0; i--){
            reverse = reverse + str.charAt(i);
        }

        // Check Palindrome
        if(original.equalsIgnoreCase(reverse)){
            System.out.println("It is a palindrome.");
        }
        else{
            System.out.println("It is not a palindrome.");
        }
    }
}