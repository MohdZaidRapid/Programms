// 2 Write a program to check if the given string is Palindrome or not

// function check_palindrome(str) {
//   let j = str.length - 1;
//   for (let i = 0; i < j ; i++) {
//       let x = str[i] ;//forward character
//       let y = str[j] ;//backward character
//       if (x != y) {
//           return false;
//       }
//       j--;
//   }
//    return true 

// }

function checkPalindrome(str) {
  const n = str.length;
  
  for (let i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
    if (str[i] !== str[j]) {
      return false;
    }
  }
  
  return true;
}

// const inputString = "racecar"; // Change the string to test
// const isPalindrome = checkPalindrome(inputString);
// console.log(`Is "${inputString}" a palindrome? ${isPalindrome}`);


let ans=checkPalindrome("zaz");
if(ans){
  console.log("palindrome")
}else{
  console.log("Not a palindrome")
}
