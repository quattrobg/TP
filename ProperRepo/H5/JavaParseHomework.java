// Технологично училище "Електронни системи" <http://www.elsys-bg.org>
// 11Б
// №18
// Иван Пейчинов
// Да се събират се числата от 6-тата колона на CSV документ

import java.io.FileReader;
import java.io.BufferedReader;

public class JavaParseHomework{
	public static void main(String[] args) throws Exception{
		BufferedReader buff=new BufferedReader(new FileReader("test.csv"));
		String[] line=new String[20];
		String[] arr=new String[2];
		int sum=0;
		int i;

		for(i=0; i<30; i++){
			line[i] = buff.readLine();
			if(line[i] == null){
				break;
			}else{
				arr=line[i].split(",");
				sum+=Integer.parseInt(arr[5]);
			}
		}
		System.out.println(sum);
	}
}
