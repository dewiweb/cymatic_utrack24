// rea decompile_all
// name: FUN_00446cb0
// address: 0x446cb0
// body: available
// range: 0x446cb0-0x446dc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446cb0(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  int *_Memory;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fedf8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x8f8) == 0) {
    cVar2 = FUN_00605d80(in_ECX,in_ECX + 0x8e0);
    if (cVar2 == '\0') {
      *(undefined1 *)(in_ECX + 0x8f5) = 1;
    }
    else {
      *(double *)(in_ECX + 0x8e8) = (double)*(float *)(*(int *)(in_ECX + 0x20) + 0x28);
      FUN_0063eb10(0x14);
    }
  }
  cVar2 = FUN_006d1aa0(1);
  if (cVar2 == '\0') {
    *(undefined1 *)(in_ECX + 0x8f5) = 1;
  }
  if (*(char *)(in_ECX + 0x8f5) != '\0') {
    FUN_00446be0();
    ExceptionList = local_10;
    return;
  }
  uVar4 = extraout_ECX;
  uVar5 = extraout_ECX;
  FUN_00637250(extraout_ECX,extraout_ECX,uVar3);
  FUN_006377c0(uVar4);
  uVar4 = FUN_00637730(uVar5);
  local_8 = 0;
  FUN_006d0ed0(uVar4);
  _Memory = (int *)(in_ECX + -8);
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

