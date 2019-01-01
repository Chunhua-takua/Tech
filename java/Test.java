public class Test {
	public static void main(String[] args) {
		StringBuilder sb = new StringBuilder();
		sb.append("son of a ").append("bitch");
		System.out.println(sb);
		
		String str = "son of ";
		str = str + "a bitch";
		System.out.println(str);
	}
}