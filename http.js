var http=require("http");
http.createServer(function(request,response){
    response.writeHead(200,{
        "Content-Type":"text/html"
    });
    response.write("<h1>Hello, CrispElite</h1>");
    response.end("<p>Bye bye!</p>");
}).listen(3000);

console.log("你的服务器已经启动！");
