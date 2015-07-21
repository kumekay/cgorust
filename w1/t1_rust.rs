use std::io;

static TEST: i32 = 14;

fn main() {
    println!("Hello, World!");
    println!("test: {}", TEST);

    let mut l = String::new();

    io::stdin().read_line(&mut l)
        .ok()
        .expect("failed to read line");

    let l: i32 = l.trim().parse()
        .ok()
        .expect("Please type a number!");

    println!("L is: {}", (l as f64).sqrt());

    say(4);
}



fn say(n: i32)
{
    println!("Say: {}!", n);
    println!("Test from say: {}!", TEST);
}
