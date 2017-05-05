package userDaemonThread;

public class Main {

	public static void main (String [] args)
	   {
	      if (args.length == 0)
	         new Daemonthread().start ();
	      else
	      {
	         Daemonthread mt = new Daemonthread();
	         mt.setDaemon (true);
	         mt.start ();
	      }
	      try
	      {
	         Thread.sleep (100);
	      }
	      catch (InterruptedException e)
	      {
	      }
	   }
	
}
