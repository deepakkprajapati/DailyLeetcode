/**
 * @param {string} args1
 * @param {Number} args2
 * @return {string}
 * Time:    O(N^2)
 * Space:   O(N)
 * Strategy: String, array manupilation
 */
var func = function(s, k) {
    while (s.length > k) {
        let groups = [];
        for (let i = 0; i < s.length; i += k) {
            let group = s.slice(i, i+k);
            let sum = [...group].reduce((acc, curr) => acc + +curr, 0);
            groups.push(sum);
        }
        s = groups.join("");
    }
    return s
};
/**
 * Local testing
 */
function test() {
    const testCases = [
        { args: ["11111222223", 3], expected: "135" },
        { args: ["00000000", 3], expected: "000" },
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = func(...args);
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
