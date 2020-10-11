#include <bits/stdc++.h>
using namespace std;
bool isPrime(long int n){
  if (n == 1){
    return false;
  }
  int i = 2;
  while (i*i <= n)
  {
      if (n % i == 0)
      {
          return false;
      }
      i += 1;
  }
  return true;
}
int main(){
    time_t start, end;

    /* You can call it like this : start = time(NULL); 
     in both the way start contain total time in seconds  
     since the Epoch. */
    time(&start);

    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);

    int n = 100000;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
            count++;
    }
    cout << count<<"\n";
    // Recording end time.
    time(&end);

    // Calculating total time taken by the program.
    double time_taken = double(end - start);
   
    cout<<time_taken;
    return 0;
}
