package javaDaimoneThread;

public class Main {
	
	public static void main(String args[]){
		
		TestDaemonThread t1 = new TestDaemonThread();
		TestDaemonThread t2 = new TestDaemonThread();
		TestDaemonThread t3 = new TestDaemonThread();
		
		
		t1.setDaemon(true);
		t2.setDaemon(true);
		
		t1.start();
		t2.start();
		t3.start();
		
		
		System.out.println(t1);
		System.out.println(t3.getName()+" is alive "+t3.isAlive());
		t3.stop();
	}
	
}
