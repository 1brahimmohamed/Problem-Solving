type Fn = (n: number, i: number) => any

function filter(arr: number[], fn: Fn): number[] {

    let newArr = new Array<number>();

    for (let j= 0; j < arr.length; j++){
        if (fn(arr[j], j))
            newArr.push(arr[j])
    }

    return newArr;
};
