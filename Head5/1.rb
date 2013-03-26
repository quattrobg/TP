# Технологично училище Електронни системи - http://http://www.elsys-bg.org/
# 11б клас
# №18
# Иван Пейчинов
# monkey patching (Array#to_hash, Array#index_by, Array#subarray_count, Array#occurences_count, Array#densities)

class Array
	def to_hash
		newhash = {}
		self.each do |elem1, elem2|
			newhash[elem1] = elem2
		end
		newhash
	end
	def index_by
		newhash = {}
		self.each do |elem|
			newhash[yield elem] = elem
		end
		newhash
	end
	def subarray_count
		#Not Yet Available Due To Laziness
	end
	def occurences_count
		#Not Yet Available Due To Laziness
	end
	def densities
		#Not Yet Available Due To Laziness
	end
end

myhash = [[:one,1],[:two,2]].to_hash
p myhash
myhash = ['John Coltrane', 'Miles Davis'].index_by { |name| name.split(' ').last }
p myhash
