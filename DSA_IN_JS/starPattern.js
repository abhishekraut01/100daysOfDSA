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

      * 
    * * 
  * * * 
* * * * 

*/

function printHalfPyrami2(numberOfRows) {
  for (let i = 0; i < numberOfRows; i++) {
    let temp = "";
    for (let j = 0; j < numberOfRows - i +1; j++) {
      temp += "  ";
    }
    for (let j = 0; j < i; j++) {
      temp += ` *`;
    }
    console.log(temp);
  }
}

printHalfPyrami2(5)

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

/*
printing start pattern

   1        numberOfRows 4 - i -1
  1 2       numberOfRows 4 - 1 -1
 1 2 3      numberOfRows 4 - 2 -1
1 2 3 4 

*/

function printNumberPyramid(numberOfRows) {
  for (let i = 0; i < numberOfRows; i++) {
    let temp = "";
    for (let j = 0; j < numberOfRows - i - 1; j++) {
      temp += " ";
    }

    for (let j = 0; j < i + 1; j++) {
      temp += ` ${j+1}`;
    }

    console.log(temp);
  }
}


/*
printing start pattern

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/

function printInvertedNumberPyramid(numberOfRows) {
  for (let i = 0; i < numberOfRows; i++) {
    let temp = "";

    for (let j = 0; j < numberOfRows - i; j++) {
      temp += ` ${j+1}`;
    }

    console.log(temp);
  }
}

