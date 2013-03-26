
class UglyArr
	def initialize
		@arr=Array.new(30){Array.new(30)}
	end

	def setAll(val)
		for i in 0..num
			for j in 0..fr
				@arr[i][j]=0
			end
		end
	end

	def ret(num,fr)
		return @arr[num][fr]
	end

	def plus(num,fr,val)
		@arr[num][fr]=val
	end

	def most(num, fr)
		max=0
		for i in 0..num
			for j in 0..fr
				if @arr[i][j]>max
					max=@arr[i][j]
				end
			end
		end

		for i in 0..num
			for j in 0..fr
				if @arr[i][j]==max
					return j
				end
			end
		end
	end
end

class Friendly
	@bestFr=UglyArr.new

#	def initialize
#		for i in 0..30
#			for j in 0..30
#				@bestFr.plus i, j, 0
#			end
#		end
#	end

	def initialize
		@bestFr.setAll(0)
	end

	def give
		lists=Dir.glob("*.csv")

		for l in lists
			num=0
			fr=0
			CSV.foreach(l) do |row|
				if(num!=0)
					@bestFr.plus(fr, num, @bestFr.ret(fr, num)+1)
				end
				num+=1
				fr=row[0].to_i
			end
		end
		
		for i in 0..29
			print "#{i} -> "
			print @bestFr.most 30, 30
		end
	end
end

