public class main {
    public static void main(String[] args) {
        Integer a = null 
        Integer b = 2;
        Integer result = 0;
        try {
            Integer result = a * b;
        } catch (NullPointerException e) {
            System.out.println("Vi vay ko in ra voi");
        }


        System.out.println(result);
        System.out.println("Siuuuu");
    }
    
}
