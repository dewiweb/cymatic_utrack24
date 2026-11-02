// rea decompile_all
// name: FUN_005e7a20
// address: 0x5e7a20
// body: available
// range: 0x5e7a20-0x5e7c80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e7a20(void)

{
  int *piVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  FUN_005eae90();
  FUN_005eae90();
  FUN_005eae90();
  iVar4 = in_ECX[1];
  iVar3 = 1;
  if (1 < iVar4) {
    piVar1 = (int *)in_ECX[2];
    do {
      if ((*piVar1 == 0) || (piVar1[1] < *piVar1)) break;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < iVar4);
  }
  if (iVar3 == iVar4) {
    local_8 = 0;
    FUN_005eae90();
    FUN_005eae90();
    iVar4 = 1;
    if (1 < in_ECX[1]) {
      do {
        local_c = *(int *)(in_ECX[2] + iVar4 * 4);
        iVar3 = *(int *)(in_ECX[2] + -4 + iVar4 * 4);
        if (iVar3 < local_c) {
          local_c = local_c - iVar3;
          do {
            for (uVar2 = in_ECX[1] - local_8; uVar2 != 0; uVar2 = uVar2 >> 1) {
            }
            FUN_005eae90();
            local_c = local_c + -1;
            local_8 = iVar4;
          } while (local_c != 0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < in_ECX[1]);
    }
    for (uVar2 = in_ECX[1] - local_8; uVar2 != 0; uVar2 = uVar2 >> 1) {
    }
    FUN_005eae90();
  }
  else {
    FUN_005eae90();
    iVar4 = in_ECX[1];
    iVar3 = 0;
    if (0 < iVar4) {
      piVar1 = (int *)in_ECX[2];
      do {
        if (*piVar1 == 0) break;
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar3 < iVar4);
    }
    if (iVar3 == iVar4) {
      FUN_005eae90();
      iVar4 = 0;
      if (0 < in_ECX[1]) {
        do {
          FUN_005eae90();
          iVar4 = iVar4 + 1;
        } while (iVar4 < in_ECX[1]);
      }
    }
    else {
      FUN_005eae90();
      iVar4 = 0;
      if (0 < in_ECX[1]) {
        do {
          if (*(int *)(in_ECX[2] + iVar4 * 4) == 0) {
            FUN_005eae90();
          }
          else {
            FUN_005eae90();
            FUN_005eae90();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < in_ECX[1]);
      }
    }
  }
  FUN_005eae90();
  if (in_ECX[3] != 0) {
    if ((1 < in_ECX[3] - 1U) || (in_ECX[8] == 0)) {
      return 0xffffffff;
    }
    FUN_005eae90();
    FUN_005eae90();
    FUN_005eae90();
    FUN_005eae90();
    if (in_ECX[3] == 1) {
      iVar4 = FUN_005d9760();
    }
    else if (in_ECX[3] == 2) {
      iVar4 = in_ECX[1] * *in_ECX;
    }
    else {
      iVar4 = -1;
    }
    local_c = 0;
    if (0 < iVar4) {
      do {
        FUN_005eae90();
        local_c = local_c + 1;
      } while (local_c < iVar4);
    }
  }
  return 0;
}

