// rea decompile_all
// name: FUN_004fa060
// address: 0x4fa060
// body: available
// range: 0x4fa060-0x4fa105 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fa060(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 auStack_3c [8];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  undefined1 local_14 [16];
  
  if (**(char **)(in_ECX + 0x80) == '\0') {
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      iStack_24 = 0x4fa08a;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    iStack_24 = in_ECX + 0x74;
    puStack_28 = (undefined1 *)0x4fa095;
    (**(code **)(*(int *)*param_1 + 0x68))();
    puStack_28 = *(undefined1 **)(in_ECX + 0x78);
    uStack_2c = 0x4fa0a4;
    FUN_00684c50();
    puStack_28 = *(undefined1 **)(in_ECX + 0x1c);
    uVar1 = *(undefined4 *)(in_ECX + 0x7c);
    uStack_2c = *(undefined4 *)(in_ECX + 0x18);
    uStack_30 = 0;
    uStack_34 = 0x4fa0b9;
    FUN_00472d90();
    puStack_28 = (undefined1 *)0x1;
    uStack_2c = uVar1;
    FUN_0040e4d0(auStack_3c);
    FUN_006830c0(in_ECX + 0x70);
    return;
  }
  iStack_24 = 1;
  puStack_28 = local_14;
  uStack_2c = 0x4fa0eb;
  puStack_28 = (undefined1 *)FUN_006e6400();
  uStack_2c = 0x4fa0fa;
  FUN_0057f1c0();
  return;
}

