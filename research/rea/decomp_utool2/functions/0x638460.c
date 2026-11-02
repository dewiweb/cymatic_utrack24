// rea decompile_all
// name: FUN_00638460
// address: 0x638460
// body: available
// range: 0x638460-0x6385a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00638460(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_50;
  int *local_4c;
  char local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  void *local_20;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ef86;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00629660(param_1,0x800);
  local_8 = 0;
  iVar4 = (**(code **)(local_50 + 0xc))(&param_1,4,uVar3);
  pcVar1 = (char *)0x0;
  if (iVar4 == 4) {
    pcVar1 = param_1;
  }
  while ((pcVar1 = pcVar1 + -1, -1 < (int)pcVar1 &&
         ((local_3c < local_34 ||
          (((local_3c <= local_34 && (local_40 < local_38)) ||
           (cVar2 = (**(code **)(*local_4c + 8))(), cVar2 == '\0'))))))) {
    FUN_006235c0(&param_1);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_006235c0(local_18);
    if (*param_1 != '\0') {
      FUN_00631980(&param_1,local_18);
    }
    piVar5 = (int *)(local_18[0] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar5 = (int *)(param_1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  FID_conflict__free(local_20);
  if ((local_48 != '\0') && (local_4c != (int *)0x0)) {
    (**(code **)*local_4c)(1);
  }
  ExceptionList = local_10;
  return 1;
}

