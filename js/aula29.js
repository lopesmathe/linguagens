function aluno(nota,nome){
    this.nome=nome
    this.nota=nota
    
    this.dado_anonimos=function(){
        setTimeout(function(){
            console.log(this.nome)
            console.log(this.nota)
        },2000)
    }

    this.dados_arrow=function(){
        setTimeout(()=>{
            console.log(this.nome)
            console.log(this.nota)
        },2000)
    }
}

const alt=new aluno("bruno",100)
all.dado_anonimos()
all.dados_arrow()