package main

import (
    "fmt"
    "log"
    "bufio"
    "os"
//    "strconv"
)

func main() {
    file, err := os.Open(os.Args[1])
    if err != nil {
        log.Fatal(err)
    }   
    defer file.Close()
    scanner := bufio.NewScanner(file)
    for scanner.Scan() {
	line := scanner.Text()
	fmt.Println(line)
	
	/*
	// string to float
        value, err := strconv.ParseFloat(line, 64)
        if err != nil {
           fmt.Println(err)
           os.Exit(2)
        }
	*/

    }   
}