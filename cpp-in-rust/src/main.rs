use libc::c_int;

#[link(name = "add", kind = "static")]
extern "C" {
    fn add(a: c_int, b: c_int) -> c_int;
}

fn main() {
    println!("1+2={}", unsafe { add(1, 2) });
}
