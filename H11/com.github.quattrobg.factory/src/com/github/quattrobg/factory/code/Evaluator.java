package com.github.quattrobg.factory.code;

import java.util.*;

public class Evaluator implements IEvaluator{

	List<Double> eval = new ArrayList<Double>();
	Double res = 0.0;
	
	public void add(Double d){
		eval.add(d);
	}
	
	public Double evaluate(){
		return res;
	}

}
