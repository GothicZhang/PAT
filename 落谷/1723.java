package test;
import java.util.Scanner;
public class 1723 {
	public static void main(String[] args){
		int n;
		String str;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		while(n-- != 0){
			int y,x = 1;
			str = sc.next();  
			sc.nextLine();
			for(int i = 0;i < str.length();i++){
				for(int j = 2;j <= str.length();j++){
					if(j > i){
						String str1 = str.substring(i,j);
					    String str2 = new StringBuffer(str1).reverse().toString();
					    //System.out.println(str1);
				        if(str1.equals(str2)){
				        	y = str1.length();
				        	if(y > x)
				        		x = y;
				        }	
					}
			    }
			}
			System.out.println(x);
		}
		sc.close();
	}
}
