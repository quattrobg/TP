package com.github.quattrobg.factory.code;

public class DirectEvaluatorFactory extends Evaluator implements IEvaluatorFactory{
	public void add(Double d){
		eval.add(d);
	}
	
	public IEvaluator createSumEvaluator(){
		for(Double e : eval){
			res += e;
		}
		
		return this;
	}
	
	public IEvaluator createPowerOnEvaluator(){
		int power = 2;
		res = 0.0;
		for (Double e : eval) {
            res += Math.pow(e, power);
		}
		
		return this;
	}
	
	public IEvaluator createPowerOnEvaluator(int power){
		res = 0.0;
		for (Double e : eval) {
            res += Math.pow(e, power);
		}
		
		return this;
	}
	public IEvaluator createFibonaciEvaluator(){
		return null;
	}
}
