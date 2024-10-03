fn main() {
    let mut vector = vec![1, 2, 3, 4, 5, 6, 7, 8];
    // multiply by two
    vector.iter_mut().for_each(|x| *x *= 2);

    // sum up
    let sum: i32 = vector.iter().sum();

    println!("{vector:?}");
    println!("{sum}");
}
