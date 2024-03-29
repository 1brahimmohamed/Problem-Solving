type Fn = (accum: number, curr: number) => number

function reduce(nums: number[], fn: Fn, init: number): number {
    if (nums.length === 0 )
        return init;

    for (let j= 0; j < nums.length; j++){
        init = fn(init, nums[j])
    }

    return init;
};
