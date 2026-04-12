import os

class TicTacToe:
    def __init__(self):
        self.board = [' ' for _ in range(9)]
        self.current_player = 'X'
        self.winner = None
        
    def print_board(self):
        """Display the current state of the board"""
        os.system('cls' if os.name == 'nt' else 'clear')
        print("\n   TIC TAC TOE")
        print("   Player X vs Player O\n")
        
        # Print board with positions 1-9 for reference
        print(f"   {self.board[0]} | {self.board[1]} | {self.board[2]}      1 | 2 | 3")
        print("   ---------      ---------")
        print(f"   {self.board[3]} | {self.board[4]} | {self.board[5]}      4 | 5 | 6")
        print("   ---------      ---------")
        print(f"   {self.board[6]} | {self.board[7]} | {self.board[8]}      7 | 8 | 9")
        print()
        
    def is_valid_move(self, position):
        """Check if the position is valid and empty"""
        return 1 <= position <= 9 and self.board[position - 1] == ' '
        
    def make_move(self, position):
        """Place the current player's mark on the board"""
        self.board[position - 1] = self.current_player
        
    def check_winner(self):
        """Check if current player has won"""
        winning_combinations = [
            [0, 1, 2], [3, 4, 5], [6, 7, 8],  # Rows
            [0, 3, 6], [1, 4, 7], [2, 5, 8],  # Columns
            [0, 4, 8], [2, 4, 6]              # Diagonals
        ]
        
        for combo in winning_combinations:
            if (self.board[combo[0]] == self.board[combo[1]] == 
                self.board[combo[2]] == self.current_player):
                return True
        return False
        
    def is_draw(self):
        """Check if the board is full (draw)"""
        return ' ' not in self.board
        
    def switch_player(self):
        """Switch between X and O"""
        self.current_player = 'O' if self.current_player == 'X' else 'X'
        
    def get_player_input(self):
        """Get valid input from current player"""
        while True:
            try:
                position = input(f"Player {self.current_player}, choose position (1-9): ").strip()
                position = int(position)
                
                if self.is_valid_move(position):
                    return position
                else:
                    print("Invalid move! Position is taken or out of range.")
                    
            except ValueError:
                print("Please enter a number between 1 and 9.")
                
    def play_round(self):
        """Play a single round"""
        while True:
            self.print_board()
            position = self.get_player_input()
            self.make_move(position)
            
            if self.check_winner():
                self.print_board()
                print(f"🎉 Player {self.current_player} wins! 🎉")
                return True
                
            if self.is_draw():
                self.print_board()
                print("🤝 It's a draw!")
                return True
                
            self.switch_player()
            
    def reset(self):
        """Reset the game for a new round"""
        self.board = [' ' for _ in range(9)]
        self.current_player = 'X'
        self.winner = None
        
def main():
    game = TicTacToe()
    
    print("Welcome to Tic Tac Toe!")
    print("Enter positions 1-9 to place your mark (X goes first)")
    input("Press Enter to start...")
    
    while True:
        game.play_round()
        
        play_again = input("\nPlay again? (y/n): ").strip().lower()
        if play_again != 'y':
            print("Thanks for playing!")
            break
        game.reset()

if __name__ == "__main__":
    main()

