package com.github.quattrobg.greenbelt.exam;

import java.util.*;

public class Main {

	public static void main(String[] args) {
		List<Widget> widgets = new ArrayList<Widget>();
		Scanner in = new Scanner(System.in);
		
		for(int i = 0; i<2; i++){
			System.out.print("Enter X, Y and TEXT : ");
			double x = in.nextDouble();
			double y = in.nextDouble();
			String text = in.next();
			if(i%2==0){
				widgets.add(new Button(x, y, text));
			}else{
				widgets.add(new Label(x, y, text));
			}
		}
		
		System.out.print("Enter TEXT : ");
		String[] text = in.next().split(",");
		
		for(Widget w : widgets){
			if(text[0].equals("c")){
				if(w instanceof Button){
					if(w.GetText().equals(text[1])){
						System.out.println(((Button) w).Click());
					}
				}
			}
		}
		
		in.close();
	}

}
