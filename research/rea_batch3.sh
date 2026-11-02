#!/bin/bash
cd /home/dewi/newhome/Github/cymatic_utrack24 || exit 1
export GHIDRA_INSTALL_DIR=$HOME/tools/ghidra_12.1.4/ghidra_12.1.4_PUBLIC
rea decompile-all "research/assets/firmware/utrack24-release-4218/uTRACK24_Release_4218.bcd" \
  --output research/rea/decomp_fw4218 \
  --target-format raw-binary --architecture arm --entry-point 0x0 \
  --format json > research/rea/fw4218_manifest.json 2> research/rea/fw4218.err
git add research/rea/ research/rea_batch3.sh
git commit -m "REA batch 3: host firmware 4218 full decompile (10,238 procs)

Generated with [Devin](https://devin.ai)

Co-Authored-By: Devin <158243242+devin-ai-integration[bot]@users.noreply.github.com>"
for i in 1 2 3; do git fetch origin && git rebase origin/master 2>/dev/null; git push origin HEAD && break || sleep 15; done
echo done
