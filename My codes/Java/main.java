import java.util.*;

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter you age");

        int age = sc.nextInt();
        
        if (age >= 18){
            System.out.println("You are eligible to vote");
        }

        else{
        System.out.println("You are not eligible to vote");
        }


        sc.close();
    }
}