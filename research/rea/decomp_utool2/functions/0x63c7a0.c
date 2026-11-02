// rea decompile_all
// name: FUN_0063c7a0
// address: 0x63c7a0
// body: available
// range: 0x63c7a0-0x63c93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c7a0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  void *_ArgList;
  void **ppvVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uintptr_t uVar8;
  int *in_ECX;
  uint local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f645;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  cVar2 = (char)in_ECX[0xf];
  ppvVar4 = &local_10;
  local_18 = in_ECX;
  local_10 = ExceptionList;
  while ((ExceptionList = ppvVar4, cVar2 == '\0' && (in_ECX[0x10] != 0))) {
    piVar6 = (int *)FUN_00623a80(uVar5);
    local_8 = 0;
    local_14 = piVar6;
    if ((piVar6 != (int *)0x0) &&
       (iVar7 = (**(code **)(*in_ECX + 8))(), in_ECX = local_18, iVar7 != 0)) {
      piVar3 = *(int **)(iVar7 + 0x20);
      local_14 = (int *)0x0;
      if ((piVar3 != piVar6) && (*(int **)(iVar7 + 0x20) = piVar6, piVar3 != (int *)0x0)) {
        FUN_00623b80();
        DeleteCriticalSection((LPCRITICAL_SECTION)((int)piVar3 + 0xe));
        piVar6 = (int *)(*piVar3 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        FUN_004bfe14(piVar3,0x28);
      }
      FUN_0063ce10();
      _ArgList = *(void **)(iVar7 + 0x34);
      EnterCriticalSection((LPCRITICAL_SECTION)((int)_ArgList + 0x10));
      *(undefined1 *)((int)_ArgList + 0x3c) = 0;
      if (*(int *)((int)_ArgList + 8) == 0) {
        uVar8 = __beginthreadex((void *)0x0,*(uint *)((int)_ArgList + 0x34),FUN_00611a60,_ArgList,0,
                                &local_1c);
        *(uintptr_t *)((int)_ArgList + 8) = uVar8;
        *(uint *)((int)_ArgList + 0xc) = local_1c;
        FUN_00611960();
        SetEvent(*(HANDLE *)((int)_ArgList + 0x28));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)_ArgList + 0x10));
      in_ECX = local_18;
      piVar6 = local_14;
    }
    local_8 = 0xffffffff;
    if (piVar6 != (int *)0x0) {
      FUN_00623b80();
      DeleteCriticalSection((LPCRITICAL_SECTION)((int)piVar6 + 0xe));
      piVar3 = (int *)(*piVar6 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_004bfe14(piVar6,0x28);
    }
    cVar2 = (char)in_ECX[0xf];
    ppvVar4 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}

