import java.util.*;
public class sample{
    public static void average(int a , int b , int c){
        int avg = (a + b + c) / 3;
        System.out.println("The average is " + avg);
    }
    public static void sumOfOdd(int n ){
        int sum  =0;
        for(int i = 1; i <= n ; i += 2){
            sum += i;
        }
        System.out.println("The sum of odd numbers till n is " + sum);
    }
    public static void circumferenceOfCircle(int r){
        System.out.println("The circumference of circle is " + (2*3.14*r));
    }
    public static void eligibleForVoting(int age){
        if(age >= 18){
            System.out.println("You are eligible for the voting");
        }
        else{
            System.out.println("You are not eligibe for the voting");
        }
    }
    public static void infiniteLoop(){
        do{
            System.out.println("Prathmesh");
        }while(true);
    }
    public static void power(int x , int n){
        int result = 1;
        for(int i = 1; i <= n ; i++){
            result *= x;
        }
        System.out.println(result);
    }
    public static void main(String args[]){
        power(5, 3);
    }
}