import java.util.Scanner; // This is to take input from the user

public class Main
{
public static void main(String[] args)
{
Scanner input = new Scanner(System.in);// Declare the input object
int data = input.nextInt();
if(data > 0)
{
System.out.println("The entered positive integer is " + data);
}
else
{
System.out.println("The entered negative integer is " + data);
}
input.close();
}
}
