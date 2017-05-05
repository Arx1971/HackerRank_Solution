package abstraction;

public class Main {

	public static void main(String args[]){
		
		EmployeeClass crew = new CrewMember() ;
		
		String name = "Mike";
		String address = "United States";
		String id = "Star Wars";
		int age = 24;
		
		
		crew = new CrewMember(name,id,address,age);
		
		crew._name();
		crew._id();
		crew._address();
		crew._age();
		
		EmployeeClass manager = new ManagerClass();
		
		String m_name = "Michale";
		String m_id = "123456";
		String m_address = "United Kingdom";
		int m_age = 34;
		
		manager = new ManagerClass(m_name,m_id,m_address,m_age);
		
		System.out.println("\n");
		
		manager._name();
		manager._id();
		manager._address();
		manager._age();
		
	}
	
}
