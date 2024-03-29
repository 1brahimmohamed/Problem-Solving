class ArrayWrapper {
    array: number[]
    sum: number;
    
    constructor(nums: number[]) {
        this.array = nums;
        this.sum = 0;
        this.array.forEach((el: number)=>{
            this.sum += el;
        })
    }
    
    valueOf(): number {
        return this.sum;
    }
    
    toString(): string {
        return [] 
    }
};

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // '[1,2]'
 * String(obj2); // '[3,4]'
 */
