/*
printing start pattern
 *  *  *  * 
 *  *  *  * 
 *  *  *  * 
 *  *  *  * 
*/

function printSquare(numberOfRows) {
  for (let i = 0; i < numberOfRows; i++) {
    let temp = "";
    for (let j = 0; j < numberOfRows; j++) {
      temp += " * ";
    }
    console.log(temp);
  }
}

/*
printing start pattern

* 
* * 
* * * 
* * * * 

*/

function printHalfPyramid(numberOfRows) {
  for (let i = 0; i < numberOfRows; i++) {
    let temp = "";
    for (let j = 0; j < i; j++) {
      temp += "* ";
    }
    console.log(temp);
  }
}

/*
printing start pattern

   *        numberOfRows 4 - i -1
  * *       numberOfRows 4 - 1 -1
 * * *      numberOfRows 4 - 2 -1
* * * * 

*/

function printFullPyramid(numberOfRows) {
  for (let i = 0; i < numberOfRows; i++) {
    let temp = "";
    for (let j = 0; j < numberOfRows - i - 1; j++) {
      temp += " ";
    }

    for (let j = 0; j < i + 1; j++) {
      temp += " *";
    }

    console.log(temp);
  }
}

printFullPyramid(5);
