import java.util.Scanner;
class ArrayCreation
{
    public static void main(String[] args){
        int size,i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of an array: ");
        size = sc.nextInt();
        int a[] = new int [size];
        System.out.print("Enter the array elements: ");
        for(i=0; i<size; i++){
            a[i] = sc.nextInt();
        }
        System.out.print("The array elements are: ");
        for( i=0; i<size; i++){
            
            System.out.print(a[i]+" ");
        }
        System.out.println();
       System.out.print("The Reverse array elements are: ");
        for( i=size-1; i>=0; i--){
            
            System.out.print(a[i]+" ");
        }
       

    }
}