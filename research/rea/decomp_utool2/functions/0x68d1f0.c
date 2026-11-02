// rea decompile_all
// name: FUN_0068d1f0
// address: 0x68d1f0
// body: available
// range: 0x68d1f0-0x68d363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0068d1f0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721508;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DAT_00c8a9c8 = DAT_00c8a9dc;
  piVar4 = (int *)FUN_0068d5f0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      ExceptionList = local_10;
      return '\0';
    }
    if (piVar4 == (int *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      if (piVar4[0x19] == 0) {
        puVar5 = operator_new(0xc);
        *puVar5 = juce::ReferenceCountedObject::vftable;
        piVar3 = puVar5 + 1;
        *piVar3 = 0;
        *puVar5 = juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::SharedPointer::
                  vftable;
        puVar5[2] = piVar4;
        if ((undefined4 *)piVar4[0x19] != puVar5) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          puVar2 = (undefined4 *)piVar4[0x19];
          piVar4[0x19] = (int)puVar5;
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar3 = puVar2 + 1;
            iVar1 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              (**(code **)*puVar2)(1);
            }
          }
        }
      }
      puVar5 = (undefined4 *)piVar4[0x19];
    }
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      puVar5[1] = puVar5[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    local_11 = (**(code **)(*piVar4 + 0x70))(param_1);
    if (local_11 != '\0') break;
    if (puVar5 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return '\0';
    }
    if (puVar5[2] == 0) break;
    piVar3 = (int *)piVar4[0x12];
    if (piVar3 != (int *)0x0) {
      iVar1 = piVar3[2];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        local_11 = (**(code **)(**(int **)(*piVar3 + iVar1 * 4) + 8))(param_1,piVar4);
        if ((local_11 != '\0') || (puVar5[2] == 0)) goto LAB_0068d334;
        if (piVar3[2] < iVar1) {
          iVar1 = piVar3[2];
        }
      }
    }
    local_8 = 0xffffffff;
    LOCK();
    piVar3 = puVar5 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar5)(1);
    }
    piVar4 = (int *)piVar4[3];
  }
LAB_0068d334:
  if (puVar5 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return local_11;
  }
  LOCK();
  piVar4 = puVar5 + 1;
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar1 != 1) {
    ExceptionList = local_10;
    return local_11;
  }
  (**(code **)*puVar5)(1);
  ExceptionList = local_10;
  return local_11;
}

