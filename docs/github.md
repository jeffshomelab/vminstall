## GitHub

- GitHub config is stored in project directory: **.git/config**
https://andrey.mikhalchuk.com/2021/11/07/how-to-push-your-code-to-github-using-personal-access-token-pat.html

### Restore a file from Repo

1. Navigate to the folder where the file exists.
2. Run the command:
```sh
git log --oneline myfile.c 
```
- **Note:** Replace myfile.c with the actual filename.

The commits that include the file will be displayed in the format: *commit_hash commit_note*

**ec74h1** some great commit not

3. To restore the file, use the command:

```sh
git checkout ech74h1 -- myfile.c
```

### Commit changes to Repo

1. Open the project folder.
2. Run **git status** to determine what needs to be committed.
3. Add files to commit:
    - **Add all files:** git add .
4. Run **git commit -m "Enter a commit message"
5. Run **git push**




