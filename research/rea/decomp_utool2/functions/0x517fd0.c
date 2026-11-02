// rea decompile_all
// name: FUN_00517fd0
// address: 0x517fd0
// body: available
// range: 0x517fd0-0x518143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00517fd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  FUN_0045c990("Description File");
  FUN_00412eb0();
  if (*(int *)(in_ECX + 0x174) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x170));
    *(undefined4 *)(in_ECX + 0x170) = 0;
    *(undefined4 *)(in_ECX + 0x174) = 0;
  }
  piVar3 = (int *)(in_ECX + -8);
  *(undefined4 *)(in_ECX + 0x178) = 0;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
      piVar3 = extraout_ECX;
    }
  }
  iVar1 = *(int *)(in_ECX + 0x9c);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(byte *)(iVar1 + 0x30) & 1;
    iVar5 = *(int *)(iVar1 + 0x14) + -1;
    if (-1 < iVar5) {
      do {
        uVar6 = FUN_0068fb80(0xfffffffe);
        uVar4 = (int)((ulonglong)uVar6 >> 0x20) + (int)uVar6;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar1 = *(int *)(in_ECX + 0x9c);
      piVar3 = extraout_ECX_00;
    }
  }
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0068fb00(0);
      }
      piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                   &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0);
      (**(code **)(*piVar3 + 0x84))(in_ECX + 0x168);
    }
    else {
      iVar5 = 0;
      iVar1 = FUN_006e0980(piVar3);
      if (0 < iVar1) {
        do {
          if (*(int *)(in_ECX + 0x9c) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_0068fb00(iVar5);
          }
          piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                       &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0);
          (**(code **)(*piVar3 + 0x84))(in_ECX + 0x168);
          iVar5 = iVar5 + 1;
          iVar1 = FUN_006e0980(extraout_ECX_01);
        } while (iVar5 < iVar1);
        FUN_00517370();
        return;
      }
    }
  }
  FUN_00517370();
  return;
}

