require 'csv'

class Student
	@clas, @name, @email, @repo = ""
	@belt = "Бял"
	@num = 0
	@homeworks=Array.new(9){"Не"}

	def getClas; return @clas; end
	def getNum; return @num; end
	def getName; return @name; end
	def getEmail; return @email; end
	def getRepo; return @repo; end
	def getHomework(num); return @homeworks[num]; end

	def setClas(val); @clas = val; end
	def setNum(val); @num = val; end
	def setName(val); @name = val; end
	def setEmail(val); @email = val; end
	def setRepo(val); @repo = val; end
	def setHomework(num, val); @homeworks[num] = val; end

	def fixClas
		if (@clas.include? 'a') || (@clas.include? 'A') || (@clas.include? 'а') || (@clas.include? 'А')
			@clas = 'А'
		else
			@clas = 'Б'
		end
	end

	def fixName
		h = Hash['a', 'а', 'b', 'б', 'c', 'ц', 'd', 'д', 'e', 'е', 'f', 'ф', 'g', 'г',
'h', 'х', 'i', 'и', 'j', 'й', 'k', 'к', 'l', 'л', 'm', 'м', 'n', 'н', 'o', 'о',
'p', 'п', 'q', 'я', 'r', 'р', 's', 'с', 't', 'т', 'u', 'у', 'v', 'в', 'w', 'в',
'x', 'кс', 'y', 'й', 'z', 'з', 'ya', 'я', 'yu', 'ю', 'ja', 'я' ]
		@name = string.downcase
		h.each_pair do |i, v|
			for j in 0...@name.length
				index = @name.index(i)
				@name = @name.sub(i, '')
				@name = @name.insert(index, v) if index != nil
			end
		end
	end
end

students = Array.new(60) {Student.new()}
actualStudents = 0

for i in 1..9
	CSV.foreach(i.to_s + ".csv") do |row|
		next if row[1] == "Клас"
		students[actualStudents].setClas(row[1])
		students[actualStudents].setNum(row[2])
		students[actualStudents].setName(row[3])
		students[actualStudents].setEmail(row[4])
		students[actualStudents].setRepo(row[5])
		actualStudents += 1
		for j in 0..actualStudents
			if students[actualStudents].getName != students[j].getName
				if (students[actualStudents].getClas == students[j].getClas) and (students[actualStudents].getNum == students[j].getNum)
					actualStudents -= 1
				end
			else
				actualStudents -= 1
			end
		end
	end
end

for i in 0..actualStudents
	students[i].fixClas
	students[i].fixName
end




