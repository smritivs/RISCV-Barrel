import os
from const import git_key_path
import sys

msg = sys.argv[1]
branch = sys.argv[2]

if __name__ == "__main__":
	os.system("git add . -A")
	os.system(f"git commit -m \"{msg}\"")
	os.system(f"xclip -sel c < {git_key_path}")
	os.system(f"git push origin {branch}")
