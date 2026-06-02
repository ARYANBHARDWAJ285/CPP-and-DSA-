# Tic-Tac-Toe game

def print_board(board):
    print()
    print(f"{board[0]} | {board[1]} | {board[2]}")
    print("--+---+--")
    print(f"{board[3]} | {board[4]} | {board[5]}")
    print("--+---+--")
    print(f"{board[6]} | {board[7]} | {board[8]}")
    print()

def check_winner(board, player):
    win_conditions = [
        [0, 1, 2], [3, 4, 5], [6, 7, 8],  # Rows
        [0, 3, 6], [1, 4, 7], [2, 5, 8],  # Columns
        [0, 4, 8], [2, 4, 6]              # Diagonals
    ]
    for condition in win_conditions:
        if board[condition[0]] == board[condition[1]] == board[condition[2]] == player:
            return True
    return False

def play_game():
    board = [" "] * 9  # Empty board
    current_player = "X"

    # Optionally show guide numbers so player knows positions:
    print("Positions are numbered 1 to 9 like this:")
    print("1 | 2 | 3")
    print("--+---+--")
    print("4 | 5 | 6")
    print("--+---+--")
    print("7 | 8 | 9\n")

    for turn in range(9):
        print_board(board)
        print(f"Player {current_player}'s turn.")

        # Take valid input
        while True:
            try:
                move = int(input("Enter position (1-9): ")) - 1
                if move < 0 or move > 8:
                    print("Invalid input! Enter a number between 1 and 9.")
                    continue
                if board[move] == " ":
                    board[move] = current_player
                    break
                else:
                    print("That spot is already taken. Try again.")
            except ValueError:
                print("Invalid input! Enter a number between 1 and 9.")

        # Check for winner
        if check_winner(board, current_player):
            print_board(board)
            print(f"Player {current_player} wins!")
            return

        # Switch player
        current_player = "O" if current_player == "X" else "X"

    # If board is full and no winner
    print_board(board)
    print("It's a draw!")

if __name__ == "__main__":
    play_game()
