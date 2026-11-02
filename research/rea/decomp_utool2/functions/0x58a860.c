// rea decompile_all
// name: FUN_0058a860
// address: 0x58a860
// body: available
// range: 0x58a860-0x58a933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058a860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *_Memory;
  longlong lVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00713b15;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0058a360(param_1);
  *(undefined1 *)(in_ECX + 0x90) = 1;
  *(undefined1 **)(in_ECX + 0x94) = &DAT_00bfe12c;
  local_8 = 1;
  puVar4 = (undefined4 *)FUN_0062f700(uVar3);
  lVar5 = __allmul(*puVar4,puVar4[1],0xdeece66d,5);
  *puVar4 = (int)(lVar5 + 0xb);
  puVar4[1] = (uint)((ulonglong)(lVar5 + 0xb) >> 0x20) & 0xffff;
  puVar4 = (undefined4 *)FUN_00631190();
  uVar2 = *(undefined4 *)(in_ECX + 0x94);
  *(undefined4 *)(in_ECX + 0x94) = *puVar4;
  *puVar4 = uVar2;
  _Memory = (int *)(param_1 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

