// rea decompile_all
// name: thunk_FUN_0041fa00
// address: 0x41f2a0
// body: available
// range: 0x41f2a0-0x41f2a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0041fc76) */

void thunk_FUN_0041fa00(void)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  LPCRITICAL_SECTION p_Var3;
  HMODULE hModule;
  FARPROC pFVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  HANDLE *ppvVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  undefined1 *puVar12;
  char *lpProcName;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 *apuStack_58 [16];
  undefined1 uStack_15;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fd0c8;
  pvStack_10 = ExceptionList;
  uStack_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  p_Var3 = *(LPCRITICAL_SECTION *)(DAT_00c8a5c4 + 0x5c);
  EnterCriticalSection(p_Var3);
  uStack_8 = 0;
  FUN_00415fa0();
  puVar2 = apuStack_58[0];
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (apuStack_58[0] != (undefined4 *)0x0) {
    LOCK();
    apuStack_58[0][1] = apuStack_58[0][1] + 1;
    UNLOCK();
  }
  FUN_00420cd0();
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar10 = puVar2 + 1;
    iVar6 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puVar2)();
    }
  }
  LeaveCriticalSection(p_Var3);
  p_Var3 = *(LPCRITICAL_SECTION *)(DAT_00c8a5c4 + 0x90);
  EnterCriticalSection(p_Var3);
  uStack_8 = 2;
  FUN_00415fa0();
  puVar2 = apuStack_58[0];
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  if (apuStack_58[0] != (undefined4 *)0x0) {
    LOCK();
    apuStack_58[0][1] = apuStack_58[0][1] + 1;
    UNLOCK();
  }
  FUN_004227b0();
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar10 = puVar2 + 1;
    iVar6 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*puVar2)();
    }
  }
  uStack_8 = 0xffffffff;
  LeaveCriticalSection(p_Var3);
  FUN_0045c990();
  uStack_8 = 4;
  puVar2 = (undefined4 *)FUN_00637690();
  piVar10 = (int *)(in_ECX + 0xc);
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar7 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *puVar2;
    *puVar2 = &DAT_00bfe12c;
  }
  piVar9 = apuStack_58[0] + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  uStack_8 = 0xffffffff;
  ppvVar8 = &p_Var3[-1].LockSemaphore;
  if (ppvVar8 != (HANDLE *)&DAT_00bfe124) {
    LOCK();
    pvVar1 = *ppvVar8;
    *ppvVar8 = (HANDLE)((int)*ppvVar8 + -1);
    UNLOCK();
    if (pvVar1 == (HANDLE)0x0) {
      FID_conflict__free(ppvVar8);
    }
  }
  FUN_0045c990();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = p_Var3;
    p_Var3 = (LPCRITICAL_SECTION)&DAT_00bfe12c;
  }
  ppvVar8 = &p_Var3[-1].LockSemaphore;
  if (ppvVar8 != (HANDLE *)&DAT_00bfe124) {
    LOCK();
    pvVar1 = *ppvVar8;
    *ppvVar8 = (HANDLE)((int)*ppvVar8 + -1);
    UNLOCK();
    if (pvVar1 == (HANDLE)0x0) {
      FID_conflict__free(ppvVar8);
    }
  }
  lpProcName = "IsWow64Process";
  hModule = GetModuleHandleA("kernel32");
  pFVar4 = GetProcAddress(hModule,lpProcName);
  if (pFVar4 != (FARPROC)0x0) {
    GetCurrentProcess();
    (*pFVar4)();
  }
  FUN_0045c990();
  uStack_8 = 5;
  uVar5 = FUN_006308a0();
  uStack_8 = CONCAT31(uStack_8._1_3_,6);
  FUN_00637690(uVar5);
  FUN_006377c0();
  FUN_00637730();
  puVar2 = (undefined4 *)FUN_006377c0();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar7 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *puVar2;
    *puVar2 = &DAT_00bfe12c;
  }
  piVar9 = (int *)(iStack_6c + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = (int *)(iStack_64 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  uStack_8 = 0xffffffff;
  piVar9 = apuStack_58[0] + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_006306a0();
  uStack_8 = 7;
  iVar6 = FUN_00630730();
  if (iVar6 < 0) {
    iVar6 = FUN_006104a0();
    *(undefined1 *)(iVar6 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  FUN_004557e0();
  uStack_8 = CONCAT31(uStack_8._1_3_,8);
  iVar6 = FUN_006307e0();
  if (iVar6 < 0) {
    iVar6 = FUN_006104a0();
    *(undefined1 *)(iVar6 + -1) = 0x2d;
    iVar6 = iVar6 + -1;
  }
  else {
    iVar6 = FUN_006104a0();
  }
  puVar12 = &uStack_15 + -iVar6;
  FUN_004557e0(puVar12);
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  FUN_00637690(apuStack_58);
  FUN_006377c0(puVar12);
  FUN_00637730();
  FUN_006377c0();
  puVar2 = (undefined4 *)FUN_00637730();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar7 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *puVar2;
    *puVar2 = &DAT_00bfe12c;
  }
  piVar9 = (int *)(iStack_68 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = apuStack_58[0] + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  LOCK();
  iVar6 = iRamfffffff8 + -1;
  UNLOCK();
  bVar11 = iRamfffffff8 == 0;
  iRamfffffff8 = iVar6;
  if (bVar11) {
    FID_conflict__free(&iRamfffffff8);
  }
  uStack_8 = 0xffffffff;
  piVar9 = (int *)(iStack_60 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  iVar6 = FUN_00630650();
  if (iVar6 < 0) {
    iVar6 = FUN_006104a0();
    *(undefined1 *)(iVar6 + -1) = 0x2d;
  }
  else {
    FUN_006104a0();
  }
  FUN_004557e0();
  uStack_8 = 10;
  FUN_00637690();
  puVar2 = (undefined4 *)FUN_006377c0();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar7 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *puVar2;
    *puVar2 = &DAT_00bfe12c;
  }
  piVar9 = (int *)(iStack_60 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  uStack_8 = 0xffffffff;
  piVar9 = apuStack_58[0] + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_0045c990();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
  puVar7 = apuStack_58[0];
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = apuStack_58[0];
    puVar7 = (undefined4 *)&DAT_00bfe12c;
  }
  piVar9 = puVar7 + -2;
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_005b2a40();
  uStack_8 = 0xb;
  puVar2 = (undefined4 *)FUN_00637690();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar7 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *puVar2;
    *puVar2 = &DAT_00bfe12c;
  }
  piVar9 = (int *)(iStack_60 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  uStack_8 = 0xffffffff;
  piVar9 = (int *)(iStack_68 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  FUN_005b2c70();
  uStack_8 = 0xc;
  puVar2 = (undefined4 *)FUN_00637690();
  if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
    FUN_00409cf0();
  }
  iVar6 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar6 + 1;
  puVar7 = (undefined4 *)(*piVar10 + iVar6 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *puVar2;
    *puVar2 = &DAT_00bfe12c;
  }
  piVar9 = (int *)(iStack_60 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  uStack_8 = 0xffffffff;
  piVar9 = (int *)(iStack_68 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar9 = puVar7 + -2;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar9 = puVar7 + -2;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar9 = puVar7 + -2;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar9 = puVar7 + -2;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar9 = puVar7 + -2;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar9 = puVar7 + -2;
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_0045c990();
    if (*(int *)(in_ECX + 0x10) < *(int *)(in_ECX + 0x14) + 1) {
      FUN_00409cf0();
    }
    iVar6 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar6 + 1;
    puVar2 = (undefined4 *)(*piVar10 + iVar6 * 4);
    puVar7 = apuStack_58[0];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = apuStack_58[0];
      puVar7 = (undefined4 *)&DAT_00bfe12c;
    }
    piVar10 = puVar7 + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x5c) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x74) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x80) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x8c) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  if (*(int *)(in_ECX + 0x98) != 0) {
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0045c990();
    FUN_00637d80();
    piVar10 = apuStack_58[0] + -2;
    if (piVar10 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar10);
      }
    }
    FUN_0062f290();
  }
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return;
}

