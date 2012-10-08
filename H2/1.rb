require "csv"

res = 0

CSV.foreach("test.csv") do |row|
	res =res + row[4].to_i
end

print res
