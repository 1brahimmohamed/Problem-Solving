type ToBeOrNotToBe = {
    toBe: (val: any) => any;
    notToBe: (val: any) => any;
};

function expect(val: any): ToBeOrNotToBe {
    let testVal = val;

    return {
        toBe: (trueVal) => {
           if ( testVal === trueVal )
            return true;
          else
            throw new Error('Not Equal');
        },
        notToBe: (trueVal) => {
          if ( testVal === trueVal )
            throw new Error('Equal');
          else
            return true;
        }
    }
};

