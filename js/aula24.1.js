const f=function (...valores){
    let res= 0
    for(let v of valores)
    res+=v
return res
}

console.log(f(10,12,12))