require 'net/http'
require 'uri'
require 'open-uri'

class Site
	@@link = "http://en.wikipedia.org/wiki/Minas_Tirith"
	@@protocol = "bob"

#	def initialize
		if @@link.include? 'https'
			@@protocol = "https"
		else
			@@protocol = "http"
		end
#	end

	def link; @@link; end
	def protocol; @@protocol; end
	
	def pages
		page = Page.new
		page.links
	end
end

class Link  
	@@link = "http://en.wikipedia.org/wiki/Minas_Tirith"

	def link; @@link; end

	def download  
		http_response = Net::HTTP.get_response(URI.parse(@@link))  
		
		File.open('content.html', 'w') do |infile|
			infile.write(http_response.body)
		end
		#puts http_response.body  
	end
end

class Page
	@@link = "http://en.wikipedia.org/wiki/Minas_Tirith"

	http_response = Net::HTTP.get_response(URI.parse(@@link))
	@@content = http_response.body

	@@links = @@content.scan(/a *?href *?= *?\"(.*?)"/)

	def link=(val); @@link = val; end
	def content=(val); @@content = val; end

	def link; @@link; end
	def content; @@content; end
	
	def links
#		@@links.each do |l|
#			puts l
#		end
		for i in 0..25
			puts @@links[i]
		end
	end
end
