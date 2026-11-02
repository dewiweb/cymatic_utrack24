// rea decompile_all
// name: FUN_0063e680
// address: 0x63e680
// body: available
// range: 0x63e680-0x63e7f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063e680(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *lParam;
  undefined4 *puVar7;
  int *piVar8;
  BOOL BVar9;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f8aa;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x14));
  local_8 = 0;
  iVar3 = *(int *)(in_ECX + 0x10);
joined_r0x0063e6ca:
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x14));
    ExceptionList = local_10;
    return;
  }
  lParam = operator_new(0x14);
  uVar4 = *(undefined4 *)(*(int *)(in_ECX + 8) + iVar3 * 4);
  local_8._0_1_ = 1;
  piVar1 = lParam + 1;
  *lParam = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  *lParam = juce::ActionBroadcaster::ActionMessage::vftable;
  if (*(int *)(in_ECX + 4) == 0) {
    puVar7 = operator_new(0xc);
    *puVar7 = juce::ReferenceCountedObject::vftable;
    piVar8 = puVar7 + 1;
    *piVar8 = 0;
    *puVar7 = juce::WeakReference<juce::ActionBroadcaster,juce::ReferenceCountedObject>::
              SharedPointer::vftable;
    puVar7[2] = in_ECX;
    if (*(undefined4 **)(in_ECX + 4) != puVar7) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      puVar5 = *(undefined4 **)(in_ECX + 4);
      *(undefined4 **)(in_ECX + 4) = puVar7;
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        piVar8 = puVar5 + 1;
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*puVar5)(1,uVar6);
        }
      }
    }
  }
  iVar2 = *(int *)(in_ECX + 4);
  lParam[2] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  iVar2 = *param_1;
  lParam[3] = iVar2;
  piVar8 = (int *)(iVar2 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  lParam[4] = uVar4;
  local_8 = (uint)local_8._1_3_ << 8;
  if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) goto code_r0x0063e796;
  goto LAB_0063e7b1;
code_r0x0063e796:
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  BVar9 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
  if (BVar9 == 0) {
LAB_0063e7b1:
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*lParam)(1);
    }
  }
  goto joined_r0x0063e6ca;
}

