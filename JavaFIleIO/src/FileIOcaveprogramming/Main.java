package FileIOcaveprogramming;

import java.io.*;
import java.util.Scanner;

public class Main {
	
	static Scanner input = new Scanner(System.in);
	
	public static void main(String args[]){
	
		FileOutputStream fout = null;
		FileInputStream fin = null;
		
		try {
			fout = new FileOutputStream("Text.txt");
			
			int test_case = input.nextInt();
			
			for(int i=1; i<=test_case; i++){
				for(int j=1; j<=i; j++){
					fout.write("*".getBytes());
				}
				fout.write("\n".getBytes());
			}
			
		} catch (Exception e) {
			// TODO: handle exception
		}
		try {
			
			fin = new FileInputStream("Text.txt");
			
			int i = 0;
			
			while((i=fin.read())!=-1){
				System.out.print((char)i);
			}
			
		} catch (Exception e) {
			// TODO: handle exception
		}
		
	}
	
}
