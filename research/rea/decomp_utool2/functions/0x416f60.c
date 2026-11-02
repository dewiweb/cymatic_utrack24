// rea decompile_all
// name: FUN_00416f60
// address: 0x416f60
// body: available
// range: 0x416f60-0x4171fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416f60(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *in_ECX;
  int *in_EDX;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_14;
  int *local_c;
  int *local_8;
  
  local_c = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1)
  ;
  FUN_00417320(param_1 + -1);
  piVar6 = local_c + 1;
  if (in_EDX < local_c) {
    while( true ) {
      iVar2 = local_c[-1];
      iVar1 = *local_c;
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      iVar2 = FUN_00416bc0(iVar2,iVar1);
      if (iVar2 < 0) break;
      iVar2 = *local_c;
      iVar1 = local_c[-1];
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      iVar2 = FUN_00416bc0(iVar2,iVar1);
      if ((iVar2 < 0) || (local_c = local_c + -1, local_c <= in_EDX)) break;
    }
  }
  piVar8 = piVar6;
  local_14 = piVar6;
  local_8 = piVar6;
  piVar4 = local_c;
  if (piVar6 < param_1) {
    while( true ) {
      iVar2 = *piVar6;
      iVar1 = *local_c;
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      iVar2 = FUN_00416bc0(iVar2,iVar1);
      piVar8 = piVar6;
      local_14 = piVar6;
      local_8 = piVar6;
      if (iVar2 < 0) break;
      iVar2 = *local_c;
      iVar1 = *piVar6;
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      iVar2 = FUN_00416bc0(iVar2,iVar1);
      if ((iVar2 < 0) ||
         (piVar6 = piVar6 + 1, piVar8 = piVar6, local_14 = piVar6, local_8 = piVar6,
         param_1 <= piVar6)) break;
    }
  }
joined_r0x00417065:
  do {
    piVar3 = local_c;
    if (param_1 <= piVar6) {
joined_r0x004170de:
      for (; piVar5 = piVar6, piVar7 = piVar8, in_EDX < local_c; local_c = local_c + -1) {
        piVar3 = piVar3 + -1;
        iVar2 = *piVar3;
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          LOCK();
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          UNLOCK();
        }
        if (iVar2 != 0) {
          LOCK();
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          UNLOCK();
        }
        iVar2 = FUN_00416bc0(iVar2,iVar1);
        if (-1 < iVar2) {
          iVar2 = *piVar4;
          iVar1 = *piVar3;
          if (iVar1 != 0) {
            LOCK();
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
            UNLOCK();
          }
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          iVar2 = FUN_00416bc0(iVar2,iVar1);
          piVar5 = local_14;
          piVar7 = local_8;
          if (iVar2 < 0) break;
          piVar4 = piVar4 + -1;
          if (piVar4 != piVar3) {
            iVar2 = *piVar4;
            *piVar4 = *piVar3;
            *piVar3 = iVar2;
          }
        }
        piVar6 = local_14;
        piVar8 = local_8;
      }
      if (local_c == in_EDX) {
        if (piVar5 == param_1) {
          in_ECX[1] = (uint)piVar7;
          *in_ECX = (uint)piVar4;
          return;
        }
        if (piVar7 != piVar5) {
          iVar2 = *piVar4;
          *piVar4 = *piVar7;
          *piVar7 = iVar2;
        }
        piVar6 = piVar5 + 1;
        iVar2 = *piVar4;
        *piVar4 = *piVar5;
        *piVar5 = iVar2;
        piVar8 = piVar7 + 1;
        local_14 = piVar6;
        local_8 = piVar7 + 1;
        piVar4 = piVar4 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_1) {
          piVar4 = piVar4 + -1;
          if (local_c != piVar4) {
            iVar2 = *local_c;
            *local_c = *piVar4;
            *piVar4 = iVar2;
          }
          iVar2 = *piVar4;
          piVar8 = piVar7 + -1;
          *piVar4 = *piVar8;
          *piVar8 = iVar2;
          piVar6 = piVar5;
          local_8 = piVar8;
        }
        else {
          iVar2 = *piVar5;
          *piVar5 = *local_c;
          piVar6 = piVar5 + 1;
          *local_c = iVar2;
          piVar8 = piVar7;
          local_14 = piVar6;
        }
      }
      goto joined_r0x00417065;
    }
    iVar2 = *piVar4;
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    if (iVar2 != 0) {
      LOCK();
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      UNLOCK();
    }
    iVar2 = FUN_00416bc0(iVar2,iVar1);
    local_8 = piVar8;
    if (-1 < iVar2) {
      iVar2 = *piVar6;
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        LOCK();
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        UNLOCK();
      }
      if (iVar2 != 0) {
        LOCK();
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        UNLOCK();
      }
      iVar2 = FUN_00416bc0(iVar2,iVar1);
      local_14 = piVar6;
      if (iVar2 < 0) goto joined_r0x004170de;
      local_8 = piVar8 + 1;
      if (piVar8 != piVar6) {
        iVar2 = *piVar8;
        *piVar8 = *piVar6;
        *piVar6 = iVar2;
      }
    }
    piVar6 = piVar6 + 1;
    piVar8 = local_8;
    local_14 = piVar6;
  } while( true );
}

