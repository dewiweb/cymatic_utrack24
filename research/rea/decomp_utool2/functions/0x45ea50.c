// rea decompile_all
// name: FUN_0045ea50
// address: 0x45ea50
// body: available
// range: 0x45ea50-0x45f054 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0045ea50(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *in_EDX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_14;
  int *local_c;
  int *local_8;
  
  local_c = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1)
  ;
  FUN_0045fb60(param_1 + -1);
  local_8 = local_c + 1;
  if (in_EDX < local_c) {
    while( true ) {
      iVar4 = *local_c;
      piVar7 = (int *)(iVar4 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      piVar5 = local_c + -1;
      iVar3 = *piVar5;
      piVar8 = (int *)(iVar3 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      if (iVar3 == iVar4) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0045c1e0(iVar3,iVar4);
      }
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (iVar4 < 0) break;
      iVar4 = *piVar5;
      piVar7 = (int *)(iVar4 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      iVar3 = *local_c;
      piVar8 = (int *)(iVar3 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      if (iVar3 == iVar4) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0045c1e0(iVar3,iVar4);
      }
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if ((iVar4 < 0) || (local_c = piVar5, piVar5 <= in_EDX)) break;
    }
  }
  piVar7 = local_8;
  local_14 = local_8;
  piVar5 = local_8;
  piVar8 = local_c;
  if (local_8 < param_1) {
    while( true ) {
      iVar4 = *local_c;
      piVar7 = (int *)(iVar4 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      iVar3 = *local_8;
      piVar5 = (int *)(iVar3 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      if (iVar3 == iVar4) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0045c1e0(iVar3,iVar4);
      }
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = local_8;
      local_14 = local_8;
      piVar5 = local_8;
      if (iVar4 < 0) break;
      iVar4 = *local_8;
      piVar6 = (int *)(iVar4 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      iVar3 = *local_c;
      piVar1 = (int *)(iVar3 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (iVar3 == iVar4) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0045c1e0(iVar3,iVar4);
      }
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if ((iVar4 < 0) ||
         (local_8 = local_8 + 1, piVar7 = local_8, local_14 = local_8, piVar5 = local_8,
         param_1 <= local_8)) break;
    }
  }
joined_r0x0045ecf3:
  do {
    piVar6 = local_c;
    if (param_1 <= piVar7) {
joined_r0x0045ee4b:
      for (; in_EDX < local_c; local_c = local_c + -1) {
        piVar6 = piVar6 + -1;
        iVar4 = *piVar8;
        piVar7 = (int *)(iVar4 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        iVar3 = *piVar6;
        piVar1 = (int *)(iVar3 + -8);
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        if (iVar3 == iVar4) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0045c1e0(iVar3,iVar4);
        }
        if (piVar1 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar1);
          }
        }
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
          }
        }
        piVar7 = local_14;
        if (-1 < iVar4) {
          iVar4 = *piVar6;
          piVar1 = (int *)(iVar4 + -8);
          if (piVar1 != &DAT_00bfe124) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          iVar3 = *piVar8;
          piVar2 = (int *)(iVar3 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          if (iVar3 == iVar4) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_0045c1e0(iVar3,iVar4);
          }
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar2);
            }
          }
          if (piVar1 != &DAT_00bfe124) {
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 0) {
              FID_conflict__free(piVar1);
            }
          }
          if (iVar4 < 0) break;
          piVar8 = piVar8 + -1;
          if (piVar8 != piVar6) {
            iVar4 = *piVar8;
            *piVar8 = (int)&DAT_00bfe12c;
            *piVar8 = *piVar6;
            *piVar6 = iVar4;
          }
        }
      }
      if (local_c == in_EDX) {
        if (piVar7 == param_1) {
          *in_ECX = piVar8;
          in_ECX[1] = piVar5;
          return in_ECX;
        }
        if (piVar5 != piVar7) {
          iVar4 = *piVar8;
          *piVar8 = (int)&DAT_00bfe12c;
          *piVar8 = *piVar5;
          *piVar5 = iVar4;
        }
        local_14 = piVar7 + 1;
        iVar4 = *piVar8;
        *piVar8 = (int)&DAT_00bfe12c;
        *piVar8 = *piVar7;
        *piVar7 = iVar4;
        piVar7 = local_14;
        piVar5 = piVar5 + 1;
        piVar8 = piVar8 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar7 == param_1) {
          piVar8 = piVar8 + -1;
          if (local_c != piVar8) {
            iVar4 = *local_c;
            *local_c = (int)&DAT_00bfe12c;
            *local_c = *piVar8;
            *piVar8 = iVar4;
          }
          iVar4 = *piVar8;
          piVar5 = piVar5 + -1;
          *piVar8 = (int)&DAT_00bfe12c;
          *piVar8 = *piVar5;
          *piVar5 = iVar4;
        }
        else {
          iVar4 = *piVar7;
          *piVar7 = (int)&DAT_00bfe12c;
          *piVar7 = *local_c;
          local_14 = piVar7 + 1;
          *local_c = iVar4;
          piVar7 = local_14;
        }
      }
      goto joined_r0x0045ecf3;
    }
    iVar4 = *piVar7;
    piVar1 = (int *)(iVar4 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar3 = *piVar8;
    piVar2 = (int *)(iVar3 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    if (iVar3 == iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0045c1e0(iVar3,iVar4);
    }
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    local_8 = piVar5;
    if (-1 < iVar4) {
      iVar4 = *piVar8;
      piVar1 = (int *)(iVar4 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      iVar3 = *piVar7;
      piVar2 = (int *)(iVar3 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (iVar3 == iVar4) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0045c1e0(iVar3,iVar4);
      }
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      local_14 = piVar7;
      if (iVar4 < 0) goto joined_r0x0045ee4b;
      local_8 = piVar5 + 1;
      if (piVar5 != piVar7) {
        iVar4 = *piVar5;
        *piVar5 = (int)&DAT_00bfe12c;
        *piVar5 = *piVar7;
        *piVar7 = iVar4;
      }
    }
    local_14 = piVar7 + 1;
    piVar7 = local_14;
    piVar5 = local_8;
  } while( true );
}

