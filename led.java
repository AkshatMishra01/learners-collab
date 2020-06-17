class led {
    
    boolean ison;
    void turnon()
    {
        ison = true;
        System.out.println("The led is on" + ison);
    }
    void turnoff()
    {
        ison = false;
        System.out.println("The led is off" + ison);
    }
}

public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello user.");
		led l1 = new led();
		led l2 = new led();
		//this is a comment;
		l1.turnon();
		l2.turnoff();
	}
}
