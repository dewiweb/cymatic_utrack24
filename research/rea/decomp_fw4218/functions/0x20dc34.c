// rea decompile_all
// name: FUN_0020dc34
// address: 0x20dc34
// body: available
// range: 0x20dc34-0x20e60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0020dc34(undefined4 param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  int iStack_2c;
  int *piStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  piStack_28 = param_3;
  FUN_00209db4(auStack_38,param_3);
  FUN_0020dbe8(auStack_34,param_2);
  iVar3 = FUN_002246d8(auStack_38,auStack_34);
  if (iVar3 == 0) {
    FUN_00209ee0(auStack_38);
    iVar11 = *param_3;
    bVar2 = false;
    piVar5 = (int *)FUN_0020b7f0(iVar11);
    iVar3 = iVar11;
    if (*piVar5 == 0) {
      piVar5 = (int *)FUN_0020b800(iVar11);
      if (*piVar5 == 0) {
        piVar5 = (int *)FUN_0020b818(iVar11);
        iVar10 = *piVar5;
        FUN_0020d7f4(param_2,iVar11);
        bVar2 = true;
      }
      else {
        piVar5 = (int *)FUN_0020b800(iVar11);
        iVar10 = *piVar5;
      }
    }
    else {
      piVar5 = (int *)FUN_0020b800(iVar11);
      if (*piVar5 == 0) {
        piVar5 = (int *)FUN_0020b7f0(iVar11);
        iVar10 = *piVar5;
      }
      else {
        piVar5 = (int *)FUN_0020b800(iVar11);
        iVar3 = *piVar5;
        while (piVar5 = (int *)FUN_0020b7f0(iVar3), *piVar5 != 0) {
          piVar5 = (int *)FUN_0020b7f0(iVar3);
          iVar3 = *piVar5;
        }
        piVar5 = (int *)FUN_0020b800(iVar3);
        iVar10 = *piVar5;
      }
    }
    if ((bVar2) || (iVar3 == iVar11)) {
      if (!bVar2) {
        puVar6 = (undefined4 *)FUN_0020b818(iVar3);
        uVar4 = *puVar6;
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        *puVar6 = uVar4;
        piVar5 = (int *)FUN_0022c4a8(param_2);
        if (*piVar5 == iVar11) {
          piVar5 = (int *)FUN_0022c4a8(param_2);
          *piVar5 = iVar10;
        }
        else {
          puVar6 = (undefined4 *)FUN_0020b818(iVar11);
          piVar5 = (int *)FUN_0020b7f0(*puVar6);
          if (*piVar5 == iVar11) {
            puVar6 = (undefined4 *)FUN_0020b818(iVar11);
            piVar5 = (int *)FUN_0020b7f0(*puVar6);
            *piVar5 = iVar10;
          }
          else {
            puVar6 = (undefined4 *)FUN_0020b818(iVar11);
            piVar5 = (int *)FUN_0020b800(*puVar6);
            *piVar5 = iVar10;
          }
        }
        piVar5 = (int *)FUN_0022c3f4(param_2);
        if (*piVar5 == iVar11) {
          piVar5 = (int *)FUN_0020b800(iVar11);
          if (*piVar5 == 0) {
            puVar6 = (undefined4 *)FUN_0020b818(iVar11);
            uVar4 = *puVar6;
            puVar6 = (undefined4 *)FUN_0022c3f4(param_2);
            *puVar6 = uVar4;
          }
          else {
            uVar4 = FUN_0020b7a4(iVar10);
            puVar6 = (undefined4 *)FUN_0022c3f4(param_2);
            *puVar6 = uVar4;
          }
        }
        piVar5 = (int *)FUN_0022c460(param_2);
        if (*piVar5 == iVar11) {
          piVar5 = (int *)FUN_0020b7f0(iVar11);
          if (*piVar5 == 0) {
            puVar6 = (undefined4 *)FUN_0020b818(iVar11);
            uVar4 = *puVar6;
            puVar6 = (undefined4 *)FUN_0022c460(param_2);
            *puVar6 = uVar4;
          }
          else {
            uVar4 = FUN_0020b770(iVar10);
            puVar6 = (undefined4 *)FUN_0022c460(param_2);
            *puVar6 = uVar4;
          }
        }
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
      piVar5 = (int *)FUN_0020b818(*puVar6);
      *piVar5 = iVar3;
      puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
      uVar4 = *puVar6;
      puVar6 = (undefined4 *)FUN_0020b7f0(iVar3);
      *puVar6 = uVar4;
      piVar5 = (int *)FUN_0020b800(iVar11);
      if (*piVar5 == iVar3) {
        if (iVar10 != 0) {
          piVar5 = (int *)FUN_0020b818(iVar10);
          *piVar5 = iVar3;
        }
      }
      else {
        if (iVar10 != 0) {
          puVar6 = (undefined4 *)FUN_0020b818(iVar3);
          uVar4 = *puVar6;
          puVar6 = (undefined4 *)FUN_0020b818(iVar10);
          *puVar6 = uVar4;
        }
        puVar6 = (undefined4 *)FUN_0020b818(iVar3);
        piVar5 = (int *)FUN_0020b7f0(*puVar6);
        *piVar5 = iVar10;
        puVar6 = (undefined4 *)FUN_0020b800(iVar11);
        uVar4 = *puVar6;
        puVar6 = (undefined4 *)FUN_0020b800(iVar3);
        *puVar6 = uVar4;
        puVar6 = (undefined4 *)FUN_0020b800(iVar11);
        piVar5 = (int *)FUN_0020b818(*puVar6);
        *piVar5 = iVar3;
      }
      piVar5 = (int *)FUN_0022c4a8(param_2);
      if (*piVar5 == iVar11) {
        piVar5 = (int *)FUN_0022c4a8(param_2);
        *piVar5 = iVar3;
      }
      else {
        puVar6 = (undefined4 *)FUN_0020b818(iVar11);
        piVar5 = (int *)FUN_0020b7f0(*puVar6);
        if (*piVar5 == iVar11) {
          puVar6 = (undefined4 *)FUN_0020b818(iVar11);
          piVar5 = (int *)FUN_0020b7f0(*puVar6);
          *piVar5 = iVar3;
        }
        else {
          puVar6 = (undefined4 *)FUN_0020b818(iVar11);
          piVar5 = (int *)FUN_0020b800(*puVar6);
          *piVar5 = iVar3;
        }
      }
      puVar6 = (undefined4 *)FUN_0020b818(iVar11);
      uVar4 = *puVar6;
      puVar6 = (undefined4 *)FUN_0020b818(iVar3);
      *puVar6 = uVar4;
      if (iVar10 == 0) {
        iVar10 = iVar3;
      }
      uVar4 = FUN_0020b7fc(iVar11);
      uVar7 = FUN_0020b7fc(iVar3);
      FUN_00248450(uVar7,uVar4);
      iVar3 = iVar11;
    }
    if ((*(int *)(param_2 + 0x10) != iVar10) &&
       (pcVar8 = (char *)FUN_0020b7fc(iVar3), *pcVar8 != '\0')) {
LAB_0020e59c:
      while( true ) {
        piVar5 = (int *)FUN_0022c4a8(param_2);
        if ((*piVar5 == iVar10) || (pcVar8 = (char *)FUN_0020b7fc(iVar10), *pcVar8 != '\x01'))
        goto LAB_0020e5c4;
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        piVar5 = (int *)FUN_0020b7f0(*puVar6);
        if (*piVar5 != iVar10) break;
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        piVar5 = (int *)FUN_0020b800(*puVar6);
        iVar11 = *piVar5;
        if (iVar11 == 0) {
          puVar9 = (undefined1 *)FUN_0020b7fc(iVar10);
          *puVar9 = 0;
          piVar5 = (int *)FUN_0020b818(iVar10);
          iVar10 = *piVar5;
        }
        else {
          pcVar8 = (char *)FUN_0020b7fc(iVar11);
          if (*pcVar8 == '\0') {
            puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
            *puVar9 = 1;
            puVar6 = (undefined4 *)FUN_0020b818(iVar10);
            puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
            *puVar9 = 0;
            puVar6 = (undefined4 *)FUN_0020b818(iVar10);
            FUN_0020d8c0(param_2,*puVar6);
            puVar6 = (undefined4 *)FUN_0020b818(iVar10);
            piVar5 = (int *)FUN_0020b800(*puVar6);
            iVar11 = *piVar5;
          }
          if (iVar11 == 0) {
            puVar9 = (undefined1 *)FUN_0020b7fc(iVar10);
            *puVar9 = 0;
            piVar5 = (int *)FUN_0020b818(iVar10);
            iVar10 = *piVar5;
          }
          else {
            piVar5 = (int *)FUN_0020b7f0(iVar11);
            if (*piVar5 != 0) {
              puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
              pcVar8 = (char *)FUN_0020b7fc(*puVar6);
              if (*pcVar8 == '\x01') goto LAB_0020e188;
LAB_0020e1dc:
              piVar5 = (int *)FUN_0020b800(iVar11);
              if (*piVar5 == 0) {
LAB_0020e210:
                piVar5 = (int *)FUN_0020b7f0(iVar11);
                if (*piVar5 != 0) {
                  puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
                  puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
                  *puVar9 = 1;
                }
                puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
                *puVar9 = 0;
                FUN_0020d9c8(param_2,iVar11);
                puVar6 = (undefined4 *)FUN_0020b818(iVar10);
                piVar5 = (int *)FUN_0020b800(*puVar6);
                iVar11 = *piVar5;
              }
              else {
                puVar6 = (undefined4 *)FUN_0020b800(iVar11);
                pcVar8 = (char *)FUN_0020b7fc(*puVar6);
                if (*pcVar8 == '\x01') goto LAB_0020e210;
              }
              if (iVar11 != 0) {
                puVar6 = (undefined4 *)FUN_0020b818(iVar10);
                puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
                uVar1 = *puVar9;
                puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
                *puVar9 = uVar1;
                puVar6 = (undefined4 *)FUN_0020b818(iVar10);
                puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
                *puVar9 = 1;
                piVar5 = (int *)FUN_0020b800(iVar11);
                if (*piVar5 != 0) {
                  puVar6 = (undefined4 *)FUN_0020b800(iVar11);
                  puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
                  *puVar9 = 1;
                }
                puVar6 = (undefined4 *)FUN_0020b818(iVar10);
                FUN_0020d8c0(param_2,*puVar6);
              }
              goto LAB_0020e5c4;
            }
LAB_0020e188:
            piVar5 = (int *)FUN_0020b800(iVar11);
            if (*piVar5 != 0) {
              puVar6 = (undefined4 *)FUN_0020b800(iVar11);
              pcVar8 = (char *)FUN_0020b7fc(*puVar6);
              if (*pcVar8 != '\x01') goto LAB_0020e1dc;
            }
            puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
            *puVar9 = 0;
            piVar5 = (int *)FUN_0020b818(iVar10);
            iVar10 = *piVar5;
          }
        }
      }
      puVar6 = (undefined4 *)FUN_0020b818(iVar10);
      piVar5 = (int *)FUN_0020b7f0(*puVar6);
      iVar11 = *piVar5;
      if (iVar11 == 0) {
        puVar9 = (undefined1 *)FUN_0020b7fc(iVar10);
        *puVar9 = 0;
        piVar5 = (int *)FUN_0020b818(iVar10);
        iVar10 = *piVar5;
        goto LAB_0020e59c;
      }
      pcVar8 = (char *)FUN_0020b7fc(iVar11);
      if (*pcVar8 == '\0') {
        puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
        *puVar9 = 1;
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
        *puVar9 = 0;
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        FUN_0020d9c8(param_2,*puVar6);
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        piVar5 = (int *)FUN_0020b7f0(*puVar6);
        iVar11 = *piVar5;
      }
      if (iVar11 == 0) {
        puVar9 = (undefined1 *)FUN_0020b7fc(iVar10);
        *puVar9 = 0;
        piVar5 = (int *)FUN_0020b818(iVar10);
        iVar10 = *piVar5;
        goto LAB_0020e59c;
      }
      piVar5 = (int *)FUN_0020b800(iVar11);
      if (*piVar5 == 0) {
LAB_0020e418:
        piVar5 = (int *)FUN_0020b7f0(iVar11);
        if (*piVar5 != 0) {
          puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
          pcVar8 = (char *)FUN_0020b7fc(*puVar6);
          if (*pcVar8 != '\x01') goto LAB_0020e46c;
        }
        puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
        *puVar9 = 0;
        piVar5 = (int *)FUN_0020b818(iVar10);
        iVar10 = *piVar5;
        goto LAB_0020e59c;
      }
      puVar6 = (undefined4 *)FUN_0020b800(iVar11);
      pcVar8 = (char *)FUN_0020b7fc(*puVar6);
      if (*pcVar8 == '\x01') goto LAB_0020e418;
LAB_0020e46c:
      piVar5 = (int *)FUN_0020b7f0(iVar11);
      if (*piVar5 == 0) {
LAB_0020e4a0:
        piVar5 = (int *)FUN_0020b800(iVar11);
        if (*piVar5 != 0) {
          puVar6 = (undefined4 *)FUN_0020b800(iVar11);
          puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
          *puVar9 = 1;
        }
        puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
        *puVar9 = 0;
        FUN_0020d8c0(param_2,iVar11);
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        piVar5 = (int *)FUN_0020b7f0(*puVar6);
        iVar11 = *piVar5;
      }
      else {
        puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
        pcVar8 = (char *)FUN_0020b7fc(*puVar6);
        if (*pcVar8 == '\x01') goto LAB_0020e4a0;
      }
      if (iVar11 != 0) {
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
        uVar1 = *puVar9;
        puVar9 = (undefined1 *)FUN_0020b7fc(iVar11);
        *puVar9 = uVar1;
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
        *puVar9 = 1;
        piVar5 = (int *)FUN_0020b7f0(iVar11);
        if (*piVar5 != 0) {
          puVar6 = (undefined4 *)FUN_0020b7f0(iVar11);
          puVar9 = (undefined1 *)FUN_0020b7fc(*puVar6);
          *puVar9 = 1;
        }
        puVar6 = (undefined4 *)FUN_0020b818(iVar10);
        FUN_0020d9c8(param_2,*puVar6);
      }
LAB_0020e5c4:
      puVar9 = (undefined1 *)FUN_0020b7fc(iVar10);
      *puVar9 = 1;
    }
    FUN_0020d630(param_2,iVar3,1);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    uVar4 = FUN_00209db4(local_30,auStack_38);
  }
  else {
    uVar4 = FUN_0020dbe8(local_30,param_2);
  }
  return uVar4;
}

