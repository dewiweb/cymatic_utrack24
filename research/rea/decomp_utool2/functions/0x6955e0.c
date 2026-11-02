// rea decompile_all
// name: FUN_006955e0
// address: 0x6955e0
// body: available
// range: 0x6955e0-0x6956cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006955e0(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 *local_24;
  undefined1 local_14 [16];
  
  if ((**(char **)(in_ECX + 0x120) != '\0') && (DAT_00c8a678 != in_ECX)) {
    local_24 = (undefined1 *)0x695614;
    iVar1 = FUN_00693140();
    if (iVar1 == 0) {
      local_24 = *(undefined1 **)(in_ECX + 0x124);
      iStack_28 = 0x69562e;
      FUN_00684c50();
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        local_24 = (undefined1 *)0x69563f;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      local_24 = (undefined1 *)(in_ECX + 0x108);
      iStack_28 = 0x69564d;
      (**(code **)(*(int *)*param_1 + 0x68))();
      if (*(char *)(in_ECX + 0x96) == '\0') {
        local_24 = *(undefined1 **)(in_ECX + 0x1c);
        iStack_28 = *(int *)(*(int *)(in_ECX + 0x7c) + 0x18) - *(int *)(in_ECX + 0xfc);
        uStack_2c = 0;
        puStack_30 = (undefined4 *)0x69568b;
        FUN_00472d90();
        iStack_28 = 0x21;
      }
      else {
        local_24 = local_14;
        iStack_28 = 0x695662;
        FUN_006e6400();
        iStack_28 = 0x24;
      }
      local_24 = (undefined1 *)0x1;
      FUN_0040e4d0(auStack_38);
      FUN_006830c0(in_ECX + 0x120);
    }
  }
  local_24 = (undefined1 *)0x6956b4;
  iVar1 = FUN_006e9580();
  iStack_28 = *(undefined4 *)(in_ECX + 0x1c);
  uStack_2c = *(undefined4 *)(in_ECX + 0x18);
  puStack_30 = param_1;
  uStack_34 = 0x6956c4;
  (**(code **)(*(int *)(iVar1 + 0xc) + 8))();
  return;
}

