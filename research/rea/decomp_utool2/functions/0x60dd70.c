// rea decompile_all
// name: FUN_0060dd70
// address: 0x60dd70
// body: available
// range: 0x60dd70-0x60de1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060dd70(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [20];
  
  local_38 = (undefined1 *)in_ECX[0x26];
  puStack_3c = (undefined1 *)0x60dd90;
  FUN_00684a80();
  local_38 = local_18;
  puStack_3c = local_28;
  uStack_40 = 0x60dd9f;
  FUN_006e6400();
  puStack_3c = (undefined1 *)0x60dda6;
  FUN_0040e4d0();
  local_38 = (undefined1 *)in_ECX[0x27];
  puStack_3c = (undefined1 *)0x60ddd1;
  FUN_00684c50();
  iVar2 = 0;
  if (0 < in_ECX[0x23]) {
    do {
      iVar1 = *(int *)(in_ECX[0x21] + iVar2 * 4);
      local_38 = *(undefined1 **)(iVar1 + 0x18);
      puStack_3c = *(undefined1 **)(iVar1 + 0xc);
      uStack_40 = *(undefined4 *)(iVar1 + 4);
      FUN_0044db30(auStack_50);
      (**(code **)(*in_ECX + 0xb0))(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[0x23]);
  }
  return;
}

