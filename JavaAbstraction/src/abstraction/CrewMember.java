package abstraction;

public class CrewMember extends EmployeeClass{
	
	public CrewMember(){
		
	}
	
	public CrewMember(String name,String id,String address,int age){
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
		System.out.println("Crew Member Name: " + getname());
	}
	public void _address(){
		System.out.println("Crew Member Address: " + getaddress());
	}
	public void _id(){
		System.out.println("Crew Member Id: " + getid());
	}
	public void _age(){
		System.out.println("Crew Member Age: " + getage());
	}

}
