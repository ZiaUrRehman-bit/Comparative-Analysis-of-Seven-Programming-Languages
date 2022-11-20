using System;
using System.Diagnostics;
namespace sum
{
   class Program
   {
       static void Main(string[] args)
       {
           int iterations = 10000000;
           double x = 0;
           Stopwatch stopwatch = Stopwatch.StartNew();
           for (int i = 0; i<iterations ; i++) {
               x = x + i;
           }
           stopwatch.Stop();
           Console.WriteLine("Sum: " + x);
           Console.WriteLine("micros_used: " + stopwatch.ElapsedMilliseconds * 1000);
       }
   }
}
