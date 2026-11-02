// rea decompile_all
// name: FUN_00514040
// address: 0x514040
// body: available
// range: 0x514040-0x514158 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514040(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  undefined4 uStack_38;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708fb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_38 = 0x514074;
  operator_new(0x88c);
  uStack_38 = 0;
  local_8 = 0;
  FUN_00514550(*(undefined4 *)(in_ECX + 0x40),0);
  local_8 = 0xffffffff;
  FUN_006f56f0();
  FUN_005b5190();
  local_8 = 1;
  FUN_0040eb20(&uStack_38);
  FUN_006377c0();
  uStack_38 = 0x5140ea;
  FUN_00637730();
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_38 = 0x514110;
      FID_conflict__free(piVar2);
    }
  }
  uStack_38 = 0x514127;
  FUN_004eb590();
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_38 = 0x514144;
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

