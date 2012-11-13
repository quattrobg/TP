/*
* Технологично училище "Електронни системи" <http://www.elsys-bg.org>
* 11Б клас
* №18
* Иван Пейчинов
* Задача - да се направи програма, която да слага топчета в кутия
* */
package com.github.quattrobg.code;

public class Box {
	public static void main(String[] args) {
		BoxOfBalls box = new BoxOfBalls();
		Ball b = new Ball("baaaaall");
		box.add(b);
		Ball c = new Ball("stupid ball");
		box.add(c);
		box.add(b);
		box.rm(b);
		box.add(b);
	}

}
