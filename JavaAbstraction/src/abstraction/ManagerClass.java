package abstraction;

public class ManagerClass extends EmployeeClass {

	public ManagerClass(){
		
	}
	
	public ManagerClass(String name,String id,String address, int age){
		super(name, id, address, age);
	}
	public String getname(){
		return name;
	}
	
	public String getid(){
		return id;
	}
	
	public String getaddress(){
		return address;
	}
	
	public int getage(){
		return age;
	}
	
	public void _name(){
		System.out.println("Manager Name: " + getname());
	}
	public void _address(){
		System.out.println("Manager Address: " + getaddress());
	}
	public void _id(){
		System.out.println("Manager Id: " + getid());
	}
	public void _age(){
		System.out.println("Manager Age: " + getage());
	}
	
}
