import java.util.*;
import java.io.*;

public class Main {

	public static void main (String[] args) {
		try {
			File file = new File(args[0]);
			BufferedReader in = new BufferedReader(new FileReader(file));
			for(String line = in.readLine(); line != null; line = in.readLine()) {
				doChallenge(line);
			}
			in.close();
		} catch(IOException e) {}
	}

	public static void doChallenge(String line) {
		String[] tokens = line.split("\\s");
		if (tokens.length > 0) {
		
		
			
		}
	}
}