// rea decompile_all
// name: FUN_005037e0
// address: 0x5037e0
// body: available
// range: 0x5037e0-0x5038c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005037e0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  bool bVar3;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  
  uVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x374)) {
    bVar3 = *(int *)(in_ECX + 0x374) != 0;
    do {
      if (bVar3) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (uVar1 < *(uint *)(in_ECX + 0x374)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        *(undefined4 *)(iVar2 + 0xc) = param_1;
        if (uVar1 < *(uint *)(in_ECX + 0x374)) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        *(undefined4 *)(iVar2 + 0x10) = param_2;
      }
      uVar1 = uVar1 + 1;
      bVar3 = uVar1 < *(uint *)(in_ECX + 0x374);
    } while ((int)uVar1 < (int)*(uint *)(in_ECX + 0x374));
  }
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_1c);
    FUN_006ce9f0(1);
    uStack_10 = 0x50388c;
    FUN_006e7e60();
  }
  uStack_10 = 0x503897;
  FUN_006e7e60();
  FUN_006e6400(auStack_1c);
  FUN_006ce9f0(1);
  uStack_10 = 0x5038be;
  (**(code **)(**(int **)(in_ECX + 0x234) + 4))();
  return;
}

