package ThreadGetname;

public class Main {
	
	public static void main(String args[]){
		
		Ourthread ot = new Ourthread();
		Ourthread mt = new Ourthread();
		try {
			ot.start();
			ot.sleep(1000);
			mt.start();
			
		} catch (Exception e) {
			
		}
		System.out.println(ot.getName());
		
	}
	
}
