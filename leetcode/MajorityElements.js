var majorityElement = function(nums) {
    
    let majorityElement = 0, counter = 0;
    
    for(let num of nums){
        if(counter == 0) majorityElement = num;
        majorityElement == num ? counter++: counter--;
    }
    
    return majorityElement;
};
