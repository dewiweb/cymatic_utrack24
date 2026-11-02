// rea decompile_all
// name: FUN_0048c5b0
// address: 0x48c5b0
// body: available
// range: 0x48c5b0-0x48c706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c5b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  local_8 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      local_8 = local_8 + piVar2[3] * piVar2[2];
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      local_8 = local_8 + piVar2[3] * piVar2[2] * 0x80;
    }
  }
  if (0 < local_8) {
    uVar4 = FUN_0041f3a2();
    if ((int)uVar4 < (int)((ulonglong)uVar4 >> 0x20)) {
      local_8 = (int)uVar4 / local_8;
      if (local_8 < 1) {
        local_8 = 1;
      }
    }
    else {
      local_8 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (local_8 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = piVar2[3] * local_8;
          FUN_0048cc60();
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar3 = FUN_0048c3be(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar3;
        iVar3 = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[5] = iVar3;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (local_8 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = piVar2[3] * local_8;
          FUN_0048cc60();
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar3 = FUN_0048c450(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar3;
        iVar3 = *(int *)(iVar1 + 0x50);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[5] = iVar3;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
  }
  return;
}

