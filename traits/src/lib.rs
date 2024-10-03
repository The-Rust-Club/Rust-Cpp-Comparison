pub trait Fly {
    fn fly(&self);
}

pub trait Eat {
    fn eat(&self);
}

pub trait Weight {
    fn weight(&self);
}

pub trait Length {
    fn length(&self);
}

#[allow(dead_code)]
struct Bird;
#[allow(dead_code)]
struct Stick;
#[allow(dead_code)]
struct Cow;

impl Fly for Bird {
    fn fly(&self) {
        println!("Bird is flying");
    }
}

impl Eat for Bird {
    fn eat(&self) {
        println!("Bird is eating");
    }
}

impl Weight for Bird {
    fn weight(&self) {
        println!("Bird is 1kg");
    }
}

impl Length for Bird {
    fn length(&self) {
        println!("Bird is 20cm");
    }
}

impl Eat for Cow {
    fn eat(&self) {
        println!("Cow is eating");
    }
}

impl Weight for Cow {
    fn weight(&self) {
        println!("Cow is 500kg");
    }
}

impl Length for Cow {
    fn length(&self) {
        println!("Cow is 2m");
    }
}

impl Weight for Stick {
    fn weight(&self) {
        println!("Stick is 0.1kg");
    }
}

impl Length for Stick {
    fn length(&self) {
        println!("Stick is 1m");
    }
}
