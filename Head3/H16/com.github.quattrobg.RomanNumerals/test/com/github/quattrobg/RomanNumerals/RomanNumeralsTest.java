package com.github.quattrobg.RomanNumerals;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;

public class RomanNumeralsTest {

	static RomanNumeralConverter r;

	@Before
	public void setUp() {
		r = new RomanNumeralConverter();
	}

	@Test
	public void RomanNumeralConverterTestI() {
		assertEquals("I", r.convert(1));
	}

	@Test
	public void RomanNumeralConverterTestII() {
		assertEquals("II", r.convert(2));
	}
	
	@Test
	public void RomanNumeralConverterTestIII() {
		assertEquals("III", r.convert(3));
	}
	
	@Test
	public void RomanNumeralConverterTestIV() {
		assertEquals("IV", r.convert(4));
	}
	
	@Test
	public void RomanNumeralConverterTestDCCCLXXXVIII() { //:D
		assertEquals("DCCCLXXXVIII", r.convert(888));
	}
}
