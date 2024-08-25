# 🧮 Extreme Math [📖 Wiki](https://github.com/sudo-arash/extreme_math/wiki)

Welcome to **Extreme Math**! 🎉 This isn’t just another math game—it’s a thrilling adventure where your mission is to solve **`Equations`** and uncover the mystery of that sneaky little \( x \). 🕵️‍♂️ Can you solve the puzzles before the time runs out? ⏳ Let’s see if you’ve got what it takes!

> [!TIP]
> The Timer feature is on our [Todo List](#todo), so stay tuned! ⏰

## 🚀 Main Features of The Game
- **Randomized Equations**: 🎲 Every equation is unique, crafted with random coefficients and constants. No two games are the same!
- **Integer Solutions Only**: ✖️➕➖ You won’t have to worry about pesky decimals—just good ol’ integer answers.
- **Replayability**: 🔄 Play again and again! Each round brings a fresh equation to crack.

## 🎮 How to Play
### 🖥️ Windows Users
Good news, Windows warriors! 🏆 I’ve set up a GitHub Actions `build.yml` that compiles the game’s executable every time we tweak the code. Just head over to the Releases tab on our GitHub page, download the latest version, and you’re ready to dive into the game! 🎯

### 🐧 Linux Users
For the Linux legends out there, I didn’t find it necessary to compile a version using `GitHub Actions` because you likely have `g++` or `clang++` already installed. No worries, though! You can easily compile the game yourself using your system’s toolkits. 💻

> [!NOTE]  
> If compiling sounds daunting, check out the **[Compilation and Running](#compilation-and-running)** section for a step-by-step guide!

## ⚙️ Compilation and Running

### 🛠️ Requirements
- A C++ compiler (e.g., `g++`, `clang++`)
- Basic knowledge of C++ to compile and run the program

### 🔨 Using Make for Compilation

To make your life easier and keep everything organized, we recommend using `make` along with a `Makefile`. This will handle the compilation process for you, ensuring all source files are properly compiled and the executable lands in the right place.

#### ⚡ Compiling with Make

Fire up your terminal, navigate to the project directory, and simply run:

```bash
make
```

This command will gather all the source files listed in the `Makefile` and place the final executable in the `build` directory.

### 🎲 Running the Game

Once the game is compiled, you can start playing by running the compiled binary in the `build` directory. Want to enable debug mode or other options? Just pass the command-line arguments like this:

```bash
./build/extreme_math --debug
```

This method keeps everything tidy and ensures all necessary files are compiled and linked correctly. 🧩

## 📝 Todo
Here’s our **TODO** list! I’ve already checked off the completed items and am still working on the others. Feel free to add more if you think of anything cool! 🌟
- [x] Add a debugger mode. 🐛
- [x] Add more levels to play. 🎮
- [x] Add a simple `TUI` (Text User Interface) to choose between levels. 📋
- [ ] Add a `Timer`. ⏱️

> [!NOTE]
> You can open an issue anytime to request a new feature. While I’m continuously adding new features, you can also contribute to the game in this way! If you’re unsure how to open a new issue, check out the **[Non-Programming Contributions](#non-programming-way)** section.

## 🤝 Contributing
### 💻 Programming Way
Want to dive into the code? 🔧 Great! You’re welcome to contribute by submitting pull requests for new features, improvements, or bug fixes. If GitHub is new to you, just search for `How to fork & open a new pull request in GitHub` to learn how.

### 📝 Non-Programming Way
Don’t know C++ but still want to make the game better? 💪 No problem! You can suggest features by opening a new issue on our GitHub. We’ll review your ideas and add them to the `TODO` list if needed.

> [!CAUTION]
> Please don’t post issues for already added TODOs or unrelated suggestions. Examples:
> - Add a simple timer to the game! ⬅️ ISSUE: Already on the [Todo List](#todo)
> - Add a cool video background!! ⬅️ ISSUE: Not necessary, as it could distract from the gameplay.

## 📜 License
Initially, I thought about selling this game, but then I decided, "Hey, let’s make it Open Source!" 👐 This way, we can all work together to make **Extreme Math** even better. Imagine if big projects like **JetBrains** or **Unity** were *Fully Open Source*. 🤔

Don’t forget—this project is open-source and available under the [MIT License](LICENSE). 📄

## 💸 Donating
If you’re feeling generous and want to donate, well, I have to say I really appreciate the thought, but I don’t actually need it—seriously! 😅 You can contribute by helping improve the game instead. I’ve got a job, and this game is just my way of having fun in my free time. So, keep your money and maybe spend it on something cool for yourself instead! 🎁
