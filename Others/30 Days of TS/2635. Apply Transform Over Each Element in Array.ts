function map(arr: number[], fn: (n: number, i: number) => number): number[] {

    let newArr = new Array<number>();

    for (let j= 0; j < arr.length; j++){
        newArr[j] = (fn(arr[j], j))
    }

    return newArr;
};
