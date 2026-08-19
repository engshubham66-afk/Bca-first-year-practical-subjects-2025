// Constructor Overloading
class Overloading
{
    int a; double b; String c;
    Overloading()
    {
      a=100; b=89.70; c="Shubham";
      
    }
    Overloading(int x){
     a=x;
    }
    Overloading(double y, String z){
    b=y;c=z;
    }
   
}
class  B
{ public static void  main(String[] args){
Overloading r=new Overloading();
    Overloading r2=new Overloading();
    Overloading r3=new Overloading(23.89," aNKUSH");
    
      System.out.println(r.a+" "+r.b+" "+r.c);
      
      System.out.println(r2.a);
      
      System.out.println(r3.b+" "+r3.c);
}
    
}