public class HelloWorld{
	private static int l;
	public static void main(String [] args){
		System.out.println("Helloooooo I'm Lindsay Lohan :D!");

		int sum = 0;
		for(int i=0; i<=100; i++){
			l += i;
		};

		System.out.println(l);

		int[] arr = new int [10];

		for(int i=0, j=0; i<100; i++){
			if(i%2 == 1){
				j++;
				arr[j] = i;
			}
			if(j==9){
				break;
			}
		}

		for(int i=0; i<10; i++){
			System.out.println(arr[i]);
		};
	}
}
