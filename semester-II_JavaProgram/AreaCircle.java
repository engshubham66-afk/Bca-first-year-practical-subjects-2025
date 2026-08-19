// Area of cirle
import java.util.Scanner;
import java.lang.Math;
class AreaCircle
{
    public static void main(String[] args
){
        double r,num;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter radius of circle: ");
r = sc.nextDouble();
double a = Math.PI*r*r;

System.out.println("Area of circle " + a);

System.out.println("Enter num number: ");
num = sc.nextDouble();

double sqrt =Math.sqrt(num);
System.out.println("Square root of  " +num+ " is: "+sqrt);
    }
}