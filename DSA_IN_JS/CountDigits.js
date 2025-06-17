//write a function that count a number of digits in number

function JugaduCountDigit(num){
    let count = 0;
    const temp = new String(num)
    count = temp.length
    return count
}

function JugaduCountDigit2(num){
    let count = 0;
    const temp = Math.abs(num).toString().split('')
    count = temp.length
    return count
}

function CountDigit(num){
    /*
        while(num>0){
        464 % 10  reminder = 4
        46 % 10   remainder = 6
        4 % 10   remainder = 4
        }
    */

   let count = 0
   let temp = Math.abs(num)
    while(temp > 0){
        temp = Math.floor(temp/10)
        count++;
    }
    return count
}

const result = CountDigit(749323413)
console.log(result)