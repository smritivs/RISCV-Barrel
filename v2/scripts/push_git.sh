

git add . -A
git commit -m "$(msg)"
xclip -sel c < ~/git_stuff/key.txt
git push origin $(branch)
