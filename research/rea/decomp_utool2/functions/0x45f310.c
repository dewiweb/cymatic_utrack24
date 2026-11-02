// rea decompile_all
// name: FUN_0045f310
// address: 0x45f310
// body: available
// range: 0x45f310-0x45f9ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0045f310(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_ECX;
  int *in_EDX;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *local_14;
  int *local_c;
  int *local_8;
  
  local_8 = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1)
  ;
  FUN_0045fda0(param_1 + -1);
  local_c = local_8 + 1;
  if (in_EDX < local_8) {
    do {
      iVar5 = *local_8;
      piVar6 = (int *)(iVar5 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      piVar1 = local_8 + -1;
      iVar7 = *piVar1;
      piVar9 = (int *)(iVar7 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
      if (iVar7 == iVar5) {
        iVar7 = 0;
      }
      else {
        do {
          iVar5 = FUN_00443260();
          iVar7 = FUN_00443260();
          if ((iVar5 - iVar7 != 0) &&
             (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, iVar7 != 0)) goto LAB_0045f3bf;
        } while (iVar5 != 0);
        iVar7 = 0;
      }
LAB_0045f3bf:
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if (iVar7 < 0) break;
      iVar5 = *piVar1;
      piVar6 = (int *)(iVar5 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      iVar7 = *local_8;
      piVar9 = (int *)(iVar7 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
      if (iVar7 == iVar5) {
        iVar7 = 0;
      }
      else {
        do {
          iVar5 = FUN_00443260();
          iVar7 = FUN_00443260();
          if ((iVar5 - iVar7 != 0) &&
             (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, iVar7 != 0)) goto LAB_0045f46f;
        } while (iVar5 != 0);
        iVar7 = 0;
      }
LAB_0045f46f:
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      if ((iVar7 < 0) || (local_8 = piVar1, piVar1 <= in_EDX)) break;
    } while( true );
  }
  piVar6 = local_8;
  piVar1 = local_c;
  piVar9 = local_c;
  local_14 = local_8;
  if (local_c < param_1) {
    do {
      iVar5 = *local_8;
      piVar1 = (int *)(iVar5 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      iVar7 = *local_c;
      piVar9 = (int *)(iVar7 + -8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        UNLOCK();
      }
      if (iVar7 == iVar5) {
        iVar7 = 0;
      }
      else {
        do {
          iVar5 = FUN_00443260();
          iVar7 = FUN_00443260();
          if ((iVar5 - iVar7 != 0) &&
             (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, iVar7 != 0)) goto LAB_0045f530;
        } while (iVar5 != 0);
        iVar7 = 0;
      }
LAB_0045f530:
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar9);
        }
      }
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar1);
        }
      }
      piVar1 = local_c;
      piVar9 = local_c;
      if (iVar7 < 0) break;
      iVar5 = *local_c;
      piVar8 = (int *)(iVar5 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      iVar7 = *local_8;
      piVar2 = (int *)(iVar7 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      if (iVar7 == iVar5) {
        iVar7 = 0;
      }
      else {
        do {
          iVar5 = FUN_00443260();
          iVar7 = FUN_00443260();
          if ((iVar5 - iVar7 != 0) &&
             (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, iVar7 != 0)) goto LAB_0045f5df;
        } while (iVar5 != 0);
        iVar7 = 0;
      }
LAB_0045f5df:
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      if ((iVar7 < 0) ||
         (local_c = local_c + 1, piVar1 = local_c, piVar9 = local_c, param_1 <= local_c)) break;
    } while( true );
  }
joined_r0x0045f64a:
  do {
    piVar8 = local_14;
    if (param_1 <= piVar1) {
joined_r0x0045f7e1:
      for (; in_EDX < local_14; local_14 = local_14 + -1) {
        piVar8 = piVar8 + -1;
        iVar5 = *piVar6;
        piVar6 = (int *)(iVar5 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          *piVar6 = *piVar6 + 1;
          UNLOCK();
        }
        iVar7 = *piVar8;
        piVar2 = (int *)(iVar7 + -8);
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        if (iVar7 == iVar5) {
          iVar7 = 0;
        }
        else {
          do {
            iVar5 = FUN_00443260();
            iVar7 = FUN_00443260();
            if ((iVar5 - iVar7 != 0) &&
               (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, iVar7 != 0)) goto LAB_0045f853;
          } while (iVar5 != 0);
          iVar7 = 0;
        }
LAB_0045f853:
        if (piVar2 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar2);
          }
        }
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar6);
          }
        }
        if (-1 < iVar7) {
          piVar6 = (int *)(*piVar8 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
          iVar5 = *local_8;
          piVar6 = (int *)(iVar5 + -8);
          if (piVar6 != &DAT_00bfe124) {
            LOCK();
            *piVar6 = *piVar6 + 1;
            UNLOCK();
          }
          cVar4 = FUN_0045fd20(iVar5);
          piVar6 = local_8;
          if (cVar4 != '\0') break;
          local_8 = local_8 + -1;
          if (local_8 != piVar8) {
            iVar5 = *local_8;
            *local_8 = (int)&DAT_00bfe12c;
            *local_8 = *piVar8;
            *piVar8 = iVar5;
          }
        }
        piVar6 = local_8;
      }
      if (local_14 == in_EDX) {
        if (piVar1 == param_1) {
          *in_ECX = piVar6;
          in_ECX[1] = piVar9;
          return in_ECX;
        }
        if (piVar9 != piVar1) {
          iVar5 = *piVar6;
          *piVar6 = (int)&DAT_00bfe12c;
          *piVar6 = *piVar9;
          *piVar9 = iVar5;
        }
        iVar5 = *local_8;
        *local_8 = (int)&DAT_00bfe12c;
        *local_8 = *piVar1;
        *piVar1 = iVar5;
        piVar6 = local_8 + 1;
        piVar1 = piVar1 + 1;
        piVar9 = piVar9 + 1;
        local_8 = local_8 + 1;
      }
      else {
        local_14 = local_14 + -1;
        if (piVar1 == param_1) {
          piVar6 = piVar6 + -1;
          if (local_14 != piVar6) {
            iVar5 = *local_14;
            *local_14 = (int)&DAT_00bfe12c;
            *local_14 = *piVar6;
            *piVar6 = iVar5;
          }
          iVar5 = *piVar6;
          piVar9 = piVar9 + -1;
          *piVar6 = (int)&DAT_00bfe12c;
          *piVar6 = *piVar9;
          *piVar9 = iVar5;
          local_8 = piVar6;
        }
        else {
          iVar5 = *piVar1;
          *piVar1 = (int)&DAT_00bfe12c;
          *piVar1 = *local_14;
          *local_14 = iVar5;
          piVar1 = piVar1 + 1;
        }
      }
      goto joined_r0x0045f64a;
    }
    iVar5 = *piVar1;
    piVar2 = (int *)(iVar5 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    iVar7 = *piVar6;
    piVar3 = (int *)(iVar7 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    if (iVar7 == iVar5) {
      iVar7 = 0;
    }
    else {
      do {
        iVar5 = FUN_00443260();
        iVar7 = FUN_00443260();
        if ((iVar5 - iVar7 != 0) &&
           (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, piVar6 = local_8, iVar7 != 0))
        goto LAB_0045f6b0;
      } while (iVar5 != 0);
      iVar7 = 0;
      piVar6 = local_8;
    }
LAB_0045f6b0:
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    local_c = piVar9;
    if (-1 < iVar7) {
      iVar5 = *piVar6;
      piVar2 = (int *)(iVar5 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      iVar7 = *piVar1;
      piVar3 = (int *)(iVar7 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      if (iVar7 == iVar5) {
        iVar7 = 0;
      }
      else {
        do {
          iVar5 = FUN_00443260();
          iVar7 = FUN_00443260();
          if ((iVar5 - iVar7 != 0) &&
             (iVar7 = (iVar5 - iVar7 >> 0x1f & 0xfffffffeU) + 1, piVar6 = local_8, iVar7 != 0))
          goto LAB_0045f75f;
        } while (iVar5 != 0);
        iVar7 = 0;
        piVar6 = local_8;
      }
LAB_0045f75f:
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      if (iVar7 < 0) goto joined_r0x0045f7e1;
      local_c = piVar9 + 1;
      if (piVar9 != piVar1) {
        iVar5 = *piVar9;
        *piVar9 = (int)&DAT_00bfe12c;
        *piVar9 = *piVar1;
        *piVar1 = iVar5;
      }
    }
    piVar1 = piVar1 + 1;
    piVar9 = local_c;
  } while( true );
}

