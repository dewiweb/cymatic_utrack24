// rea decompile_all
// name: FUN_006057c0
// address: 0x6057c0
// body: available
// range: 0x6057c0-0x605889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006057c0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int *_Memory;
  int in_ECX;
  undefined1 uVar6;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c011;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = FUN_006e3b20(0);
  if ((*(uint *)(*(int *)(in_ECX + 0x80) + 0x24) <= uVar3) ||
     (*(int *)(*(int *)(*(int *)(in_ECX + 0x80) + 0x1c) + uVar3 * 4) == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  puVar4 = (undefined4 *)FUN_00629960(uVar2);
  local_8 = 0;
  if (*(char *)*puVar4 != '\0') {
    puVar4 = (undefined4 *)FUN_00458890();
    DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
    if (DVar5 != 0xffffffff) {
      uVar6 = 1;
      goto LAB_00605841;
    }
  }
  uVar6 = 0;
LAB_00605841:
  _Memory = (int *)(local_14 + -8);
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
  return uVar6;
}

