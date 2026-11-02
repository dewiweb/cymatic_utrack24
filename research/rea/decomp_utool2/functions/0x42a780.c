// rea decompile_all
// name: FUN_0042a780
// address: 0x42a780
// body: available
// range: 0x42a780-0x42aa8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a780(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  uint in_ECX;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_190;
  int local_f8;
  void *local_54 [8];
  void *local_34 [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd9ea;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0042a610(local_14);
  iVar8 = *(int *)(in_ECX + 0x98);
  (**(code **)(*(int *)(in_ECX - 0xc) + 0x44))(local_34);
  iVar3 = FUN_00637390();
  FID_conflict__free(local_34[0]);
  (**(code **)(*(int *)(in_ECX - 0xc) + 0x40))(local_54);
  iVar4 = FUN_00637390();
  FID_conflict__free(local_54[0]);
  bVar1 = false;
  local_8 = 0;
  iVar11 = 1;
  if (1 < iVar3) {
    iVar11 = iVar3;
  }
  FUN_00416890();
  local_8 = 2;
  iVar5 = 1;
  if (1 < iVar4) {
    iVar5 = iVar4;
  }
  FUN_00416890();
  iVar10 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0 < iVar11) {
    do {
      _memset(*(void **)(local_190 + iVar10 * 4),0,(iVar8 + 0x20) * 4);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  iVar11 = 0;
  if (0 < iVar5) {
    do {
      _memset(*(void **)(local_f8 + iVar11 * 4),0,(iVar8 + 0x20) * 4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar5);
  }
LAB_0042a8f7:
  do {
    if (*(char *)(in_ECX + 0x3c) != '\0') goto LAB_0042aa5b;
    iVar11 = *(int *)(in_ECX + 0x54);
    if (iVar11 != 0) {
      if (*(int *)(in_ECX + 0x58) == 0) {
        DVar6 = WaitForSingleObject(*(HANDLE *)(iVar11 + 0x48),1000);
        if (DVar6 == 0x102) goto LAB_0042aa5b;
        FUN_00428d10();
        if (*(int *)(*(int *)(in_ECX + 0x54) + 0xa8) - *(int *)(*(int *)(in_ECX + 0x54) + 0xa4) <
            iVar8) goto LAB_0042a8f7;
      }
      else if ((*(char *)(in_ECX + 0x5c) != '\0') &&
              (DVar6 = WaitForSingleObject(*(HANDLE *)(iVar11 + 0x48),0), DVar6 == 0)) {
        FUN_00428d10();
      }
      FUN_00428e20(local_190,iVar3,iVar8);
      if (*(char *)(*(int *)(in_ECX + 0x54) + 0x84) != '\0') {
        bVar1 = true;
        *(undefined1 *)(in_ECX + 0xa4) = 0;
      }
    }
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xac));
    local_8._0_1_ = 4;
    if ((BVar7 != 0) && (*(char *)(in_ECX + 0x95) != '\0')) {
      (**(code **)(**(int **)(in_ECX + 0xa8) + 4))(local_190,iVar3,local_f8,iVar4,iVar8);
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if (BVar7 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xac));
    }
    if ((*(int *)(in_ECX + 0x58) != 0) &&
       (FUN_00429290(local_f8,iVar4,iVar8,*(undefined4 *)(in_ECX + 0x54),
                     -(uint)(in_ECX != 0xc) & in_ECX),
       *(char *)(*(int *)(in_ECX + 0x58) + 0x84) != '\0')) {
      *(undefined1 *)(in_ECX + 0xa4) = 1;
      goto LAB_0042aa30;
    }
    if (bVar1) {
LAB_0042aa30:
      piVar9 = (int *)(*(int *)(in_ECX + 0x44) + 0xc);
      LOCK();
      iVar8 = *piVar9;
      if (iVar8 == 0) {
        *piVar9 = 1;
        iVar8 = 0;
      }
      UNLOCK();
      if ((iVar8 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0xc) = 0;
        UNLOCK();
      }
LAB_0042aa5b:
      FID_conflict__free((void *)0x0);
      FID_conflict__free((void *)0x0);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

