// rea decompile_all
// name: FUN_006a7e00
// address: 0x6a7e00
// body: available
// range: 0x6a7e00-0x6a7f05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a7e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  void *local_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007232f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_58 = &stack0xffffffb0;
  uStack_54 = 0x1001b00;
  uStack_5c = 0x6a7e3d;
  FUN_006ab460();
  uStack_54 = 0x6a7e47;
  FUN_00684a80();
  puStack_58 = &stack0xffffffb0;
  uStack_54 = 0x1001c10;
  uStack_5c = 0x6a7e57;
  FUN_006ab460();
  uStack_54 = 0x6a7e5e;
  FUN_00684c50();
  uStack_54 = param_3;
  puStack_58 = (undefined1 *)0x0;
  uStack_5c = 0x6a7e71;
  FUN_00472d90();
  FUN_0040e4d0(&uStack_5c);
  FUN_00677150();
  uStack_54 = param_1;
  uStack_5c = 0x1001c00;
  FUN_006ab460(&puStack_58);
  uStack_5c = 0x6a7ecf;
  FUN_006ab1b0();
  local_8 = 0;
  puStack_58 = (undefined1 *)0x6a7ee0;
  FUN_00684760();
  FUN_00471a50();
  uStack_54 = 0x6a7ef0;
  FID_conflict__free(local_40);
  ExceptionList = local_10;
  return;
}

