// rea decompile_all
// name: FUN_0068d370
// address: 0x68d370
// body: available
// range: 0x68d370-0x68d5a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0068d370(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *extraout_EDX;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072152b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar9 = (int *)FUN_0068d5f0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (piVar9 != (int *)0x0) {
    if (piVar9 == (int *)0x0) {
      puVar10 = (undefined4 *)0x0;
      goto LAB_0068d408;
    }
    do {
      if (piVar9[0x19] == 0) {
        puVar10 = operator_new(0xc);
        *puVar10 = juce::ReferenceCountedObject::vftable;
        piVar3 = puVar10 + 1;
        *piVar3 = 0;
        *puVar10 = juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::SharedPointer
                   ::vftable;
        puVar10[2] = piVar9;
        if ((undefined4 *)piVar9[0x19] != puVar10) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          puVar2 = (undefined4 *)piVar9[0x19];
          piVar9[0x19] = (int)puVar10;
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
      puVar10 = (undefined4 *)piVar9[0x19];
LAB_0068d408:
      if (puVar10 != (undefined4 *)0x0) {
        LOCK();
        puVar10[1] = puVar10[1] + 1;
        UNLOCK();
      }
      local_8 = 0;
      piVar3 = (int *)piVar9[0x12];
      if (piVar3 != (int *)0x0) {
        iVar1 = piVar3[2];
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
          local_11 = (**(code **)(**(int **)(*piVar3 + iVar1 * 4) + 4))(param_1,piVar9);
          if (local_11 != '\0') goto LAB_0068d568;
          if (puVar10 == (undefined4 *)0x0) {
            ExceptionList = local_10;
            return '\0';
          }
          if (puVar10[2] == 0) goto LAB_0068d568;
          if (piVar3[2] < iVar1) {
            iVar1 = piVar3[2];
          }
        }
      }
      local_11 = (**(code **)(*piVar9 + 0x6c))(param_1);
      iVar1 = DAT_00c8a678;
      if (local_11 != '\0') {
LAB_0068d577:
        if (puVar10 == (undefined4 *)0x0) {
          ExceptionList = local_10;
          return local_11;
        }
        LOCK();
        piVar9 = puVar10 + 1;
        iVar1 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
LAB_0068d581:
        if (iVar1 != 1) {
          ExceptionList = local_10;
          return local_11;
        }
        (**(code **)*puVar10)(1);
        ExceptionList = local_10;
        return local_11;
      }
      if (puVar10 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return '\0';
      }
      if (puVar10[2] == 0) goto LAB_0068d577;
      if (DAT_00c8a678 != 0) {
        cVar6 = FUN_006e5f30(9);
        if (extraout_EDX[1] == 1) {
          iVar4 = *extraout_EDX;
          if (iVar4 != 9) {
            if (iVar4 < 0x100) {
              wVar7 = _towlower((wint_t)iVar4);
              wVar8 = _towlower(9);
              if (wVar7 == wVar8) goto LAB_0068d511;
            }
            goto LAB_0068d515;
          }
LAB_0068d511:
          bVar5 = true;
        }
        else {
LAB_0068d515:
          bVar5 = false;
        }
        if ((cVar6 != '\0') || (bVar5)) {
          FUN_006cc3d0(cVar6);
          local_11 = iVar1 != DAT_00c8a678;
          if (((bool)local_11) || (puVar10[2] == 0)) {
LAB_0068d568:
            if (puVar10 == (undefined4 *)0x0) {
              ExceptionList = local_10;
              return local_11;
            }
            LOCK();
            piVar9 = puVar10 + 1;
            iVar1 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            goto LAB_0068d581;
          }
        }
      }
      local_8 = 0xffffffff;
      LOCK();
      piVar3 = puVar10 + 1;
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar10)(1);
      }
      piVar9 = (int *)piVar9[3];
    } while (piVar9 != (int *)0x0);
  }
  ExceptionList = local_10;
  return '\0';
}

