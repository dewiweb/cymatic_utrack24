// rea decompile_all
// name: FUN_006ca390
// address: 0x6ca390
// body: available
// range: 0x6ca390-0x6ca533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ca390(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007261ec;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = *(int *)(in_ECX + 0x14) - 1;
  if (-1 < (int)uVar8) {
    do {
      iVar3 = *(int *)(*(int *)(in_ECX + 0xc) + uVar8 * 4);
      if (*(char *)(iVar3 + 0x40) == '\0') {
        local_18 = (undefined4 *)0x0;
        if (uVar8 < *(uint *)(in_ECX + 0x14)) {
          puVar7 = (undefined4 *)(*(int *)(in_ECX + 0xc) + uVar8 * 4);
          iVar6 = *(uint *)(in_ECX + 0x14) - 1;
          local_18 = (undefined4 *)*puVar7;
          *(int *)(in_ECX + 0x14) = iVar6;
          iVar6 = iVar6 - uVar8;
          if (0 < iVar6) {
            FUN_004c1df0(puVar7,puVar7 + 1,iVar6 * 4,uVar5);
          }
          iVar6 = *(int *)(in_ECX + 0x14);
          if ((iVar6 * 2 < *(int *)(in_ECX + 0x10)) && (iVar6 < *(int *)(in_ECX + 0x10))) {
            FUN_00409cf0(iVar6);
          }
        }
        local_8 = 0;
        if (*(char *)(iVar3 + 0x41) == '\0') {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar3 + 0x2c);
        }
        if (iVar6 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          if (*(int *)(iVar6 + 100) == 0) {
            puVar7 = operator_new(0xc);
            *puVar7 = juce::ReferenceCountedObject::vftable;
            piVar1 = puVar7 + 1;
            *piVar1 = 0;
            *puVar7 = juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::
                      SharedPointer::vftable;
            puVar7[2] = iVar6;
            if (*(undefined4 **)(iVar6 + 100) != puVar7) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              puVar4 = *(undefined4 **)(iVar6 + 100);
              *(undefined4 **)(iVar6 + 100) = puVar7;
              if (puVar4 != (undefined4 *)0x0) {
                LOCK();
                piVar1 = puVar4 + 1;
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)*puVar4)(1);
                }
              }
            }
          }
          puVar7 = *(undefined4 **)(iVar6 + 100);
        }
        if (puVar7 != (undefined4 *)0x0) {
          LOCK();
          puVar7[1] = puVar7[1] + 1;
          UNLOCK();
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar6 = *(int *)(iVar3 + 0x38);
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + iVar6 * 4) + 4))
                    (*(undefined4 *)(iVar3 + 0x3c));
        }
        if (puVar7 != (undefined4 *)0x0) {
          if ((undefined4 *)puVar7[2] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)puVar7[2])(1);
          }
          LOCK();
          piVar1 = puVar7 + 1;
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*puVar7)(1);
          }
        }
        local_8 = 0xffffffff;
        if (local_18 != (undefined4 *)0x0) {
          (**(code **)*local_18)(1);
        }
      }
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  ExceptionList = local_10;
  return;
}

