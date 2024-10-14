using System;

namespace CSharpPractice
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            int[] arr = new int[26];
            int count = 0;

            for (int i = 0; i < N; i++)
            {
                string s = Console.ReadLine();
                char[] c = s.ToCharArray();
                char first = c[0];

                arr[first - 'a']++;
            }

            for (int i = 0; i < 26; i++)
            {
                if (arr[i] >= 5)
                {
                    Console.Write((char)(i + 'a'));
                    count++;
                }
            }

            if(count == 0)
            {
                Console.WriteLine("PREDAJA");
            }
        }
    }
}