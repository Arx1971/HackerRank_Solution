package JavaSerialization;


	import java.io.FileInputStream;
	import java.io.ObjectInputStream;
	import java.io.*;

	public class Main_2 {

		public static void main(String[] args)throws IOException {
			
			FileInputStream fin = null;
			ObjectInputStream ois = null;
			
			try {
				
				fin = new FileInputStream("home:\\rahin\\Desktop\\object.txt");
				ois = new ObjectInputStream(fin);
				Student s = (Student) ois.readObject();
				
				System.out.println("Name: "+s.name + "\n" + "ID: " + s.ID);
				
			} catch (Exception e) {
				System.out.println("ErroR:");
			}
			fin.close();
			ois.close();
		}

	}

	
