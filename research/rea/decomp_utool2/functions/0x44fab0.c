// rea decompile_all
// name: FUN_0044fab0
// address: 0x44fab0
// body: available
// range: 0x44fab0-0x44fbbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0044fab0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *_Memory;
  bool bVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = false;
  bVar4 = false;
  iVar2 = FID_conflict__atoi((char *)*param_1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_006378b0();
    iVar2 = FUN_0045c1e0(*puVar3);
    bVar1 = true;
    bVar4 = false;
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_006378b0();
      iVar2 = FUN_0045c1e0(*puVar3);
      param_1._3_1_ = 0;
      bVar1 = true;
      bVar4 = true;
      if (iVar2 != 0) goto LAB_0044fb57;
    }
  }
  param_1._3_1_ = 1;
LAB_0044fb57:
  if ((bVar4) && (_Memory = (int *)(local_14 + -8), _Memory != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (bVar1) {
    LOCK();
    iVar2 = iRamfffffff8 + -1;
    UNLOCK();
    bVar4 = iRamfffffff8 == 0;
    iRamfffffff8 = iVar2;
    if (bVar4) {
      FID_conflict__free((void *)0xfffffff8);
    }
  }
  ExceptionList = local_10;
  return param_1._3_1_;
}

