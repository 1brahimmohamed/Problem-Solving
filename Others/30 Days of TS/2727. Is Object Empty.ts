type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | JSONValue[]

function isEmpty(obj: Obj): boolean {
    if (obj === null) return true;
    if (obj === undefined) return true;
    if (obj instanceof Array) return obj.length === 0;
    if (typeof obj === 'object') return Object.keys(obj).length === 0;

    return false;
};
