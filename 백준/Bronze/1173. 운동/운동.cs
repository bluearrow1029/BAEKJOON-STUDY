using System;

namespace CSharpPractice
{
    class Program
    {
        static int CalcTime(int N, int m, int M, int T, int R, int X, int time)
        {
            if (M - m < T)
            {
                return -1;
            }

            if (N == 0)
            {
                return time;
            }
            else if (X + T <= M)
            {
                X = X + T;
                N = N - 1;
            }
            else
            {
                if (X - R < m)
                {
                    X = m;
                }
                else
                {
                    X = X - R;
                }
            }
            time++;

            return CalcTime(N, m, M, T, R, X, time);
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();

            int N = int.Parse(s[0]);
            int m = int.Parse(s[1]);
            int M = int.Parse(s[2]);
            int T = int.Parse(s[3]);
            int R = int.Parse(s[4]);

            int time = CalcTime(N, m, M, T, R, m, 0);
            Console.WriteLine(time);
        }
    }
}