// rea decompile_all
// name: FUN_0046fef0
// address: 0x46fef0
// body: available
// range: 0x46fef0-0x46ffa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046fef0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007017f7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00637f30(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  DAT_00c8aaf8 = DAT_00c8aaf8 + 1;
  if (DAT_00c8aaf8 == 1) {
    operator_new(0x18);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar3 = FUN_00469ed0();
    iVar2 = DAT_00c8aaf4;
    if ((DAT_00c8aaf4 != iVar3) && (bVar4 = DAT_00c8aaf4 != 0, DAT_00c8aaf4 = iVar3, bVar4)) {
      FUN_0046a1d0();
      FUN_004bfe14(iVar2,0x18);
    }
  }
  *in_ECX = DAT_00c8aaf4;
  uVar1 = DAT_00c8aaf0;
  LOCK();
  DAT_00c8aaf0 = 0;
  UNLOCK();
  ExceptionList = local_10;
  return uVar1;
}

