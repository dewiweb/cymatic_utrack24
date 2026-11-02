// rea decompile_all
// name: FUN_00502d50
// address: 0x502d50
// body: available
// range: 0x502d50-0x502de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00502d50(undefined4 param_1)

{
  int iVar1;
  uint in_ECX;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint *puStack_10;
  uint local_8;
  
  uVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x148)) {
    bVar3 = *(int *)(in_ECX + 0x148) != 0;
    do {
      if (bVar3) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x140) + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      uVar2 = uVar2 + 1;
      *(undefined1 *)(iVar1 + 0x15) = 0;
      bVar3 = uVar2 < *(uint *)(in_ECX + 0x148);
    } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x148));
  }
  puStack_10 = &local_8;
  *(undefined1 *)(in_ECX + 0x15c) = 0;
  uStack_14 = param_1;
  uStack_18 = 0x502d9c;
  local_8 = in_ECX;
  iVar1 = FUN_00502e20();
  if (iVar1 != 0) {
    if (local_8 < *(uint *)(in_ECX + 0x148)) {
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x140) + local_8 * 4) + 0x15) = 1;
    }
    else {
      *(undefined1 *)(in_ECX + 0x15c) = 1;
    }
  }
  FUN_006e6400(auStack_1c);
  FUN_006ce9f0(1);
  return;
}

