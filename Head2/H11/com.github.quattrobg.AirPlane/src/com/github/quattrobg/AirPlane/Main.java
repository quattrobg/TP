package com.github.quattrobg.AirPlane;

import java.util.Random;

public class Main {

	public static void main(String[] args) {
		AirPlane plane=new AirPlane();
		plane.printSeats();
		while(plane.freeSeats() == 1){
			int rNum = new Random().nextInt(3)+1;
			plane.addPeople(rNum);
		}
		plane.printSeats();
	}

}
