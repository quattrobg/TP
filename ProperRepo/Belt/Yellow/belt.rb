require "csv"

sum = 0.0

CSV.foreach("feature_scenarios_times.csv") do |row|
	if (row[1] == "features/instance_create_update.feature")
		sum += row[0].to_f
	end
end

CSV.open("output.csv", "w") do |csv|
	csv << [sum]	
end
