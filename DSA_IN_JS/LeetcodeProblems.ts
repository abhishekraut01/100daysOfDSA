function isPalindrome(x: number): boolean {
    let temp:number = x
    let revesedNumber:number = 0;
    while(temp>0){
        /*
            121 % 10 = remainder 1 result =12       revesedNumber = 1
            12 % 10 = remainder  2 result =1        revesedNumber =12
            1 % 10 = remainder   0 result =1        revesedNumber =
         */
        let remainder = Math.floor(temp % 10);
        temp = Math.floor(temp/10);

        revesedNumber = revesedNumber*10 + remainder;
    }

    return revesedNumber === x ? true : false;
};

function reverse(x: number): number {
    const sign = Math.sign(x);
    const str = x * sign + '';
    let res = '';
    for (let i = str.length - 1; i >= 0; i--) {
        res += str[i];
    }
    const reverse = sign * Number(res);
    const limit = Math.pow(2, 31);
    if (reverse > limit - 1 || reverse < -limit) {
        return 0;
    }
    return reverse;
};

