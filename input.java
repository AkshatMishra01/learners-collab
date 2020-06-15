import java.util.Scanner;
public class Main
{
public static void main(String[] inputargs)
{
System.out.println("Input from the user");
//declare the object for the scanner class
Scanner input = new Scanner(System.in);
int data = input.nextInt();
System.out.println("The number entered by the user is " + data);
System.out.println("Enter the string");
String name = input.next();
System.out.println("The entered string is " + name);
input.close();
}
}
