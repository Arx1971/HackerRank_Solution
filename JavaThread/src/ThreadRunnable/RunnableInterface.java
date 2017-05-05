package ThreadRunnable;

public class RunnableInterface implements Runnable{
	
	public Thread T1;
	public String name;
	
	public RunnableInterface(String ThreadName){
		
		name = ThreadName;
		
		T1 = new Thread(this,name);
		T1.start();
	}
	
	public void run(){
		
		for(int i=1; i<=10; i++){
			
			System.out.println(name + " " + i);
			
		}
		
	}
	
}
