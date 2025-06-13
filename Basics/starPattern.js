//printing start pattern

function printSquare(numberOfRows) {
  let temp = "";
  for (let i = 0; i < numberOfRows; i++) {
    for (let j = 0; j < numberOfRows; j++) {
      temp += "* ";
    }
    console.log(temp)
    temp = ""
  }
}
printSquare(4)
