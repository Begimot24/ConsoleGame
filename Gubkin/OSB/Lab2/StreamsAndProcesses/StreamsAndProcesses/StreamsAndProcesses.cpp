using System.Threading;

public static void Metod()
{
	{

	}
}


public static void Coundown()
{
	for (int counter = 1000; counter > 0; counter--)
		Console.Write(counter.ToString() + "  ");
}

public static void Main()
{
	Thread t2 = new Thread(new ThreadStart(Method()));
	Thread t2 = new Thread(new ThreadStart(Coundown));
	t2.Start();
}




