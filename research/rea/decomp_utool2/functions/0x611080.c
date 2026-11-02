// rea decompile_all
// name: FUN_00611080
// address: 0x611080
// body: available
// range: 0x611080-0x611140 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00611080(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  int *_Memory;
  undefined4 uVar4;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071c89a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar4 = 0x2f;
  local_18[1] = 0;
  uVar1 = FUN_006112e0(0x2f,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar2 = FUN_00631770(uVar1,uVar4);
  FUN_006310b0(in_ECX);
  local_8 = 0;
  local_18[1] = 1;
  if (0 < iVar2 + 1) {
    puVar3 = (undefined4 *)FUN_006379a0(local_18,0,iVar2 + 1);
    uVar1 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar1;
    _Memory = (int *)(local_18[0] + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  FUN_006111f0();
  ExceptionList = local_10;
  return param_1;
}

