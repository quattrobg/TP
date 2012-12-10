package com.github.quattrobg.green.code;

public class Vehicle implements Loadable{
	double x, y;
	double load;
	int num;
	
	public void SetXY(double x, double y){
		this.x = x;
		this.y = y;
	}
	
	public void SetNum(int num){
		this.num = num;
	}
	public int GetNum(){
		return this.num;
	}
	
	public void SetLoad(double load) throws Exception{
		this.load = load;
	}
	public double GetLoad(){
		return this.load;
	}
	
	public void print(){
		System.out.println(this.num + " : [" + this.x + ", " + this.y + "]" + "/ Load : " + this.load);
	}
}
