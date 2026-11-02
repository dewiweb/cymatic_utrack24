#!/bin/bash
# Wait for the running REA background jobs (uRemote decompile-all +
# aes67 JS analysis) to exit, then commit & push all research/rea/ output.
cd /home/dewi/newhome/Github/cymatic_utrack24 || exit 1

while pgrep -f 'rea decompile-all' >/dev/null || \
      pgrep -f 'rea analyze-javascript-application' >/dev/null; do
    sleep 120
done
sleep 10

git add research/rea/ .gitignore research/notes/rea_assets.md research/rea_watcher.sh 2>/dev/null
git status --short | grep -q '^[AM]' || exit 0

git commit -m "$(cat <<'EOF'
REA: uRemote.exe full decompile + AES67 JS analysis results

- decompile-all on uRemote.exe (18,336 procs) -> research/rea/decomp_uremote/
- analyze-javascript-application on assets/audiolan -> audiolan_js.json
- decompile outputs tracked (regenerable, but publishing matches ghidra/dumps)

Generated with [Devin](https://devin.ai)

Co-Authored-By: Devin <158243242+devin-ai-integration[bot]@users.noreply.github.com>
EOF
)" && git push origin HEAD
echo "watcher done: $(date)"
