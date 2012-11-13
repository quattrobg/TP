# Технологично училище Електронни системи - http://http://www.elsys-bg.org/
# 11б клас
# №18
# Иван Пейчинов
# Да се разработи програма, изчисляваща общия брой на решените задачи от целия клас.

require "csv"

res = 0

CSV.foreach("test.csv") do |row|
	res =res + row[4].to_i
end

print res
