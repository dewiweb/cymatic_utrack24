// rea decompile_all
// name: FUN_00597d30
// address: 0x597d30
// body: available
// range: 0x597d30-0x597e6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00597d30(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  void **ppvVar6;
  void *local_24 [3];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00715248;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *param_2;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    pcVar5 = "{#CG}Succeeded";
  }
  else {
    pcVar5 = "{#CR}Failed";
  }
  param_2 = (int *)iVar1;
  FUN_0045c990(pcVar5,uVar2);
  piVar3 = (int *)(iVar1 + -8);
  param_2 = (int *)local_14;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ppvVar6 = local_24;
  uVar4 = 0x597dd7;
  FUN_004ec330(ppvVar6);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0062f290(param_4,uVar4,ppvVar6);
  FUN_0062f290(param_3,uVar4,ppvVar6);
  FUN_005971c0(&param_2,local_24);
  *(undefined1 *)(local_18 + 0x2210) = 0;
  *(undefined4 *)(local_18 + 0x2214) = 0;
  FUN_00599660(param_1);
  FUN_0040f7f0();
  FID_conflict__free(local_24[0]);
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

