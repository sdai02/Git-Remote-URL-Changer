# Git Remote URL Changer

This project is a simple C program that allows you to update the remote URL of a Git repository directly from the command line.

## Features

- Updates the Git remote URL for the `origin` remote.
- Lightweight and efficient.
- Handles dynamic input for GitHub username and repository name.

## Prerequisites

To use this program, ensure that you have the following installed on your system:

- GCC (GNU Compiler Collection)
- Git

## Installation

1. Clone this repository (or copy the source code to your project directory).
2. Compile the program using GCC:

   ```bash
   gcc -o git_url_changer main.c src/change.c
   ```

3. Make sure the executable file `git_url_changer` is created in the current directory.

## Usage

Run the program with the `-c` option followed by your GitHub username and repository name:

```bash
./git_url_changer -c [username] [repository_name]
```

### Example

```bash
./git_url_changer -c john-doe example-repo
```

This command will execute:

```bash
git remote set-url origin git@github.com:john-doe/example-repo.git
```

### Output

- On success, the Git remote URL will be updated without any additional messages.
- On failure, appropriate error messages will be displayed.

## Error Handling

- **Insufficient arguments:** The program will display a usage guide if arguments are missing.
- **Command too long:** If the input exceeds the allowed buffer size, an error message will be displayed.
- **Execution failure:** If the system command fails, the program will report it.

## File Structure

```
├── main.c          # Contains the main function and argument parsing
├── src/
│   ├── change.c    # Implements the `change` function for updating the Git URL
│   └── change.h    # Header file for the `change` function
└── README.md       # Project documentation
```


## Contribution

Feel free to fork this repository and submit pull requests for improvements. Feedback and suggestions are always welcome! 😊

---

This `README.md` provides a clear and professional overview of your project, suitable for sharing on GitHub or other platforms.
