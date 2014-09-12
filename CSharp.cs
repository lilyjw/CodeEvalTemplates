using System.IO;
using System.Collections.Generic;
using System;

class CSharp
{
    static void Main(string[] args)
    {
        using (StreamReader reader = File.OpenText(args[0]))
        while (!reader.EndOfStream)
        {
            string line = reader.ReadLine();
            if (null == line)
                continue;
          
			doChallenge(line);
        }
    }
    
    private static void doChallenge(string line) {
			string[] tokens = line.Split(' ');
			
			
			
	}
}