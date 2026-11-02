// rea decompile_all
// name: FUN_00632db0
// address: 0x632db0
// body: available
// range: 0x632db0-0x632f20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00632db0(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int iVar8;
  void *local_24;
  undefined4 local_20;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e7fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar3 = true;
  puVar6 = (undefined4 *)FUN_00458890(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
  if (((DVar7 & 0x10) != 0) && (DVar7 != 0xffffffff)) {
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_8 = 0;
    FUN_0045c990(&DAT_00c00df8);
    local_8._0_1_ = 1;
    FUN_00635ea0(&local_24,3,0,&local_14);
    local_8 = (uint)local_8._1_3_ << 8;
    piVar1 = (int *)(local_14 + -8);
    iVar4 = local_1c;
    iVar8 = local_1c;
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar1);
        iVar4 = local_1c;
        iVar8 = local_1c;
      }
    }
    while (iVar8 = iVar8 + -1, local_1c = iVar4, -1 < iVar8) {
      cVar5 = FUN_00632db0();
      iVar4 = local_1c;
      if ((cVar5 == '\0') || (!bVar3)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    iVar8 = 0;
    local_8 = 0xffffffff;
    if (0 < iVar4) {
      do {
        piVar1 = (int *)(*(int *)((int)local_24 + iVar8 * 4) + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar1);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
    FID_conflict__free(local_24);
  }
  cVar5 = FUN_00635980();
  if ((cVar5 != '\0') && (bVar3)) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

