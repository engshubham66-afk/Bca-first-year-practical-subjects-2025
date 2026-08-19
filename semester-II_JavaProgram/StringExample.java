class StringExample
{
    public static void main(String[] ags){
        StringBuffer r = new StringBuffer("Java Program") ;
        System.out.println(r.reverse());
        String a = "Shubhamkumar";
        System.out.println(a);
        String b = "Shubham";
        if (a==b){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
         System.out.println(a.compareTo(b) );
         String c = new String("Anil");
        System.out.println(c);
       System.out.println(a.toUpperCase());
         System.out.println(c.toLowerCase());
        System.out.println(b.replace('h','a'));
        String d = "   Akash       Kumar";
        System.out.println(d.trim());
       System.out.println(d.length() );
        System.out.println( d.isEmpty());
        System.out.println(a.concat(d) );
        System.out.println( a.charAt(0)); 
       
        System.out.println( a.equals(b));
        System.out.println( a.indexOf('h')); 
    }
}