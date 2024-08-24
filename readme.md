# Extreme Math

Welcome to **Extreme Math**! This is a fun and challenging math game where your task is to solve **`Equations`** and find the answer to that little \( x \). Test your skills and see how many equations you can solve correctly in the time given to you!

> [!TIP]
> Timer is in the [Todo List](#todo), be sure to check that out!


## Main Features of The Game
- **Randomized Equations**: Each equation is unique, generated with random coefficients and constants.
- **Integer Solutions Only**: No need to worry about decimals—just simple and clean integer answers.
- **Replayability**: Play as many rounds as you want. Each time, you'll face a new equation to solve.

## How to Play
### Windows Users
For you Windows users, I've programmed a GitHub Actions `build.yml` that builds the game executable for Windows each time we change the code here. You can download the game directly from the Releases tab on the repository's GitHub page.

Playing the game is easy for you Windows users! Just open the executable, and you're good to go!

### Linux Users
Because many Linux users already have `g++` or `clang++` installed on their systems by default, I didn't see compiling it using `GitHub Actions` as necessary. Therefore, I didn't compile a version for Linux. However, you can compile it using the toolkits installed on your system.

> [!NOTE]
> If you're unsure how to compile the game, check out the **[Compilation and Running](#compilation-and-running)** section!

## Compilation and Running

### Requirements
- A C++ compiler (e.g., `g++`, `clang++`)
- Basic knowledge of C++ to compile and run the program

### Using Make for Compilation

To simplify the compilation process and manage project dependencies efficiently, we recommend using `make` along with a `Makefile`. This method automates the build process, ensuring that all source files are compiled correctly and the resulting executable is placed in the designated build directory.

#### Compiling with Make

Open your terminal or command prompt, navigate to the project directory, and simply run:

```bash
make
```

This command will compile all the source files listed in the `Makefile` and place the final executable in the `build` directory.

### Running the Game

Once compiled, you can run the game by executing the compiled binary located in the `build` directory. If you need to pass command-line arguments (such as enabling debug mode), you can do so like this:

```bash
./build/extreme_math --debug
```

This approach helps keep your project organized and ensures that all necessary files are compiled and linked correctly.

## Todo
Here is the **TODO** list. I've already completed the checked items and am still working on the unchecked ones.
- [x] Add a debugger mode.
- [x] Add more levels to play.
- [x] Add a simple `TUI` (Text User Interface) to choose between levels.
- [ ] Add a `Timer`.

> [!NOTE]
> You can open an issue at any time, requesting a new feature. While I'm continuously adding new features, you can also contribute to the game this way! If you need guidance on how to open a new issue, check out the **[Non-Programming Contributions](#non-programming-way)** section.

## Contributing
### Programming Way
You're welcome to contribute by submitting pull requests for new features, improvements, or bug fixes. If you're new to GitHub, simply search `How to fork & open a new pull request in GitHub` to learn how.

### Non-Programming Way
If you don't know C++ but still want to help improve the game, you can open a new issue on our GitHub to suggest features. We'll review all your ideas and mark them as `TODO` if needed.

> [!CAUTION]
> Don't post already added TODOs or unrelated suggestions. Examples:
> - Add a simple timer to the game! <-> ISSUE: Already added in [Todo List](#todo)
> - Add a cool video background!! <-> ISSUE: No need, as it will actually break the focus.

## License
I initially considered selling this game, but I decided to make it Open Source instead. This way, we can improve the game better and faster. I'd love to see big projects like **JetBrains** or **Unity** become *Fully Open Source*. 

By the way, don't forget that this project is open-source and available under the [MIT License](LICENSE).

## Donating
If you really want to donate and help me with "The Money," I have to say I don't actually need it—seriously. However, you can contribute by helping improve the overall game. I have a job, and I must admit that this game is just how I spend my free time. So, I don't need your money—save it for later!
