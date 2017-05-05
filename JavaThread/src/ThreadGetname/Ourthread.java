package ThreadGetname;

public class Ourthread extends Thread {

	
	public void run(){
		
		int n=10;
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				System.out.print("*");
			}
			System.out.println();
		}
		
	}
}
