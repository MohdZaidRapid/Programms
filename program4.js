function sortNumbers(nums) {
  const n = nums.length;

  // for (let i = 0; i < n - 1; i++) {
  //   for (let j = n-1; j < n - i - 1; j++) {
  //     if (nums[j] > nums[j + 1]) {
  //       // Swap nums[j] and nums[j + 1]
  //       const temp = nums[j];
  //       nums[j] = nums[j + 1];
  //       nums[j + 1] = temp;
  //     }
  //   }
  // }

  // return nums;

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      if (nums[i] < nums[j]) {
        let temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }
  return nums;
}

const numbers = [5, 2, 9, 1, 5, 6]; // Change the array as needed
const sortedNumbers = sortNumbers(numbers);
console.log("Sorted numbers:", sortedNumbers);
