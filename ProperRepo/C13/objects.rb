class Objects

attr_accessor :value

#	def method
		#puts "Something"
		#i = 10
		#= begin i-2
#		if (i==8)
	#		return true
		#end
#	end
	
#	private 
#	def method_private
#	puts "smt"
#	end

=begin
	def value=(v)
		@value = v
	end
	
	def value
		@value
	end

	def method
	end
=end

end

o = Objects.new
#o.method
#o.send("method") #introspection
#o.send(:method_private) #introspection    
#p o.method
o.value = 10
p o.value
