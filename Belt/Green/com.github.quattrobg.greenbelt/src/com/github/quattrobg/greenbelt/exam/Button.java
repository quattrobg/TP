package com.github.quattrobg.greenbelt.exam;

public class Button extends Widget implements IClickable{
	public Button(double x, double y, String text){
		this.x = x;
		this.y = y;
		this.text = text;
	}
	public String Click(){
		String temp = this.text.toUpperCase();
		this.text = temp;
		return this.text;
	}
}
