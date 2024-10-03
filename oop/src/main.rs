trait Animal{
    fn get_type(&self)->String{
        return "Animal".to_string()
    }
}

struct Dog{}

impl Animal for Dog{
    fn get_type(&self)->String{
        return "Dog".to_string()
    }
}

struct Cat{}

impl Animal for Cat{
    fn get_type(&self)->String{
        return "Cat".to_string()
    }
}

fn func(animal:impl Animal){
    println!("{}",animal.get_type());
}

fn main() {
    let dog = Dog{};
    let cat = Cat{};

    func(dog);
    func(cat);
}
