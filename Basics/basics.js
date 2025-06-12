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

//print the largest number in the array

function printLargestElement(arr) {
  let largestElem = arr[0];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > largestElem) {
      largestElem = arr[i];
    }
  }
  return largestElem;
}

//find the second largest element in the array

function findSecondLargestElement(arr) {
  const lenghtOfArr = arr.length;
  let largestElement = -Infinity;
  let secondLargestElement = -Infinity;

  for (let i = 0; i < lenghtOfArr; i++) {
    if (arr[i] > largestElement) {
      secondLargestElement = largestElement;
      largestElement = arr[i];
    }

    if (arr[i] < largestElement && arr[i] > secondLargestElement) {
      secondLargestElement = arr[i];
    }
  }

  return secondLargestElement === -Infinity ? null : secondLargestElement;
}

const arr = [70, 70, 70, 50];
const result = findSecondLargestElement(arr);
console.log(result);
