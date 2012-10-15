# Технологично училище Електронни системи - http://www.elsys-bg.org/
# 11б
# 18
# Иван Пейчинов
# Да се разработи програма симулираща местата в самолет (27 реда, 2 колони и по 3 места в колона).
# На случаен принцип се генерират числа (между 1 и 3), определящи броя на пътниците, които ще се качат на самолета,
# като те задължително трябва седят един до друг. Програмата спира, когато целият самолет е пълен.

class AirPlane
	@@seats=Array.new(6){Array.new(27)}

	def initialize
		col=0
		row=0
		while col<6 and row<27
			@@seats[col][row]=0
			col+=1
			if(col==6)
				col=0
				row+=1
			end
		end
	end

	def addPpl(amount)
		col=0
		row=0
		if(freeSeats==1)
			while col<6 and row<27
				if(amount==1)
					if(@@seats[col][row]==0)
						@@seats[col][row]=1
						break
					end
				end
				if(amount==2)
					if((col!=2) and (col!=5))
						if((@@seats[col][row]==0) and (@@seats[col+1][row]==0))
							@@seats[col][row]=2
							@@seats[col+1][row]=2
							break
						end
					end
				end
				if(amount==3)
					if((col==0) or (col==3))
						if((@@seats[col][row]==0) and (@@seats[col+1][row]==0) and (@@seats[col+2][row]==0))
							@@seats[col][row]=3
							@@seats[col+1][row]=3
							@@seats[col+2][row]=3
							break
						end
					end
				end
				col+=1
				if(col==6)
					col=0
					row+=1
				end
			end
		end
	end

	def freeSeats
		col=0
		row=0
		while col<6 and row<27
			if(@@seats[col][row]==0)
				return 1
			end
			col+=1
			if(col==6)
				col=0
				row+=1
			end
		end
		return 0
	end

	def printSeats
		col=0
		row=0
		while col<6 and row<27
			print @@seats[col][row]
			col+=1
			if(col==3)
				print "| |"
			end
			if(col==6)
				col=0
				row+=1
				puts
			end
		end
	end
end

plane=AirPlane.new

while plane.freeSeats==1
	plane.addPpl rand(3)+1
end

plane.printSeats
