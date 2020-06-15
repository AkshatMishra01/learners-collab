import java.util.Scanner;
public class input
{
public static void main(String[] inputargs)
{
System.out.println("Input from the user");
//declare the object for the scanner class
Scanner read = new Scanner(System.in);
int data = read.nextint();
System.out.println("The number entered by the user is" + data);
String name = read.next();
System.out.println("The entered string is" + name);
}
 read.close();
}
