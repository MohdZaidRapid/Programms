function findNonRepeatingChars(str) {
  const charCount = {};
  const nonRepeatingChars = [];

  // Count the frequency of each character
  for (const char of str) {
    charCount[char] = (charCount[char] || 0) + 1;
  }

  // Iterate through the string and find non-repeating characters
  for (const char of str) {
    if (charCount[char] === 1) {
      nonRepeatingChars.push(char);
    }
  }

  return nonRepeatingChars;
}

const inputString = "programming"; // Change the string to analyze
const nonRepeating = findNonRepeatingChars(inputString);
console.log("Non-repeating characters:", nonRepeating);
