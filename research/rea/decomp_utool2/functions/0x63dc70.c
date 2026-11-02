// rea decompile_all
// name: FUN_0063dc70
// address: 0x63dc70
// body: available
// range: 0x63dc70-0x63deb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063dc70(void)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_24 [12];
  void *local_18;
  int local_10;
  int local_c;
  void *local_8;
  
  local_8 = (void *)0x0;
  FUN_00637f30();
  puVar1 = (undefined1 *)FUN_0063dc00();
  iVar4 = 0;
  if (local_24 != puVar1) {
    FUN_0040ec60(puVar1);
    local_8 = local_18;
    FID_conflict__free((void *)0x0);
    iVar4 = local_10;
  }
  LOCK();
  DAT_00c8a918 = 0;
  UNLOCK();
  iVar2 = DAT_00c8a918;
  do {
    local_c = iVar4 + -1;
    DAT_00c8a918 = iVar2;
    if (local_c < 0) {
      if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff98) &&
         (FUN_004c0391(&DAT_00cfff98), DAT_00cfff98 == -1)) {
        DAT_00cfff9c = (int *)0x0;
        DAT_00cfffa0 = 0;
        DAT_00cfffa4 = 0;
        _atexit((_func_4879 *)&LAB_0072a4e0);
        FUN_004c0352(&DAT_00cfff98);
      }
      if (DAT_00cfffa0 != 0) {
        FID_conflict__free(DAT_00cfff9c);
        DAT_00cfff9c = (int *)0x0;
        DAT_00cfffa0 = 0;
      }
      DAT_00cfffa4 = 0;
      FID_conflict__free(local_8);
      return;
    }
    puVar5 = *(undefined4 **)((int)local_8 + local_c * 4);
    LOCK();
    if (iVar2 == 0) {
      DAT_00c8a918 = 1;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 != 0) {
      iVar4 = 0x13;
      do {
        LOCK();
        iVar2 = DAT_00c8a918;
        if (DAT_00c8a918 == 0) {
          DAT_00c8a918 = 1;
          iVar2 = 0;
        }
        UNLOCK();
        if (iVar2 == 0) goto LAB_0063dd4b;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      LOCK();
      iVar4 = DAT_00c8a918;
      if (DAT_00c8a918 == 0) {
        DAT_00c8a918 = 1;
        iVar4 = 0;
      }
      UNLOCK();
      while (iVar4 != 0) {
        Sleep(0);
        LOCK();
        iVar4 = DAT_00c8a918;
        if (DAT_00c8a918 == 0) {
          DAT_00c8a918 = 1;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
LAB_0063dd4b:
    iVar4 = local_c;
    if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff98) &&
       (FUN_004c0391(&DAT_00cfff98), DAT_00cfff98 == -1)) {
      DAT_00cfff9c = (int *)0x0;
      DAT_00cfffa0 = 0;
      DAT_00cfffa4 = 0;
      _atexit((_func_4879 *)&LAB_0072a4e0);
      FUN_004c0352(&DAT_00cfff98);
    }
    for (piVar3 = DAT_00cfff9c; piVar3 != DAT_00cfff9c + DAT_00cfffa4; piVar3 = piVar3 + 1) {
      if (puVar5 == (undefined4 *)*piVar3) goto LAB_0063dd84;
    }
    puVar5 = (undefined4 *)0x0;
LAB_0063dd84:
    LOCK();
    DAT_00c8a918 = 0;
    UNLOCK();
    iVar2 = DAT_00c8a918;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
      iVar2 = DAT_00c8a918;
    }
  } while( true );
}

