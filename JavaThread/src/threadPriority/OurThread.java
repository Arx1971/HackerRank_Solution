package threadPriority;

public class OurThread extends Thread{
	
	public void run(){
		
		System.out.println("ThreadName : " +currentThread().getName());
		System.out.println("The Priority : " + currentThread().getPriority());
		
	}
	
}
