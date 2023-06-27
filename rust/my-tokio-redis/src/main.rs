async fn say_hello(){
    println!("world");
}

#[tokio::main]
async fn main(){
    let _op = say_hello().await;

    println!("hello");

    // op.await;
}
