import java.util.*;
public class FizzBuzz
{
	public static void main(String[] args) 
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Please enter a number : ");
		int num= scan.nextInt();
		for (int i=0;i<num+1;i++)
		{
			if (i%3==0 && i%5==0)
			{
				System.out.println("FizzBuzz");
			}
			else if (i%3==0)
			{
				System.out.println("Fizz");
			}
			else if (i%5==0)
			{
				System.out.println("Buzz");
			}
		}
		scan.close();
	}
}
