type Counter = {
type Counter = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): Counter {
    let original = init;
    let count = init;

    return {
        increment: (): number => {
            return count += 1;
        },
        decrement: (): number => {
            return count -= 1;
        },
        reset: (): number => {
            count = original
            return count;
        }
    }
};
