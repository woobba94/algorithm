const arr = [2, 3, 1, 2, 4, 5, 6, 1, 2, 3, 7, 8, 1, 2];

const sort = (arr) => {
    const result = arr;
    for (let i = 0; i < result.length - 1; i++) {
        for (let j = i + 1; j < result.length; j++) {
            if (result[i] > result[j]) {
                let temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    return result;
}

console.log(sort(arr));