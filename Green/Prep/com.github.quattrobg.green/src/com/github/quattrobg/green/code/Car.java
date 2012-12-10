package com.github.quattrobg.green.code;

public class Car extends Vehicle{
	public Car(int num){
		this.x = 0;
		this.y = 0;
		this.load = 0;
		this.num = num;
	}
	
	public void SetLoad(double load) throws Exception{
		if (load > 1) {
			throw new Exception("This is too heavy for a car");
		}else{
			super.SetLoad(load);
		}
	}
}
