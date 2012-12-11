package com.github.quattrobg.greenbelt.exam;

public class Widget {
	double x, y;
	String text;
	
	public String GetText(){
		return this.text;
	}
	
	public Widget(){
		this.x = 0;
		this.y = 0;
		this.text = "n/a";
	}
	
	public void print(){
		System.out.println("Text : " + this.text + " X,Y : [" + this.x + "," + this.y + "]");
	}
}
