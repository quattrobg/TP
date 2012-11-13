require 'csv'

bob = gets.chomp

y=Array.new(50){0}
x=Array.new(50){0}

i=0

CSV.foreach(bob) do |row|
	x[i]=row[1].to_i
	
	if row[1].to_i != 0
		y[i]=x[i]/2 + rand()%50
	end

	i+=1
end

CSV.open("New.csv", "w") do |csv|
	for j in 0..49
		csv << [j.to_s, y[j].to_s]
	end
end
