# elder-tongue-translator

## About
Jasper's Elder Tongue Translator is a powerful and flexible translator for the
Elder Tongue cipher. "What is Elder Tongue?", you may ask. Elder Tongue is a
is a fictional cipher/language used in many of my worldbuilding projects. This
translator simplifies the process of translating to and from Elder Tongue.

## Installation
Acquire the sources
```
$ git clone https://github.com/jasper1378/elder-tongue-translator.git
$ cd elder-tongue-translator
```
Build
```
$ make
```
Install
```
$ make install
```

## Usage
```
Usage: elder-tongue-translator [options]
Options:

    -h
    --help
    Will print this help message.

    -v
    --verbose
    Translate in verbose mode.

    -1
    --english-to-elder-tongue
    Translate from English to Elder Tongue.

    -2
    --elder-tongue-to-english
    Translate from Elder Tongue to English

    -it "Lorem ipsum"
    --input-text "Lorem ipsum"
    Specify the phrase to translate. Make sure that "Lorem ipsum" is in double quotes.
    Optional if reading from file.

    -if "file.txt"
    --input-file "file.txt"
    Specify a file to read from. Make sure that your file has one phrase per line.
    Optional if providing phrase directly.

    -of "file.txt"
    --output-file "file.txt"
    Specify a file to write to. The file will have one phrase per line.
    Optional if you wish to print output to terminal.
```

## History
When I first created Elder Tongue, I had to do all the translations by hand, which was tedious and error prone. My first attempt to automate the translation came well before I was proficient in programming in the form of a spreadsheet. Though the spreadsheet was way better than the pen-and-paper method, it had several severe limitations. It could only do one word at a time, it had no support for upper case or special characters, etc. For all of its drawbacks, it served an important purpose in laying the groundwork for future translators.

Next came the first "real" translator. It was programmed in Java as a way to improve my skills as I was taking my first computer science course at school. It was a vast improvement over the first translator. But it still wasn't perfect. Although it added support for multiple words, upper case character and basic end-of-word punctuation; it wasn't able to deal with mid-word special characters  and left much to be desired in terms of efficiency. It was eventually forgotten as I moved on from Java.

Fast forward to the present. At the time of writing this, I am taking a C++ course online. In need of a project to practice my skills, I once again picked up the problem of building the perfect Elder Tongue Translator. And this time I succeeded. The C++ version fixed all of the issues from the Java version as well as adding many new features; support for all ASCII characters in any position, support for reading and writing to files, vastly improved performance as well as a transition to commandline arguments from the previous interactive mode. Support for this version will continue indefinitely and new features will continue to be added (if I can think of any more improvements that is).

## License
See [LICENSE.MD](LICENSE.md) for details.
