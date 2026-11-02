#!/bin/bash
# Batch 2: decompile remaining uTrack24 targets, then commit+push.
cd /home/dewi/newhome/Github/cymatic_utrack24 || exit 1
export GHIDRA_INSTALL_DIR=$HOME/tools/ghidra_12.1.4/ghidra_12.1.4_PUBLIC
R=research/rea

run_decomp() {
  local target="$1" outdir="$2" tag="$3" extra="$4"
  echo "[$(date +%H:%M)] decompile-all $tag -> $outdir"
  rea decompile-all "$target" --output "$outdir" $extra --format json \
      > "$R/${tag}_manifest.json" 2> "$R/${tag}.err"
  echo "[$(date +%H:%M)] $tag exit=$? files=$(ls "$outdir/functions" 2>/dev/null | wc -l)"
}

# uTool2.exe — content manager (song.set / playlist serializers, export chain)
run_decomp "research/assets/software/utool2-win/uTool2.exe" "$R/decomp_utool2" utool2

# Kernel drivers (small) — x64 builds
run_decomp "research/assets/drivers/signed_x/utrack24_usb_x64.sys"     "$R/decomp_usb_sys"     usb_sys
run_decomp "research/assets/drivers/signed_x/utrack24_usb_avs_x64.sys" "$R/decomp_usb_avs_sys" usb_avs_sys

# BebobDriverInterface.dll — the user-mode driver API implementation
run_decomp "research/assets/drivers/signed_x/BebobDriverInterface.dll" "$R/decomp_bebob"       bebob

# AudioLAN card firmware (ARM raw binary)
run_decomp "research/assets/firmware/audiolan-release-4078/uT24_Audiolan_Release_ 4078.bcd" \
           "$R/decomp_audiolan" audiolan \
           "--target-format raw-binary --architecture arm --entry-point 0x0"

# commit + push (rebase if the parallel session pushed meanwhile)
git add research/rea/ research/rea_batch2.sh 2>/dev/null
if git status --short | grep -q '^[AM]'; then
  git commit -m "$(cat <<'EOF'
REA batch 2: decompile uTool2, kernel drivers, BebobDriverInterface, AudioLAN fw

- uTool2.exe full decompile (23,801 procs) -> decomp_utool2/
- utrack24_usb_x64.sys + utrack24_usb_avs_x64.sys -> decomp_usb_*/
- BebobDriverInterface.dll (CDriverInterfaceClass impl) -> decomp_bebob/
- AudioLAN 4078 .bcd ARM decompile -> decomp_audiolan/

Generated with [Devin](https://devin.ai)

Co-Authored-By: Devin <158243242+devin-ai-integration[bot]@users.noreply.github.com>
EOF
)"
  for i in 1 2 3; do
    git fetch origin && git rebase origin/master 2>/dev/null
    git push origin HEAD && break || sleep 15
  done
fi
echo "batch2 done: $(date)"
