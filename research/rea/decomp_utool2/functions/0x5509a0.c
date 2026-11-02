// rea decompile_all
// name: FUN_005509a0
// address: 0x5509a0
// body: available
// range: 0x5509a0-0x550b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005509a0(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_30;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071081d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if (param_2[2] == 4) {
    local_30 = (undefined4 *)0x5509ea;
    FUN_0040ebf0();
    iVar4 = 0;
    if (0 < (int)local_14[0xc]) {
      do {
        local_30 = (undefined4 *)0x550a0c;
        piVar2 = (int *)FUN_0040a090();
        if (*piVar2 == param_1) {
          iVar3 = 0;
        }
        else {
          local_30 = (undefined4 *)*piVar2;
          iVar3 = FUN_0045c1e0();
        }
        piVar2 = local_14 + -2;
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            local_30 = (undefined4 *)0x550a50;
            FID_conflict__free(piVar2);
          }
        }
        if (iVar3 == 0) {
          if (param_3[1] < param_3[2] + 1) {
            local_30 = (undefined4 *)0x550a9d;
            FUN_00409cf0();
          }
          iVar4 = param_3[2];
          param_3[2] = iVar4 + 1;
          *(undefined4 **)(*param_3 + iVar4 * 4) = local_14;
          piVar2 = local_14 + 1;
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          LOCK();
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          goto LAB_00550a68;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_14[0xc]);
    }
    LOCK();
    piVar2 = local_14 + 1;
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
LAB_00550a68:
    if (iVar4 == 1) {
      local_30 = (undefined4 *)0x550a72;
      (**(code **)*local_14)();
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)param_2[0x16]) {
      do {
        local_30 = param_2;
        FUN_004110e0(&local_30,iVar4);
        piVar2 = (int *)(param_1 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        FUN_005509a0(param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[0x16]);
    }
  }
  piVar2 = (int *)(param_1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      local_30 = (undefined4 *)0x550b1c;
      FID_conflict__free(piVar2);
    }
  }
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = param_2 + 1;
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      local_30 = (undefined4 *)0x550b34;
      (**(code **)*param_2)();
    }
  }
  ExceptionList = local_10;
  return;
}

