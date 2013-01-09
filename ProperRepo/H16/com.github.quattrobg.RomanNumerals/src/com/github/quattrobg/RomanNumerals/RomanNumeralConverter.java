package com.github.quattrobg.RomanNumerals;

public class RomanNumeralConverter {

	int[] arabic = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	String[] roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	String res = "";
	
	public String convert(int i) {
		for(int c = 0; c < arabic.length; c++){
			while(i >= arabic[c]){
				res += roman[c];
				i -= arabic[c];
			}
		}
		return res;
	}

}
