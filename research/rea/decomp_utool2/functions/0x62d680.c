// rea decompile_all
// name: FUN_0062d680
// address: 0x62d680
// body: available
// range: 0x62d680-0x62d75e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0062d680(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 **ppuVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071e0bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0x2f;
  uVar2 = FUN_006112e0(0x2f,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar3 = FUN_00631770(uVar2,uVar6);
  bVar1 = 0 < iVar3 + 1;
  if (bVar1) {
    ppuVar4 = (undefined1 **)FUN_00637a90(&local_18,iVar3 + 1);
  }
  else {
    local_14 = &DAT_00bfe12c;
    ppuVar4 = &local_14;
  }
  *param_1 = *ppuVar4;
  *ppuVar4 = &DAT_00bfe12c;
  if (bVar1) {
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if ((!bVar1) && (piVar5 = (int *)(local_14 + -8), piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

