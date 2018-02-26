//Annamary W. Cartagena
//Laboratorio2
//Feb 26 2017

import java.util.Scanner;

public class IdealWeight {
	public static void main(String[] args) {
		int feet, inches, totalinches, weightwomen=0, weightmen=0;
		Scanner scan = new Scanner(System.in);
		
		
		System.out.println("Please insert height (feet + inches) seperated by space." );
		feet = scan.nextInt();
		inches = scan.nextInt();
		
		feet -= 5; 
		totalinches = (feet * 12) + inches;
		weightwomen = (totalinches *5) + 100;
		weightmen = (totalinches * 6) + 100;
		
		System.out.println("Your ideal wieght, as a woman, is: " + weightwomen);
		System.out.println("Your ideal wieght, as a man, is: " + weightmen);
	}
}
