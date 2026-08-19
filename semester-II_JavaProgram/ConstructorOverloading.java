// Constructor ConstructorOverloading
class ConstructorOverloading
{
    int a; double b; String c;
    private ConstructorOverloading()
    {
      a=12; b=34.56; c="Akash";
    }
  
    ConstructorOverloading(int x){
     a=x;
    }
    ConstructorOverloading(double y, String z){
    b=y;c=z;
    }
public static void  main(String[] args){
ConstructorOverloading r=new ConstructorOverloading();
    ConstructorOverloading r2=new ConstructorOverloading();
    ConstructorOverloading r3=new ConstructorOverloading();
    
      System.out.println(r.a+" "+r.b+" "+r.c);
      
      System.out.println(r2.a);
      
      System.out.println(r3.b+" "+r3.c);   
}
}  
