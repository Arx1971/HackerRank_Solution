package userDaemonThread;

public class Daemonthread extends Thread {

	public void run(){
		
		System.out.println("Daemon is " + isDaemon());
		while(true);
	}
	
}
