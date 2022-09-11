const fs= require('fs');
fs.writeFile("hello.txt",
'hello world from the world',
{
    encoding:'utf-8',
    flag:'w'
},
(err)=>{
    if(err)
    {
        console.log('issues with file writing');
    }
    else
    {
        console.log("file written ")
    }
}
);//asychronus function