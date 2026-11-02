// rea decompile_all
// name: FUN_004eb590
// address: 0x4eb590
// body: available
// range: 0x4eb590-0x4eb6aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb590(undefined4 param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int in_XMM2_Da;
  undefined1 local_28 [16];
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704f68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_XMM2_Da;
  (**(code **)(*in_ECX + 0x24))(param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1e] = local_18;
  puVar1 = (undefined4 *)FUN_006e6400(local_28);
  FUN_006e9790(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  (**(code **)(*in_ECX + 0x84))();
  if (in_ECX[0x46] != 0) {
    FUN_004ea730(0);
  }
  FUN_004ea0c0();
  FUN_006e9910(1);
  FUN_006e62c0();
  (**(code **)(*in_ECX + 0x28))(1);
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
    local_8 = 0xffffffff;
  }
  FUN_006e6060(in_ECX,in_ECX + 4,200,1,0,0x3ff00000,0,0x3ff00000);
  ExceptionList = local_10;
  return;
}

