const chamado=(...valores)=>{
    const soma=val=>{
        let res=0
        for(v of val)
            res+=v
        return res
    }
    return soma(valores)
}

console.log(chamado(10,10,10))