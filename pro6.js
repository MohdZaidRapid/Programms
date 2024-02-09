function replaceSubstring(inputStr, targetStr, replacementStr) {
    const resultStr = inputStr.replace(targetStr, replacementStr);
    return resultStr;
  }
  
  const inputString = "Hello, World! Hello, Universe!";
  const targetSubstring = "Hello";
  const replacementSubstring = "Hi";
  const replacedString = replaceSubstring(inputString, targetSubstring, replacementSubstring);
  console.log("Replaced string:", replacedString);
  