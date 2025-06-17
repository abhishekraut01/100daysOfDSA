function removeElement(nums: number[], val: number): number {
    //lets use includes method first
    let temp:number[] = [];

    for(let i=0; i<nums.length; i++){
        if(nums[i] !== val){
            temp.push(nums[i])
        }
    }

    nums.length = 0;
    nums.push(...temp) 
    
    return nums.length;
};

//This technique will consume more momory and it is inefficient so we have to optimized it