let sum = getRandomSum();

if (sum == 50) {
    console.log("correct");
} else {
    console.log("incorrect");
}

console.log(getRandomOperation());

function randomValue(max) {
    return Math.floor(Math.random() * max);
}
function getRandomSum() {
    let randomValue1 = randomValue(100);
    let randomValue2 = randomValue(100);

    console.log(`${randomValue1} + ${randomValue2} = `)

    return randomValue1 + randomValue2;
}


function getRandomOperation() {
    const possibleOperations = ["+", "-", "*", "/"];

    return possibleOperations[Math.floor(Math.random() * 5)];
}