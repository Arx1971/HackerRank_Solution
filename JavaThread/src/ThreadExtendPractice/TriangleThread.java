package ThreadExtendPractice;

public class TriangleThread extends Thread{
	
	public void run(){
		
		for(int i=1; i<=10; i++){
			
			for(int j=1; j<=10; j++){
				
				if(j>10-i)
					System.out.print("*");
				else
					System.out.print(" ");
			}
			
			for(int j=0; j<i-1; j++){
				
				System.out.print("*");
				
			}
			
			System.out.println();
		}
		
	}

}
