function createCounter(n: number): () => number {
    let counter = n - 1;
    
    return function(): number {
        return counter += 1;
    }
}
