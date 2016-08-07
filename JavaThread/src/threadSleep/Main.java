package threadSleep;

public class Main {
	
	public static void main(String args[]){
		
		TestThread t1 = new TestThread();
		TestThread t2 = new TestThread();
		
		t1.start();
		t2.start();
		
	}
	
}
