// recebimento = 0
// for(let i=0; 1>0; i++){
// console.log("o valor é: ", + i)
// recebimento += i**10
// console.log("-----------------------------------------------------------------------------" + recebimento)
// }
let time1=0, time2=0
for(let i=0;i !== 100;i++){
    if(i%2 == 0)
        time1 += 1
    else
        time2 += 1
}
console.log("time 1 = " + time1)
console.log("time 2 = " + time2)