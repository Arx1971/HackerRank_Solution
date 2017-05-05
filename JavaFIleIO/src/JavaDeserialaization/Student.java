package JavaDeserialaization;

import java.io.Serializable;

public class Student implements Serializable {
	
	public String name;
	public String ID;
	
	public Student(String name,String ID){
		
		this.ID = ID;
		this.name = name;
		
	}
	
}
