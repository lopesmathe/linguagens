function* per(){
    const nome=yield 'qual o seu nome'
    const esporte=yield 'qual o seu esporte'
    return "seu nome he, " + nome + "e o seu esporte he, " + esporte
}

const itp=per()
console.log(itp.next().value)
console.log(itp.next('matheus').value)
console.log(itp.next('luta').value)