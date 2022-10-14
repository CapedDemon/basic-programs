const generateEvenNumber = (limit)=>{
    for(let i = 1;i<=limit;i++){
        if(i%2 == 0){
            console.log(i)
        }
    }
}

generateEvenNumber(100)