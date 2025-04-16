import os
from const import git_key_path
import sys

msg = sys.argv[1]

if __name__ == "__main__":
	os.system("git add . -A")
	os.system(f"git commit -m {msg}")
	os.system("xclip -sel c < ~/git_stuff/key.txt")
	os.system("git push origin $(branch)")
