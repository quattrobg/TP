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
