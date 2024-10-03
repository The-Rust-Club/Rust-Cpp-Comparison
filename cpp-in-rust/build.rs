// https://cxx.rs/#cxx--safe-interop-between-rust-and-c
fn main(){
    println!("cargo::rerun-if-changed=src/lib.cpp");
    cc::Build::new()
        .cpp(true)
        .file("src/lib.cpp")
        .compile("add");

}
