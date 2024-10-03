use tokio::time::{sleep, Duration};

#[tokio::main]
async fn main() {
    let task = async {
        sleep(Duration::from_secs(2)).await;
        "result"
    };

    let result = task.await;
    println!("{}", result);
}

