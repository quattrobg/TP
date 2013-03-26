# Технологично училище Електронни системи - http://www.elsys-bg.org/
# 11б
# 18
# Иван Пейчинов
# Целта на занятието е да се реши задача свързана с обмен и обработка на много csv файлове

require "csv"

class Popular
	@@mostPop=Array.new(30, 0)

	def initialize
		lists=Dir.glob("*.csv")

		for i in 0..30
			@@mostPop[i]=0
		end

		for l in lists
			CSV.foreach(l) do |row|
				@@mostPop[row[0].to_i-1]+=1
			end
		end
	end

	def mostPopular
		most=0
		@@mostPop.each do |ppl|
			if most<ppl
				most=ppl
			end
		end

		print "Most popular : "

		for i in 0..29
			if @@mostPop[i]==most
				puts "#{i+1} "
				puts @@mostPop[i]
			end
		end
	end

	def leastPopular
		least=0
		@@mostPop.each do |ppl|
			if least>ppl
				least=ppl
			end
		end

		print "Least popular : "

		for i in 0..29
			if @@mostPop[i]==least
				puts "#{i+1} "
				puts @@mostPop[i]
			end
		end
	end
end

p=Popular.new
p.mostPopular
p.leastPopular
