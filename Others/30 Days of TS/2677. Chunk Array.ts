type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | Array<JSONValue>;


function chunk(arr: Obj[], size: number): Obj[][] {
    const chunkedArray: Obj[][] = [];

  for (let i = 0; i < arr.length; i += size) {
    chunkedArray.push(arr.slice(i, i + size));
  }

  return chunkedArray;
};


// function chunk(arr: Obj[], size: number): Obj[][] {
//     let newArr: Obj[][] = [];
//     let innerArr: Obj[] = [];

//     for (let i = 0; i <= arr.length - 1; i+= size){
        
//         for (let j = 0; j < size; j++){
//             if (i+j < arr.length)
//                 innerArr.push(arr[i+j])
//         }
//         newArr.push(innerArr);
//         innerArr = [];
//     }

//     return newArr;
// };

