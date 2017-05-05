package javaDaimoneThread;

public class TestDaemonThread extends Thread {

	public void run(){
		if(Thread.currentThread().isDaemon())
			System.out.println("Daemon Thread is Working:");
		
		else
			System.out.println("User Thread is Working:");
	}
	
}
