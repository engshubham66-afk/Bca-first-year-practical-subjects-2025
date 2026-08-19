import java.util.Scanner;
class MatrixOperation{
    public static void main(String[] args){
        int i,j,k,r1,c1,r2,c2;
        int a[][] = new int [10][10];
        int b[][] = new int [10][10];
        int c[][] = new int [10][10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the order of matrix A");
        r1 = sc.nextInt(); c1 = sc.nextInt();
        System.out.println("Enter the elements of matrix A");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
a[i][j] = sc.nextInt();
            }
            
        }
        System.out.println("Matrix A is");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
// Matrix B
 System.out.println("Enter the order of matrix B");
        r2 = sc.nextInt(); c2 = sc.nextInt();
        System.out.println("Enter the elements of matrix B");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
b[i][j] = sc.nextInt();
            }
            
        }
        System.out.println("Matrix B is");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }
// Validation of Matrix Multification
if(c1 != r2){
    System.out.println("Invalid order! \n Please enter number of rows of the Matrix A = number of columns of the Matrix B");
}
// Matrix A*B
int mul[][] = new int [10][10];

for(i=0; i<r1; i++){
    for(j=0; j<c2; j++){
        mul[i][j] = 0;
        for(k=0; k<c1; k++)
        mul[i][j] += a[i][k] * b[k][j];
    }
}
System.out.println("Result of A*B");
for(i=0; i<r1; i++){
    for(j=0; j<c2; j++){
        System.out.print(mul[i][j]+" ");
    }
    System.out.println();
}


    }
}