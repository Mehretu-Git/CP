func totalNumbers(digits []int) int {
    validDigits := make(map[int]int)
    for i := range digits {
        for j := range digits {
            for k := range digits {
                if i != j && j != k && i != k && digits[i] != 0  && digits[k] % 2 == 0 {
                        validDigits[100*digits[i] + 10*digits[j] + digits[k]] = 1
                }
            }
        }
    }
    return len(validDigits)
    
}