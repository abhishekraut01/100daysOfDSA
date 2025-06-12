//write a function that serches element in the array and return its index and if element is not found then it returns -1

function searchForElement(arr, element) {
  const len = arr.length;

  for (let i = 0; i < len; i++) {
    if (arr[i] === element) {
      return i;
    }
  }
  return -1;
}

//write a code to count negative numbers in array and return it
function countNegativeNumber(arr) {
  let count = 0;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] < 0) {
      count++;
    }
  }

  return count;
}
const arr = [1,3,5,3,6,7,5,2,1,-1,-2]
const result = countNegativeNumber(arr)
console.log(result)