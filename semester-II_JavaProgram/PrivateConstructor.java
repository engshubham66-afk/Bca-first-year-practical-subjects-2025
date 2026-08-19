// PrivateConstructor
class PrivateConstructor
{int a; double b; String c;
    private  PrivateConstructor()
    {
        a=10; b=30.90;; c="Shubham";
        System.out.println(a+" "+b+" "+c);
    }
    public static void main(String[] args)
   {
     PrivateConstructor r=new PrivateConstructor();
   }
}
