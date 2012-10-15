// Технологично училище Електронни системи - http://www.elsys-bg.org/
// 11б
// 18
// Иван Пейчинов
// Да се разработи програма симулираща местата в самолет (27 реда, 2 колони и по 3 места в колона).
// На случаен принцип се генерират числа (между 1 и 3), определящи броя на пътниците, които ще се качат на самолета,
// като те задължително трябва седят един до друг. Програмата спира, когато целият самолет е пълен.

import java.util.Random;

public class AirPlane{

	private int[][] seats=new int [6][27];

	public void addPeople(int amount){
		if(freeSeats()==1){
			switch(amount){
				case 1: oneP();
					break;
				case 2: twoP();
					break;
				case 3: threeP();
					break;
			}
		}
	}
	public void oneP(){
		int row=0;
		for(int col=0; row<27; col++){
			if(seats[col][row]==0){
				seats[col][row]=1;
				break;
			}
			if(col==5){
				col = -1;
				row++;
			}
		}
	}
	public void twoP(){
		int row = 0;
		for(int col=0; row<27; col++){
			if( (col!=2) & (col!=5) ){
				if( (seats[col][row]==0) & (seats[col+1][row]==0) ){
					seats[col][row]=2;
					seats[col+1][row]=2;
					break;
				}
			}
			if(col==5){
				col = -1;
				row++;
			}
		}
	}
	public void threeP(){
		int row=0;
		for(int col=0; row<27; col++){
			if( (col==0) | (col==3) ){
				if( (seats[col][row]==0) & (seats[col+1][row]==0) & (seats[col+2][row]==0) ){
					seats[col][row] = 3;
					seats[col+1][row] = 3;
					seats[col+2][row] = 3;
					break;
				}
			}
			if(col==5){
				col = -1;
				row++;
			}
		}
	}
	public int freeSeats(){
		int row=0;
		for(int col=0; row<27; col++){
			if(seats[col][row]==0){
				return 1;
			}
			if(col==5){
				col = -1;
				row++;
			}
		}
		return 0;
	}
	public void printSeats(){
		for(int row=0; row<27; row++){
			for(int col=0; col<6; col++){
				System.out.print(seats[col][row]);
				if(col==2){
					System.out.print("| |");
				}
			}
			System.out.println();
		}
	}
	public static void main(String[] args){
		AirPlane plane=new AirPlane();
		plane.printSeats();
		while(plane.freeSeats() == 1){
			int rNum = new Random().nextInt(3)+1;
			plane.addPeople(rNum);
		}
		plane.printSeats();
	}
}
