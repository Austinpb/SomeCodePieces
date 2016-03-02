var http = require('http');
var server = http.createServer();
server.on('request', function(req.res){
    res.end('hello world');
});
server.listen(3000)

console.log("aaa");
