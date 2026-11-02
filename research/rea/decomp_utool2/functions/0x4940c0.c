// rea decompile_all
// name: FUN_004940c0
// address: 0x4940c0
// body: available
// range: 0x4940c0-0x4942e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004942bb) */
/* WARNING: Removing unreachable block (ram,0x004942c5) */

void FUN_004940c0(undefined4 param_1,int param_2,uint param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702440;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006dfbd0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0xe] = juce::TimeSliceClient::vftable;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0063ea10();
  in_ECX[0x14] = juce::ChangeListener::vftable;
  *in_ECX = juce::FileListTreeItem::vftable;
  in_ECX[0xe] = juce::FileListTreeItem::vftable;
  in_ECX[0x12] = juce::FileListTreeItem::vftable;
  in_ECX[0x14] = juce::FileListTreeItem::vftable;
  iVar1 = *param_4;
  in_ECX[0x15] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[0x16] = param_1;
  in_ECX[0x17] = param_2;
  in_ECX[0x18] = param_3;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  in_ECX[0x1c] = param_5;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = &DAT_00bfe12c;
  in_ECX[0x1f] = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,9);
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x40));
    if ((param_3 < *(uint *)(param_2 + 0x60)) &&
       (iVar1 = *(int *)(*(int *)(param_2 + 0x58) + param_3 * 4), iVar1 != 0)) {
      FUN_004ab330(iVar1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x40));
      puVar4 = (undefined4 *)FUN_00636d50(local_38,local_34);
      uVar2 = in_ECX[0x1e];
      in_ECX[0x1e] = *puVar4;
      *puVar4 = uVar2;
      piVar3 = (int *)(param_3 - 8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_0045c990("%d %b \'%y %H:%M");
      local_8 = CONCAT31(local_8._1_3_,10);
      puVar4 = (undefined4 *)FUN_0062f7d0(&param_4,&param_3);
      uVar2 = in_ECX[0x1f];
      in_ECX[0x1f] = *puVar4;
      *puVar4 = uVar2;
      piVar3 = param_4 + -2;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      piVar3 = (int *)(param_3 - 8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      *(undefined1 *)(in_ECX + 0x1b) = local_20;
      ExceptionList = local_10;
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x40));
  }
  *(undefined1 *)(in_ECX + 0x1b) = 1;
  ExceptionList = local_10;
  return;
}

