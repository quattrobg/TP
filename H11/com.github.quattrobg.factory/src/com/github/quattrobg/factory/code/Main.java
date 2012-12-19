package com.github.quattrobg.factory.code;

public class Main {

	
	public static void main(String[] args) {
				
		DirectEvaluatorFactory d = new DirectEvaluatorFactory();
		d.add(1.0);
		d.add(2.0);
		d.add(-1.0);
		
		AbsoluteEvaluatorFactory a = new AbsoluteEvaluatorFactory();
		a.add(1.0);
		a.add(2.0);
		a.add(-1.0);
		
		IEvaluator sumD = d.createSumEvaluator();
		System.out.println(sumD.evaluate());
		
		IEvaluator sumA = a.createSumEvaluator();
		System.out.println(sumA.evaluate());
		
		IEvaluator powD = d.createPowerOnEvaluator();
		System.out.println(powD.evaluate());
		
		IEvaluator powA = a.createPowerOnEvaluator();
		System.out.println(powA.evaluate());
		
		IEvaluator powD2 = d.createPowerOnEvaluator(3);
		System.out.println(powD2.evaluate());
		
		IEvaluator powA2 = a.createPowerOnEvaluator(3);
		System.out.println(powA2.evaluate());
	}

}
