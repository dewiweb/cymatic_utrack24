// rea decompile_all
// name: FUN_00639d50
// address: 0x639d50
// body: available
// range: 0x639d50-0x639ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639d50(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  undefined **local_38;
  int local_34;
  int *local_30;
  void *local_2c;
  int local_24;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f2a8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0062cb00(0x100);
  local_8 = 0;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  FUN_00639f50(1,iVar2,0,0,0,uVar1);
  iVar2 = FUN_0045d1e0(*param_2);
  (*(code *)local_38[4])(*param_2,iVar2 + 1);
  iVar2 = *param_1;
  if (iVar2 != 0) {
    piVar4 = *(int **)(iVar2 + 0xc);
    piVar5 = piVar4 + *(int *)(iVar2 + 0x14) * 6;
    if (piVar4 != piVar5) {
      do {
        if (*piVar4 == *param_2) {
          ppuVar3 = (undefined **)(piVar4 + 2);
          if (ppuVar3 != (undefined **)0x0) goto LAB_00639e19;
          break;
        }
        piVar4 = piVar4 + 6;
      } while (piVar4 != piVar5);
    }
  }
  ppuVar3 = &PTR_PTR_00c7ed58;
LAB_00639e19:
  (**(code **)(*(int *)*ppuVar3 + 0x60))(ppuVar3 + 2,&local_38);
  if (local_30 != (int *)0x0) {
    if (local_1c < (uint)local_30[1]) {
      *(undefined1 *)(local_1c + *local_30) = 0;
    }
    local_24 = *local_30;
  }
  (**(code **)(*in_ECX + 0x1c))(local_24,local_1c);
  local_38 = juce::MemoryOutputStream::vftable;
  FUN_00622b80();
  FID_conflict__free(local_2c);
  piVar5 = (int *)(local_34 + -8);
  local_38 = juce::OutputStream::vftable;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

