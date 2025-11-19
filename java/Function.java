import java.util.*;
public class Function {
    public static void printMyName(String name){
        System.out.println(name);
    }
    public static int sumOfTwoNum(int a , int b){
        return a + b;
    }
    public static int factorial(int n ){
        int facto = 1;
        for(int i = 1 ; i <=n ; i++){
            facto *= i;
        }
        return facto;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        System.out.println(factorial(n));        
    }    
}
