// rea decompile_all
// name: FUN_00640340
// address: 0x640340
// body: available
// range: 0x640340-0x6403f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00640340(void)

{
  uint uVar1;
  int *in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  float fVar3;
  int **ppiVar4;
  int *local_2c;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071fb3a;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppiVar4 = &local_2c;
  local_2c = (int *)0x0;
  local_14 = uVar1;
  (**(code **)(*in_ECX + 0x34))();
  if (local_2c == (int *)0x0) {
    fVar3 = 1.0;
    uVar2 = extraout_EDX;
  }
  else {
    (**(code **)(*local_2c + 0x20))(local_2c,&local_28);
    fVar3 = (float)local_28 / (float)((uint)local_24 + (uint)local_26);
    uVar2 = extraout_EDX_00;
  }
  local_8 = 2;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 8))(local_2c);
    uVar2 = extraout_EDX_01;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar2,ppiVar4,uVar1,fVar3);
  return;
}

