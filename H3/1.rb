# Технологично училище Електронни системи - http://http://www.elsys-bg.org/
# 11б клас
# №18
# Иван Пейчинов
# Да се разработи програма, изчисляваща броя на задачите написани на Ruby/Python/Perl, както и сумата от номерата на ученици писали на даден език.
require "csv"

ruby = 0; python = 0; perl = 0;

CSV.foreach("test2.csv") do |row|
	if row[3] == "ruby"
		ruby += 1
	end
	if row[3] == "python"
		python += 1
	end
	if row[3] == "perl"
		perl += 1
	end
end

print ruby
printf "people did it in ruby\n"
print python
printf "people did it in python\n"
print perl
printf "people did it in perl\n"
