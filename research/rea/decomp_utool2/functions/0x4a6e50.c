// rea decompile_all
// name: FUN_004a6e50
// address: 0x4a6e50
// body: available
// range: 0x4a6e50-0x4a7024 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a6e50(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  HWND hWndParent;
  BOOL BVar9;
  HWND in_ECX;
  int *piVar10;
  int iVar11;
  int iVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070397a;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  uVar1 = *(uint *)(DAT_00c8a67c + 0x44);
  iVar5 = DAT_00c8a67c;
joined_r0x004a6ebb:
  do {
    do {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        ExceptionList = local_10;
        return 1;
      }
      if (iVar5 == 0) {
        operator_new(0xd0);
        local_8 = 1;
        iVar5 = FUN_006cb960();
        local_8 = 0xffffffff;
        DAT_00c8a67c = iVar5;
      }
    } while ((*(uint *)(iVar5 + 0x44) <= uVar1) ||
            (piVar8 = *(int **)(*(int *)(iVar5 + 0x3c) + uVar1 * 4), piVar8 == (int *)0x0));
    local_8 = 2;
    if (DAT_00c8a6a4 == (undefined4 *)0x0) {
      puVar6 = operator_new(0x18);
      FUN_0063ea10();
      FUN_0063e930();
      *puVar6 = juce::ModalComponentManager::vftable;
      puVar6[2] = juce::ModalComponentManager::vftable;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      DAT_00c8a6a4 = puVar6;
    }
    iVar5 = DAT_00c8a6a4[5] + -1;
    if (-1 < iVar5) {
      iVar11 = 0;
      do {
        iVar2 = *(int *)(DAT_00c8a6a4[3] + iVar5 * 4);
        iVar12 = iVar11;
        if ((*(char *)(iVar2 + 0x40) != '\0') && (iVar12 = iVar11 + 1, iVar11 == 0)) {
          piVar10 = *(int **)(iVar2 + 0x2c);
          goto LAB_004a6f87;
        }
        iVar5 = iVar5 + -1;
        iVar11 = iVar12;
      } while (-1 < iVar5);
    }
    piVar10 = (int *)0x0;
LAB_004a6f87:
    local_8 = 0xffffffff;
    if ((piVar10 != (int *)0x0) && (piVar7 = piVar8, piVar10 != piVar8)) {
      do {
        piVar7 = (int *)piVar7[3];
        if (piVar7 == piVar10) goto LAB_004a6fb2;
      } while (piVar7 != (int *)0x0);
      cVar3 = (**(code **)(*piVar10 + 0x9c))(piVar8,uVar4);
      iVar5 = DAT_00c8a67c;
      if (cVar3 == '\0') goto joined_r0x004a6ebb;
    }
LAB_004a6fb2:
    piVar8 = (int *)FUN_006d1d80();
    if (piVar8 == (int *)0x0) {
      hWndParent = (HWND)0x0;
    }
    else if ((undefined **)*piVar8 == juce::HWNDComponentPeer::vftable) {
      hWndParent = (HWND)piVar8[0xe];
    }
    else {
      hWndParent = (HWND)(*(code *)((undefined **)*piVar8)[1])();
    }
    BVar9 = IsChild(hWndParent,in_ECX);
    iVar5 = DAT_00c8a67c;
    if (BVar9 != 0) {
      ExceptionList = local_10;
      return 0;
    }
  } while( true );
}

