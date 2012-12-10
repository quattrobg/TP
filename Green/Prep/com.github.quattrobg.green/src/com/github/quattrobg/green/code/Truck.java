package com.github.quattrobg.green.code;

public class Truck extends Vehicle{
	public Truck(int num){
		this.x = 0;
		this.y = 0;
		this.load = 0;
		this.num = num;
	}
	public void SetLoad(double load) throws Exception{
		if (load > 20) {
			throw new Exception("This is too heavy for a truck");
		}else{
			super.SetLoad(load);
		}
	}
}
