// rea decompile_all
// name: FUN_006111f0
// address: 0x6111f0
// body: available
// range: 0x6111f0-0x6112b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006111f0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *_Memory;
  undefined4 in_EDX;
  int local_18;
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c8bd;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = FUN_00632d50(0x2f);
  if (cVar1 == '\0') {
    local_14[0] = 0x2f;
    FUN_00621830(local_14);
  }
  iVar3 = FUN_00426f70(uVar2);
  if (iVar3 == 0x2f) {
    uVar4 = FUN_00637a90(&local_18,1);
    local_8 = 0;
    FUN_00636ec0(uVar4);
    _Memory = (int *)(local_18 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar3 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(_Memory);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else {
    FUN_00636ec0(in_EDX);
  }
  ExceptionList = local_10;
  return;
}

