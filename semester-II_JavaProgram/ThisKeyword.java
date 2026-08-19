// This Keyword
class ThisKeyword
{
    void show()
    {
      System.out.println(this);
    }
     public static void main(String[] args)
        {
            ThisKeyword r=new ThisKeyword();
            System.out.println(r);
            r.show();
        }
}