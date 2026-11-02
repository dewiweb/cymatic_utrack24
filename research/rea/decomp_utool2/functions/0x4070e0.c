// rea decompile_all
// name: FUN_004070e0
// address: 0x4070e0
// body: available
// range: 0x4070e0-0x407217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004070e0(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar3 = *(int *)(in_ECX + 100);
  iVar2 = param_3;
  if (iVar3 < param_3) {
    iVar2 = iVar3;
  }
  if (0 < iVar2) {
    param_3 = param_3 - iVar2;
    *(int *)(in_ECX + 100) = iVar3 - iVar2;
    uVar4 = iVar2 - 1;
    *param_2 = 0;
    puVar5 = param_2 + 1;
    param_2 = puVar5;
    if (0 < (int)uVar4) {
      param_2 = puVar5 + uVar4;
      for (iVar3 = (uVar4 & 0x1fffffff) * 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)puVar5 = 0;
        puVar5 = (undefined8 *)((int)puVar5 + 4);
      }
    }
  }
  iVar2 = param_3 / *(int *)(in_ECX + 0x14);
  puVar5 = (undefined8 *)*param_1;
  iVar3 = *(int *)(in_ECX + 0x14);
  param_3 = param_3 - iVar3 * iVar2;
  if (iVar3 == 3) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined4 *)((int)param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((int)param_2 + 0x14) = 0;
      param_2 = param_2 + *(int *)(in_ECX + 0x14);
    }
  }
  else if (iVar3 == 5) {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined4 *)((int)param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((int)param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((int)param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)((int)param_2 + 0x24) = 0;
      param_2 = param_2 + *(int *)(in_ECX + 0x14);
    }
  }
  else {
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar3 = 1;
      *param_2 = *puVar5;
      if (1 < *(int *)(in_ECX + 0x14)) {
        do {
          param_2[iVar3] = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(in_ECX + 0x14));
      }
      puVar5 = puVar5 + 1;
      param_2 = param_2 + *(int *)(in_ECX + 0x14);
    }
  }
  if (0 < param_3) {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    *param_2 = uVar1;
    *(int *)(in_ECX + 100) = *(int *)(in_ECX + 0x14) - param_3;
    if (1 < param_3) {
      puVar6 = param_2 + 1;
      for (iVar3 = (param_3 - 1U & 0x1fffffff) * 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)puVar6 = 0;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
      }
    }
  }
  *param_1 = puVar5;
  return;
}

