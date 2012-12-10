package com.github.quattrobg.green.code;

import java.util.*;

public class Main {

	public static void main(String[] args) {
		ArrayList<Vehicle> vehicleList = new ArrayList<Vehicle>();
		Scanner in = new Scanner(System.in);
		
		int num = in.nextInt();
		double x = in.nextDouble();
		double y = in.nextDouble();
		Car c = new Car(num);
		c.SetXY(x, y);
		try{
			c.SetLoad(10);
		} catch (Exception ex) {
			System.out.println(ex);
		}		
		vehicleList.add(c);
		
		num = in.nextInt();
		x = in.nextDouble();
		y = in.nextDouble();
		Truck t = new Truck(num);
		t.SetXY(x, y);
		try {
			t.SetLoad(10);
		} catch (Exception ex) {
			System.out.println(ex);
		}
		vehicleList.add(t);
		
		in.close();
		
		vehicleList.get(0).print();
		vehicleList.get(1).print();
	}

}
