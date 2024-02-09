// 1 Write a program to find the Fibonacci series upto the nth term.
// 1,1,2,3,5 c=2+i
// function fibonacci(n) {
//     const fib=[]
//      fib[0] = 0;
//      fib[1] = 1;
//     for (let i = 2; i <= n; i++) {
//       fib[i] = fib[i - 1] + fib[i - 2];
//     }
//     return fib
//   }

function fib(n) {
  let prev = 0;
  let current = 1;
  let prevPrevNum;

  for (let i = 2; i < n - 1; i++) {
    prevPrevNum = prev; // 0
    prev = current; //prev 1
    current = prevPrevNum + prev; //current =1
  }
  return current;
}
const n = 10; // Change n to the desired term
const result = fib(n);
console.log(`Fibonacci series up to ${n} terms: ${result}`);
