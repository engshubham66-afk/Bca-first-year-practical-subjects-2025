import java.util.*;
class SortArrays
{
    public static void main(String args[]){
        Scanner r = new Scanner(System.in);
        System.out.println("Enter the number of names: ");
        int n = r.nextInt();
        r.nextLine(); // clear buffer
        String names[] = new String [n];
        System.out.println("Enter the name: ");
        for(int i=0; i<n; i++){
             names [i] = r.nextLine();
             }
             Arrays.sort(names); // sorting 
             System.out.println("Names in ascending order: ");
             for(String name : names){
                System.out.println(name);
             }
              
    }
}