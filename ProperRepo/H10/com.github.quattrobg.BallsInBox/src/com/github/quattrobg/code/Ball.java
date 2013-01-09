/*
* Технологично училище "Електронни системи" <http://www.elsys-bg.org>
* 11Б клас
* №18
* Иван Пейчинов
* Задача - да се направи програма, която да слага топчета в кутия
* */
package com.github.quattrobg.code;

public class Ball {
	private String ballName;
	
	public Ball(){
		ballName = "bob";
	}	
	public Ball(String name){
		ballName = name;
	}	
	public String getName(){
		return ballName;
	}
}
