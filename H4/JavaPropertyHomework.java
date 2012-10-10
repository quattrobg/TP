// Технологично училище "Електронни системи" <http://www.elsys-bg.org>
// 11Б
// №18
// Иван Пейчинов
// Да се създаде програма, която да изкарва на екрана стойността на системните свойства по зададени от командния ред имена на свойствата. Програмата трябва да приема и невалидни имена. Ако последния подаден аргумент от командния ред е up то стойностите показани в изхода трябва да са сортиран във възходящ ред. Ако последната стойност е down изходът трябва да е сортиран в низходящ ред. Стойността по подразбиране, ако не е посочено up или down, е up.


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
