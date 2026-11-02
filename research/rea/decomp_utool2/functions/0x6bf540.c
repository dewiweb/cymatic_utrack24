// rea decompile_all
// name: FUN_006bf540
// address: 0x6bf540
// body: available
// range: 0x6bf540-0x6bf635 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bf540(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_0067e6d0(param_1);
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(int *)(in_ECX + 0x24) != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x24) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(int *)(in_ECX + 0x28) != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x28) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(int *)(in_ECX + 0x2c) != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x2c) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(in_ECX + 0x30) != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x30);
    *(int *)(in_ECX + 0x30) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (*(int *)(in_ECX + 0x34) != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x34);
    *(int *)(in_ECX + 0x34) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(in_ECX + 0x38) != iVar2) {
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x38);
    *(int *)(in_ECX + 0x38) = iVar2;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}

