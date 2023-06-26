【说明】
index.html 使用fib.wasm 

indexjs.html 使用纯javascript脚本

两个比较执行时间，可以看出调用wasm的网页效率明显提高

【部署】
在本目录执行python3的http服务器，快速验证
python3 -m http.server 8080

