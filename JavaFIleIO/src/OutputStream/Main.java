package OutputStream;

import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class Main {

	static Scanner input = new Scanner(System.in);
	
	public static void main(String args[])throws IOException{
		
		FileOutputStream fout = null;
		
		int test_Case = input.nextInt();
		
		try {
			
			fout = new FileOutputStream("home:\\rahin\\Desktop\\text.txt");
			
			for(int i=1; i<=test_Case; i++){
				for(int j=1; j<=i; j++){
					fout.write("*".getBytes());
				}
				fout.write("\n".getBytes());
			}
			
		} catch (Exception e) {
			// TODO: handle exception
		}
		
	}
}