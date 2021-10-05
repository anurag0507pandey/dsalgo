var longestCommonPrefix = function(strs) {
  let prefix = '';
    if (Array.isArray(strs)){
        strs[0].split('').some(str=>{
            let s = str;
            if(s.length >0 && strs.every(v=> v.includes(s))){
                prefix += s;
            }else{
              return true;
            }
        })
    }
    return prefix;
};
