// rea decompile_all
// name: FUN_0050a570
// address: 0x50a570
// body: available
// range: 0x50a570-0x50a692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a570(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 **ppuVar5;
  char *pcVar6;
  undefined4 *local_28;
  undefined **local_24 [2];
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070841e;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = in_ECX;
  FUN_006ea2c0(local_14);
  *in_ECX = FaderMeter::Cursor::vftable;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = 1;
  ppuVar5 = &local_28;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  pcVar6 = "NOSWIPE";
  FUN_0061f730(ppuVar5,"NOSWIPE");
  FUN_0061fa00(ppuVar5,pcVar6);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00637060(&local_28,local_24);
  piVar4 = local_28 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  puVar3 = (undefined4 *)FUN_00683790(0x900);
  uVar2 = in_ECX[0x1f];
  in_ECX[0x1f] = *puVar3;
  *puVar3 = uVar2;
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_28 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_28)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

