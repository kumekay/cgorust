package main

import (
  "fmt"
  "math"
)

const test = 14

func main() {
  fmt.Printf("Hello, World!\n")
  fmt.Printf("test: %d\n", test)
  var l float64
  _, err := fmt.Scanf("%f", &l)
  if err != nil {
      fmt.Println("Not a valid number")
    } else {
      fmt.Printf("L is: %f\n", math.Sqrt(l))
  }
  say(4);
}

func say(n int) {
    fmt.Printf("Say: %d!\n", n)
    fmt.Printf("Test from say: %d!\n", test)
}
