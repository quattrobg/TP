package com.github.quattrobg.factory.code;

public interface IEvaluatorFactory {
	public IEvaluator createSumEvaluator();
	
	public IEvaluator createPowerOnEvaluator();
	
	public IEvaluator createPowerOnEvaluator(int power);
	
	public IEvaluator createFibonaciEvaluator();
}
