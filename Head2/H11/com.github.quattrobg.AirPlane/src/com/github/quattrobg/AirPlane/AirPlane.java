package com.github.quattrobg.AirPlane;

public class AirPlane {

	private int[][] seats = new int[6][27];

	public void addPeople(int amount) {
		int row = 0;
		if (freeSeats() == 1) {
			switch (amount) {
			case 1: {
				for (int col = 0; row < 27; col++) {
					if (seats[col][row] == 0) {
						seats[col][row] = 1;
						break;
					}
					if (col == 5) {
						col = -1;
						row++;
					}
				}
			}
				break;
			case 2: {
				for (int col = 0; row < 27; col++) {
					if ((col != 2) & (col != 5)) {
						if ((seats[col][row] == 0) & (seats[col + 1][row] == 0)) {
							seats[col][row] = 2;
							seats[col + 1][row] = 2;
							break;
						}
					}
					if (col == 5) {
						col = -1;
						row++;
					}
				}
			}
				break;
			case 3: {
				for (int col = 0; row < 27; col++) {
					if ((col == 0) | (col == 3)) {
						if ((seats[col][row] == 0) & (seats[col + 1][row] == 0)
								& (seats[col + 2][row] == 0)) {
							seats[col][row] = 3;
							seats[col + 1][row] = 3;
							seats[col + 2][row] = 3;
							break;
						}
					}
					if (col == 5) {
						col = -1;
						row++;
					}
				}
			}
				break;
			}
		}
	}

	public int freeSeats() {
		int row = 0;
		for (int col = 0; row < 27; col++) {
			if (seats[col][row] == 0) {
				return 1;
			}
			if (col == 5) {
				col = -1;
				row++;
			}
		}
		return 0;
	}

	public void printSeats() {
		for (int row = 0; row < 27; row++) {
			for (int col = 0; col < 6; col++) {
				System.out.print(seats[col][row]);
				if (col == 2) {
					System.out.print("| |");
				}
			}
			System.out.println();
		}
	}

}
