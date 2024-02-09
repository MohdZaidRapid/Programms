function frequency(s) {
    const  obj={}
    for(const char of s){
        if(char in obj){
            obj[char]++;
        }else{
            obj[char]=1;
        }
    }
    return obj
} 

const obj1=frequency("repdaraarararararar");
console.log(obj1)
// /z->1


function frequency(str){
    const obj={}
    for(const char of str){
        if(char in obj){
            obj[char]++;
        }else{
            obj[char]=1;
        }
    }
}