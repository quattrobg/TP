/*
* Технологично училище "Електронни системи" <http://www.elsys-bg.org>
* 11Б клас
* №18
* Иван Пейчинов
* Задача - да се направи програма, която да слага топчета в кутия
* */
package com.github.quattrobg.code;

import java.util.*;

public class BoxOfBalls {
	int cap;
	List<Ball> bob = new ArrayList<Ball>();
	
	public BoxOfBalls(){
		cap = 10;
	}
	public BoxOfBalls(int cap){
		this.cap = cap;
	}	
	public void add(Ball b){
		if(!bob.contains(b)){
			if(bob.size() < cap){
				bob.add(b);
				System.out.println("Added!");
			}else{
				System.out.println("The box is full!");
			}
		}else{
			System.out.println("This ball is already in the box!");
		}
	}
	public void rm(Ball b){
		if(!bob.contains(b)){
			System.out.println("There is no such ball in this box!");
		}else{
			if(bob.isEmpty()){
				System.out.println("The box is empty!");
			}else{
				bob.remove(b);
				System.out.println("Removed!");
			}
		}
	}	
	public int getCap(){
		return cap;
	}
	public int spaceLeft(){
		return cap - bob.size();
	}	
	public void clear(){
		bob.clear();
	}	
	public boolean contains(Ball b){
		return bob.contains(b);
	}
}
