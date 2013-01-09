# Технологично училище Електронни системи - http://http://www.elsys-bg.org/
# 11б клас
# №18
# Иван Пейчинов
# Да се разработи калкулатор, работещ на принципа на обратния полски запис.

puts "Are you ready? [y/n]"

inputVal = gets.chomp

if (inputVal == "y")
	puts "Here we go then"
elsif (inputVal == "n")
	puts "It was a ritorical question"
else
	puts "Ah, never mind"
end

list = Hash.new
res = 0.0

while(inputVal != "=")
	inputVal = gets.chomp
	
	case inputVal
		when(/[0-9.]/)
			if (list.length == 0)
				res = inputVal.to_f
				list[list.length] = inputVal.to_f
			else
				list[list.length] = inputVal.to_f
			end
		when "+"
			res = list[list.length-1] + list[list.length-2]
		else
			puts "WRONG!"
	end		
end

puts res.to_s
