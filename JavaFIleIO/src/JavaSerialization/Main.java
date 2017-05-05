package JavaSerialization;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

public class Main {

	public static void main(String[] args) throws IOException{
		
		Student male = new Student("Michelle Obama", "First Lady");
		
		FileOutputStream fout = null;
		
		ObjectOutputStream oos = null;
		
		try {
			
			fout = new FileOutputStream("home:\\rahin\\Desktop\\object.txt");
			oos = new ObjectOutputStream(fout);
			
			oos.writeObject(male);
			
		} catch (Exception e) {
			// TODO: handle exception
		}
		oos.flush();
		oos.close();

	}

}
