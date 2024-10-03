use std::thread;
use std::time::Duration;

fn main() {
    let handle1 = thread::spawn(|| {
        println!("Thread 1 start");
        thread::sleep(Duration::from_secs(1));
        println!("Thread 1 end");
    });

    let handle2 = thread::spawn(|| {
        println!("Thread 2 start");
        thread::sleep(Duration::from_secs(2));
        println!("Thread 2 end");
    });

    handle1.join().unwrap();
    handle2.join().unwrap();
}
