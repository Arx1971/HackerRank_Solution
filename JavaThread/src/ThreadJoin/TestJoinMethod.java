package ThreadJoin;

public class TestJoinMethod extends Thread{

	public void run(){
		
		for(int i=1; i<=5; i++){
			try {
				Thread.sleep(1000);
			} catch (Exception e) {
				// TODO: handle exception
			}
			System.out.println(i);
		}
		
	}
	
}
