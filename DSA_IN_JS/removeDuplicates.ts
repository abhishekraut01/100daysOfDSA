function removeDuplicatesBruteForcefirst(nums: number[]): number {
    //Create temp array
    //check if the elem is already present in the temp if not push and if yes continue

    const temp:number[] = [];

    for(let i=0; i<nums.length; i++){
        if(!temp.includes(nums[i])){
            temp.push(nums[i])
        }
    }
    nums.length = 0;

    for(let i=0; i<temp.length; i++){
            nums.push(temp[i])
    }

    return temp.length;
};

//this code i throught and coded and its time complexity is n^2

function removeDuplicates(nums: number[]): number {
    // The second appraoch is to transfer all araay into set 
    const temp = new Set(nums)
    nums.length = 0;
    nums.push(...temp)
    return nums.length;
};

//this is more optimized way and have O(n) time complexity


function removeDuplicatesOptimized(nums: number[]): number {
    //and here is one of the most optimized approach two pointerrrrrr 
    let x = 0;
    for(let i=0; i<nums.length; i++){
        if(nums[i] > nums[x]){
            x++
            nums[x] = nums[i]
        }
    }
    return x+1;
};