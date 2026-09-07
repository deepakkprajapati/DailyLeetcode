/**
 * Time:   O(N)
 * Space:  O(1)
 * Strategy: Itertive [Bottom-up Dynamic Programming]
 */
const solve = (n: number): number => {
    if (n < 2) return n;
    let prev0 = 0;
    let prev1 = 1;
    let result = 0;
    for (let i = 2; i <= n; i++) {
        result = prev0 + prev1;
        prev0 = prev1;
        prev1 = result;
    }
    return result;
};
/**
 * Local testing
 */
interface TestCase {
    args: number; 
    expected: number;
}
function test(): void {
    const testCases: TestCase[] = [
        { args: 2, expected: 1 },
        { args: 3, expected: 2 },
        { args: 4, expected: 3 }
    ];
    testCases.forEach(({ args, expected }, index) => {
        const result = solve(args);
        const isPassed = result === expected;
        const status = isPassed ? "✅ PASS" : "❌ FAIL";
        console.log(
            `${status} | Test #${index + 1}: ` +
            `Input: ${JSON.stringify(args)} | ` +
            `Expected: ${expected} | ` +
            `Result: ${result}`
        );
    });
}
test();
export {}; // This forces the file to be treated as a module with its own scope