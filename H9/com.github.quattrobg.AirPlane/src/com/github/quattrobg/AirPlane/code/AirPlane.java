// Технологично училище Електронни системи - http://www.elsys-bg.org/
// 11б
// 18
// Иван Пейчинов
// Да се разработи програма симулираща местата в самолет (27 реда, 2 колони и по 3 места в колона).
// На случаен принцип се генерират числа (между 1 и 3), определящи броя на пътниците, които ще се качат на самолета,
// като те задължително трябва седят един до друг. Програмата спира, когато целият самолет е пълен.
package com.github.quattrobg.AirPlane.code;

public class AirPlane{

	private Human[][] seats=new Human [6][27];

	public void add(Human h){
		int col = 0, row = 0;
		boolean sit = false;
		while(sit == false){
			if(seats[col][row] == null){
				seats[col][row] = h;
			}else{
				col++;
				if(col>5){
					col = 0;
					row++;
				}
			}
			if(row>26){
				System.out.println("No more free seats!");
				break;
			}
		}
	}
	public void rm(Human h){
		int col = 0, row = 0;
		boolean removed = false;
		while(removed == false){
			if(h.getName() == seats[col][row].getName()){
				seats[col][row] = null;
			}else{
				col++;
				if(col>5){
					col = 0;
					row++;
				}
			}
			if(row>26){
				System.out.println("No such person on this plane!");
				break;
			}
		}
	}
	public void clear(){
		int col = 0, row = 0;
		for(row = 0; row<27; row++){
			for(col = 0; col<6; col++){
				seats[col][row] = null;
			}
		}
	}
	public int getCap(){
		int cap = 0;
		int col = 0, row = 0;
		
		for(row = 0; row<27; row++){
			for(col = 0; col<6; col++){
				if(seats[col][row] == null){
					cap++;
				}
			}
		}
		
		return cap;
	}
	public int getMale(){
		int male = 0;
		int col = 0, row = 0;
		
		for(row = 0; row<27; row++){
			for(col = 0; col<6; col++){
				if(seats[col][row] != null){
					if(seats[col][row].getGender() == "Male"){
						male++;
					}
				}
			}
		}
		
		return male;
	}
	public int getFemale(){
		int female = 0;
		int col = 0, row = 0;
		
		for(row = 0; row<27; row++){
			for(col = 0; col<6; col++){
				if(seats[col][row] != null){
					if(seats[col][row].getGender() == "Female"){
						female++;
					}
				}
			}
		}
		
		return female;
	}
	
	public static void main(String[] args){
		
	}
}