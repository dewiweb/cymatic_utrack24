// rea decompile_all
// name: FUN_005cd830
// address: 0x5cd830
// body: available
// range: 0x5cd830-0x5cd97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005cd830(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  undefined1 uVar5;
  int iVar6;
  void *local_28 [2];
  int local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b19e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 4))(local_28);
  local_8 = 0;
  iVar6 = local_20;
  do {
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) {
      uVar5 = 0;
      goto LAB_005cd926;
    }
    piVar2 = (int *)FUN_006378b0(&local_18);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar3 = (int *)FUN_006378b0(&local_14);
    if ((*piVar3 == *piVar2) || (iVar4 = FUN_0045c1e0(*piVar3,*piVar2), iVar4 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    local_8 = local_8 & 0xffffff00;
    piVar2 = (int *)(local_18 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  } while (!bVar1);
  uVar5 = 1;
LAB_005cd926:
  iVar6 = 0;
  if (0 < local_20) {
    do {
      piVar2 = (int *)(*(int *)((int)local_28[0] + iVar6 * 4) + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_20);
  }
  FID_conflict__free(local_28[0]);
  ExceptionList = local_10;
  return uVar5;
}

