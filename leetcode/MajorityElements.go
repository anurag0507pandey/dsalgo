func majorityElement(nums []int) (candidate int) {
	cnt := 0
	for _, num := range nums {
		if cnt == 0 {
			candidate = num
			cnt++
		} else {
			if candidate == num {
				cnt++
			} else {
				cnt--
			}
		}
	}
	return
}
