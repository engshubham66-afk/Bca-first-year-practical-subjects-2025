// Java Ecapsulation
class A
{
    private int value; // data hiding
   public void setvalue(int x) // abstruction
   {
value = x;
   }
   public int getvalue()
   {
    return value;
   }
}
class Ecapsulation
{    
    public static void main(String[] ags){
A r = new A();
    r.setvalue (100);
    System.out.print(r.getvalue());
    }
}