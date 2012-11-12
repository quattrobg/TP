// Технологично училище Електронни системи - http://www.elsys-bg.org/
// 11б
// 18
// Иван Пейчинов
// Да се разработи програма симулираща местата в самолет (27 реда, 2 колони и по 3 места в колона).
// На случаен принцип се генерират числа (между 1 и 3), определящи броя на пътниците, които ще се качат на самолета,
// като те задължително трябва седят един до друг. Програмата спира, когато целият самолет е пълен.
package com.github.quattrobg.AirPlane.code;

import java.util.*;

public class Human {
	String[] names = {"Ivan", "Neli", "Todor", "Beti", "Misho", "Krasi"};
	String[] genders = {"Male", "Female"};
	
	private int n = new Random().nextInt(6);

	private String name = names[n];
	private String gender = genders[n%2];	

	public void setName(String name){
		this.name = name;
	}
	public void setGender(String gender){
		this.gender = gender;
	}
	
	public String getName(){
		return name;
	}
	public String getGender(){
		return gender;
	}
}
