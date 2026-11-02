// rea decompile_all
// name: FUN_005c36e0
// address: 0x5c36e0
// body: available
// range: 0x5c36e0-0x5c3868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c36e0(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if (*(char *)(in_ECX + 0xcc) != '\0') {
    pbVar1 = param_1;
    if (4 < *(int *)(param_1 + 0x10)) {
      pbVar1 = *(byte **)param_1;
    }
    if ((*pbVar1 & 0xf0) == 0xf0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*pbVar1 & 0xf) + 1;
    }
    if ((*(int *)(in_ECX + 0xd0) <= iVar2) && (iVar2 < *(int *)(in_ECX + 0xd4))) {
      uVar5 = *(int *)(in_ECX + 0x24) - 1;
      if ((int)uVar5 < 0) {
        return;
      }
      do {
        uVar7 = FUN_005c5490();
        iVar2 = (int)((ulonglong)uVar7 >> 0x20);
        if ((uint)*(byte *)(iVar2 + 2) == (uint)uVar7) {
          *(undefined4 *)(iVar2 + 0x20) = 0;
          *(undefined4 *)(iVar2 + 0x14) = 0x2000;
          FUN_00425dd0(&LAB_00426f22,iVar2);
          if (uVar5 < *(uint *)(in_ECX + 0x24)) {
            FUN_00425ad0(uVar5);
          }
        }
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
      return;
    }
  }
  if (4 < *(int *)(param_1 + 0x10)) {
    param_1 = *(byte **)param_1;
  }
  if ((*param_1 & 0xf0) == 0xf0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*param_1 & 0xf) + 1;
  }
  piVar6 = *(int **)(in_ECX + 0x28);
  piVar3 = piVar6 + *(int *)(in_ECX + 0x30) * 4;
  if (piVar6 != piVar3) {
    while (*piVar6 != iVar2) {
      piVar6 = piVar6 + 4;
      if (piVar6 == piVar3) {
        return;
      }
    }
    uVar5 = *(int *)(in_ECX + 0x24) - 1;
    if (-1 < (int)uVar5) {
      iVar2 = uVar5 * 0x28;
      do {
        iVar4 = *(int *)(in_ECX + 0x1c) + iVar2;
        if ((*piVar6 < (int)(uint)*(byte *)(iVar4 + 2)) &&
           ((int)(uint)*(byte *)(iVar4 + 2) <= piVar6[1] + *piVar6)) {
          *(undefined4 *)(iVar4 + 0x20) = 0;
          *(undefined4 *)(iVar4 + 0x14) = 0x2000;
          FUN_00425dd0(&LAB_00426f22,iVar4);
          if (uVar5 < *(uint *)(in_ECX + 0x24)) {
            FUN_00425ad0(uVar5);
          }
        }
        iVar2 = iVar2 + -0x28;
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
  }
  return;
}

