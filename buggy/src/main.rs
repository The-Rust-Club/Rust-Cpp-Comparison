struct Buggy {
    bugs: String,
}

fn get_some_bug(b: Buggy) -> &[u8] {
    b.bugs.as_bytes()
}

fn main() {
    let bug = Buggy {
        bugs: "It literally bugs".to_string(),
    };
    get_some_bug(bug);
}
