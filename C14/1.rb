require 'net/http'  

class Site

end

class Link  
	attr_accessor :value

	def download  
		http_response = Net::HTTP.get_response(URI.parse(value))  
		
		File.open('content.html', 'w') do |infile|
			infile.write(http_response.body)
		end
		#puts http_response.body  
	end
end

class Page

	def viewContent
		File.open("content.html", "r") do |infile|
   			 while (line = infile.gets)
        			puts line
    			end
		end
	end

	def getLinks
		links = Hash.new
		File.open('content.html', 'r') do |infile|
			while(line = infile.gets)
				 
			end
		end
	end
end

s = Link.new
s.value = 'http://en.wikipedia.org/wiki/Tuesday'
s.download 

p = Page.new

p.viewContent
