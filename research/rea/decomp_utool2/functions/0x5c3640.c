// rea decompile_all
// name: FUN_005c3640
// address: 0x5c3640
// body: available
// range: 0x5c3640-0x5c36d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c3640(int param_1,int param_2)

{
  byte bVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071a918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = *(byte *)(param_1 + 0x9b + (int)in_ECX);
  if (bVar1 == 0xff) {
    if (param_2 < 0x41) {
      param_2 = param_2 << 7;
    }
    else {
      param_2 = (int)(((float)(param_2 + -0x40) * 8191.0) / 63.0 + (float)(undefined *)0x0) + 0x2000
      ;
    }
  }
  else {
    param_2 = param_2 * 0x80 + (uint)bVar1;
  }
  (**(code **)(*in_ECX + 0x14))(param_1,param_2,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  ExceptionList = local_10;
  return;
}

