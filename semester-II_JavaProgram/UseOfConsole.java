import java.io.*;
class UseOfConsole
{
    public static void main(String[] args){
        Console obj = System.console();
        String str; char ch[];
        System.out.print("Enter Username: ");
        str = obj.readLine();
        System.out.print("Enter Password: ");
        ch = obj.readPassword();
        System.out.println("Username: "+str);
        System.out.println("Password: "+ch);
    }
}