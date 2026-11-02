// rea decompile_all
// name: FUN_004f9700
// address: 0x4f9700
// body: available
// range: 0x4f9700-0x4f985a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9700(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
                 )

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  FUN_006e27c0(*(undefined4 *)(in_ECX + 0x30),param_5);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x28))();
    FUN_006e5050(param_1,0xffffffff);
  }
  if (*(int *)(in_ECX + 0x98) < *(int *)(in_ECX + 0x9c) + 1) {
    FUN_00409cf0();
  }
  iVar5 = *(int *)(in_ECX + 0x9c);
  *(int *)(in_ECX + 0x9c) = iVar5 + 1;
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x94) + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  if (param_2 != '\0') {
    if (*(int *)(in_ECX + 0xa4) < *(int *)(in_ECX + 0xa8) + 1) {
      FUN_00409cf0();
    }
    iVar5 = *(int *)(in_ECX + 0xa8);
    *(int *)(in_ECX + 0xa8) = iVar5 + 1;
    *(int **)(*(int *)(in_ECX + 0xa0) + iVar5 * 4) = param_1;
  }
  uVar2 = *(uint *)(in_ECX + 0x30);
  iVar5 = 0;
  iVar6 = 0;
  uVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      if (*(int *)(in_ECX + 0x80) == 0) {
        if (uVar4 < uVar2) {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + uVar4 * 4);
        }
        else {
          iVar3 = 0;
        }
        if (iVar5 < *(int *)(iVar3 + 0x18)) {
          iVar5 = *(int *)(iVar3 + 0x18);
        }
        if (uVar4 < uVar2) {
          iVar6 = iVar6 + *(int *)(*(int *)(*(int *)(in_ECX + 0x28) + uVar4 * 4) + 0x1c);
        }
        else {
          iVar6 = iVar6 + iRam0000001c;
        }
      }
      else {
        if (uVar4 < uVar2) {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + uVar4 * 4);
        }
        else {
          iVar3 = 0;
        }
        if (iVar6 < *(int *)(iVar3 + 0x1c)) {
          iVar6 = *(int *)(iVar3 + 0x1c);
        }
        if (uVar4 < uVar2) {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x28) + uVar4 * 4);
        }
        else {
          iVar3 = 0;
        }
        iVar5 = iVar5 + *(int *)(iVar3 + 0x18);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar2);
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
               *(int *)(in_ECX + 0x7c) + *(int *)(in_ECX + 0x74) + iVar5,
               *(int *)(in_ECX + 0x78) + *(int *)(in_ECX + 0x70) + iVar6);
  return;
}

