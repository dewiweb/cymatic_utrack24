// rea decompile_all
// name: FUN_00552e20
// address: 0x552e20
// body: available
// range: 0x552e20-0x55305a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00552e20(void)

{
  LPCRITICAL_SECTION p_Var1;
  LONG *pLVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int in_ECX;
  undefined1 *puVar8;
  LPCRITICAL_SECTION local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710c98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  p_Var1 = (LPCRITICAL_SECTION)(in_ECX + 0x3c);
  local_18 = p_Var1;
  EnterCriticalSection(p_Var1);
  local_8 = 0;
  local_18 = operator_new(0x60);
  iVar5 = FUN_005508e0();
  if (*(int *)(in_ECX + 0x58) != iVar5) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      UNLOCK();
    }
    puVar3 = *(undefined4 **)(in_ECX + 0x58);
    *(int *)(in_ECX + 0x58) = iVar5;
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar7 = puVar3 + 1;
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar3)();
      }
    }
  }
  local_8 = 0xffffffff;
  LeaveCriticalSection(p_Var1);
  piVar7 = (int *)(in_ECX + 0x54);
  if ((undefined *)*piVar7 != PTR_DAT_00c7ed54) {
    iVar5 = FUN_0045c1e0();
    if (iVar5 != 0) {
      FUN_00551b30();
      cVar4 = FUN_005b2750();
      if ((cVar4 != '\0') || (cVar4 = FUN_005b2750(), cVar4 != '\0')) {
        local_18 = (LPCRITICAL_SECTION)&stack0xffffffcc;
        piVar6 = (int *)(*piVar7 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        local_8 = 1;
        FUN_0045c990("#PLAYLISTS");
        local_8 = 0xffffffff;
        FUN_005510f0(&local_14);
        if (local_14 != (undefined4 *)0x0) {
          LOCK();
          piVar6 = local_14 + 1;
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*local_14)();
          }
        }
      }
      cVar4 = FUN_005b2750();
      if (cVar4 != '\0') {
        puVar8 = &stack0xffffffcc;
        piVar6 = (int *)(*piVar7 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        local_8 = 2;
        FUN_00637690(&DAT_00c8a8e8);
        FUN_006377c0(puVar8);
        local_8 = 0xffffffff;
        FUN_005510f0(&local_14);
        if (local_14 != (undefined4 *)0x0) {
          LOCK();
          piVar6 = local_14 + 1;
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)*local_14)();
          }
        }
        puVar8 = &stack0xffffffcc;
        piVar7 = (int *)(*piVar7 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        local_8 = 3;
        FUN_00637690(&DAT_00c8a8e8);
        FUN_006377c0(puVar8);
        local_8 = 0xffffffff;
        FUN_005510f0(&local_18);
        p_Var1 = local_18;
        if (local_18 != (LPCRITICAL_SECTION)0x0) {
          LOCK();
          pLVar2 = &local_18->LockCount;
          iVar5 = *pLVar2;
          *pLVar2 = *pLVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)p_Var1->DebugInfo)();
          }
        }
      }
      ExceptionList = local_10;
      return;
    }
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

