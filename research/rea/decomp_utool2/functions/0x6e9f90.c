// rea decompile_all
// name: FUN_006e9f90
// address: 0x6e9f90
// body: available
// range: 0x6e9f90-0x6ea0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e9f90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728e70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)(in_ECX + 4);
  if (*piVar4 != *param_1) {
    iVar2 = FUN_00448730(*piVar4);
    if (iVar2 != 0) {
      piVar3 = (int *)(*piVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar1;
      UNLOCK();
      piVar4 = (int *)(iVar2 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if ((*(byte *)(in_ECX + 0x68) & 1) != 0) {
        piVar4 = (int *)FUN_006d1d80();
        if (piVar4 != (int *)0x0) {
          if ((undefined **)*piVar4 == juce::HWNDComponentPeer::vftable) {
            puVar5 = (undefined4 *)FUN_00458890();
            SetWindowTextW((HWND)piVar4[0xe],(LPCWSTR)*puVar5);
          }
          else {
            (*(code *)((undefined **)*piVar4)[3])();
          }
        }
      }
      param_1 = (int *)FUN_0040de70();
      if (param_1 != (undefined4 *)0x0) {
        LOCK();
        param_1[1] = param_1[1] + 1;
        UNLOCK();
      }
      local_8 = 0;
      FUN_004b0b00(&param_1,&LAB_00426f22);
      if (param_1 != (undefined4 *)0x0) {
        LOCK();
        piVar4 = param_1 + 1;
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*param_1)();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

