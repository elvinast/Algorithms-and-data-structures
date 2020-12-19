package sec3;
import java.util.Scanner;

public class onedArray {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] nums = new int[5];
		nums[0] = 2;
		nums[1] = 3;
		nums[2] = 4;
		nums[3] = 9;
		nums[4] = 10;
		for(int i = 0; i < 5; i++) {
			System.out.println(nums[i]);
		}
		
		Student[] studs = new Student[4];
		studs[0] = new Student("First", 18);
		studs[1] = new Student("Second", 19);
		studs[2] = new Student("Third", 22);
		studs[3] = new Student("Forth", 17);
		
		//for each (as in python for i in studs)
		for(Student student : studs) {
			System.out.println("name: " + student.name + ", age: " + student.age);
		}
	}

}
