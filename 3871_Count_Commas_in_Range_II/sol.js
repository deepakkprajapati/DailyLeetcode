/**
 * @param {number} n
 * @return {number}
 * Time:    O(log N)
 * Space:   O(1)
 * Strategy: Maths
 */
var func = function(n) {
    let result = 0;
    for (let i = 1000; i <= n; i=i*1000) {
        result += n-i +1;
    }return result
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: 1002, expected: 3 },
        { args: 998, expected: 0 },
        { args: 1004590, expected: 1008182 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = func(args);
        const status = (result === expected) ? "✅ PASS" : "❌ FAIL";
        console.log(
            `${status} | Test #${index + 1}: ` +
            `Input: ${JSON.stringify(args)} | ` +
            `Expected: ${expected} | ` +
            `Result: ${result}`
        );
    });
}
test();