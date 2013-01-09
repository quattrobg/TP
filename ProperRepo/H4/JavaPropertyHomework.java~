// Технологично училище "Електронни системи" <http://www.elsys-bg.org>
// 11Б
// №18
// Иван Пейчинов
// Да се събират се числата от 6-тата колона на CSV документ и сбора им се извежда на екрана.

import java.util.Arrays;
import java.util.Collections;

public class JavaPropertyHomework{
	public static void main(String[] args){
		int n=args.length;
		String[] arr=new String[n];

		for(int i=0; i<n; i++){
			arr[i]=System.getProperty(args[i]);
			if(arr[i] == null){
				arr[i] = "Invalid";
			}
		}

		if(args[n-1].matches("up") == true){
			Arrays.sort(arr);
		}else{
			Arrays.sort(arr, Collections.reverseOrder());
		}

		for(String str:arr){
			if(str != "Invalid"){
				System.out.println(str);
			}
		}
	}
}
