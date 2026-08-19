/* Increment / Decrement Example....*/
class PrePost
{
    public static void main(String [] args){
        int a = 10;
         System.out.println( a);
        System.out.println(" PrePost Increment...");
            System.out.println(a++ );
              System.out.println( ++a);

         System.out.println(" PrePost Decrement...");
            System.out.println(a-- );
            System.out.println(--a );
    }
}