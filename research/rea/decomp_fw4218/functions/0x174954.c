// rea decompile_all
// name: FUN_00174954
// address: 0x174954
// body: available
// range: 0x174954-0x1749c1 inclusive
// range: 0x1749cc-0x174d3f inclusive
// range: 0x174d50-0x174eb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x174eb0 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00174954(int param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  int local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_24;
  int *piStack_20;
  int iStack_1c;
  uint local_18;
  
  local_24 = param_1;
  piStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if ((((param_4 & 1) != 0) && (-1 < (int)(param_4 << 0x1d))) && (uVar9 = 0, param_5 != 0)) {
    do {
      if (param_3 == 0) goto switchD_001749c0_caseD_0;
      uVar1 = FUN_00003738();
      FUN_00176438(local_24,param_3,uVar1);
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_5);
  }
  iVar5 = local_24;
  puVar2 = (uint *)*param_2;
  if (puVar2 == (uint *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (*puVar2 & 7) + 1;
  }
  local_30 = local_24 + 1;
  local_38 = local_24 + 2;
  local_34 = local_24 + 0x800;
  switch(iVar8) {
  case 1:
    local_3c = 0;
    if (puVar2 != (uint *)0x0) {
      local_3c = puVar2[4];
    }
    while (local_3c != 0) {
      FUN_00174954(local_24,&local_3c,param_3,local_18,param_5);
      if ((local_3c == 0) || (local_3c = *(uint *)(local_3c + 0x18), local_3c == 0)) {
        local_3c = 0;
      }
    }
    return;
  case 2:
    if ((puVar2 == (uint *)0x0) || (pcVar6 = (char *)puVar2[2], (char *)puVar2[2] == (char *)0x0)) {
      pcVar6 = DAT_00174d4c;
    }
    if (*pcVar6 == '\0') {
      pcVar6 = s__anonymous_00174d40;
    }
    else if ((puVar2 == (uint *)0x0) ||
            (pcVar6 = (char *)puVar2[2], (char *)puVar2[2] == (char *)0x0)) {
      pcVar6 = DAT_00174d4c;
    }
    FUN_001764f8(local_24,0x3c);
    if (pcVar6 != (char *)0x0) {
      uVar1 = FUN_00003738();
      FUN_00176438(local_24,pcVar6,uVar1);
      FUN_001765b4(local_24,param_2,local_18);
      iVar8 = local_24;
      iVar5 = local_34;
      iVar3 = *param_2;
      if ((int)(local_18 * 0x20000000) < 0) {
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        if (iVar4 == 0) {
          local_50[0] = 0x3e;
          iVar3 = *(int *)(local_34 + 4);
          if (0x199 < iVar3 + 3U) {
            FUN_00176128(local_24,local_24);
            iVar3 = 0;
            *(undefined4 *)(iVar5 + 4) = 0;
          }
          *(undefined1 *)(iVar8 + iVar3) = 0x20;
          *(undefined1 *)(*(int *)(iVar5 + 4) + local_30) = 0x2f;
          *(char *)(*(int *)(iVar5 + 4) + local_38) = (char)local_50[0];
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 3;
          return;
        }
        FUN_001764f8(local_24,0x3e);
        local_50[0] = 0;
        if (*param_2 != 0) {
          local_50[0] = *(int *)(*param_2 + 0x10);
        }
        while (local_50[0] != 0) {
          FUN_00174954(local_24,local_50,param_3,local_18,param_5 + 1);
          if ((local_50[0] == 0) || (local_50[0] = *(int *)(local_50[0] + 0x18), local_50[0] == 0))
          {
            local_50[0] = 0;
          }
        }
        FUN_0017652a(local_24,0x3c,0x2f);
        if (pcVar6 != (char *)0x0) {
          uVar1 = FUN_00003738();
          FUN_00176438(local_24,pcVar6,uVar1);
          FUN_001764f8(local_24,0x3e);
          return;
        }
        goto LAB_00174eb0;
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x10);
      }
      if (iVar5 == 0) {
        FUN_00176564(local_24,0x20,0x2f,0x3e,10);
        return;
      }
      iVar5 = *param_2;
      if (iVar5 == 0) {
        iVar8 = 0;
LAB_00174b44:
        iVar5 = 0;
      }
      else {
        iVar8 = *(int *)(iVar5 + 0x10);
        if (*(int *)(iVar5 + 0x10) == 0) goto LAB_00174b44;
        iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x14);
      }
      if (iVar8 == iVar5) {
        puVar2 = (uint *)0x0;
        if (*param_2 != 0) {
          puVar2 = *(uint **)(*param_2 + 0x10);
        }
        if ((puVar2 == (uint *)0x0) || ((*puVar2 & 7) != 2)) {
          puVar2 = (uint *)0x0;
          if (*param_2 != 0) {
            puVar2 = *(uint **)(*param_2 + 0x10);
          }
          if ((puVar2 == (uint *)0x0) || ((*puVar2 & 7) != 3)) goto LAB_00174b7a;
        }
        FUN_001764f8(local_24,0x3e);
        puVar2 = (uint *)0x0;
        if (*param_2 != 0) {
          puVar2 = *(uint **)(*param_2 + 0x10);
        }
        if ((puVar2 == (uint *)0x0) || ((*puVar2 & 7) != 2)) {
          iVar5 = 0;
          if (*param_2 != 0) {
            iVar5 = *(int *)(*param_2 + 0x10);
          }
          if ((iVar5 == 0) ||
             (pcVar7 = *(char **)(iVar5 + 0xc), *(char **)(iVar5 + 0xc) == (char *)0x0)) {
            pcVar7 = DAT_00174d4c;
          }
          FUN_00175ed0(local_24,pcVar7);
        }
        else {
          iVar5 = 0;
          if (*param_2 != 0) {
            iVar5 = *(int *)(*param_2 + 0x10);
          }
          if ((iVar5 == 0) ||
             (pcVar7 = *(char **)(iVar5 + 0xc), *(char **)(iVar5 + 0xc) == (char *)0x0)) {
            pcVar7 = DAT_00174d4c;
          }
          FUN_00174eb8(local_24,pcVar7,1,local_18);
        }
        FUN_0017652a(local_24,0x3c,0x2f);
LAB_00174c24:
        uVar1 = FUN_00003738(pcVar6);
        FUN_00176438(local_24,pcVar6,uVar1);
        FUN_0017652a(local_24,0x3e,10);
        return;
      }
LAB_00174b7a:
      FUN_0017652a(local_24,0x3e,10);
      local_50[0] = 0;
      if (*param_2 != 0) {
        local_50[0] = *(int *)(*param_2 + 0x10);
      }
      while (local_50[0] != 0) {
        FUN_00174954(local_24,local_50,param_3,local_18,param_5 + 1);
        if ((local_50[0] == 0) || (local_50[0] = *(int *)(local_50[0] + 0x18), local_50[0] == 0)) {
          local_50[0] = 0;
        }
      }
      local_50[0] = 0;
      if ((((local_18 & 1) != 0) && (-1 < (int)(local_18 << 0x1d))) && (uVar9 = 0, param_5 != 0)) {
        do {
          if (param_3 == 0) goto LAB_00174eb0;
          uVar1 = FUN_00003738();
          FUN_00176438(local_24,param_3,uVar1);
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_5);
      }
      FUN_0017652a(local_24,0x3c,0x2f);
      if (pcVar6 != (char *)0x0) goto LAB_00174c24;
      goto LAB_00174eb0;
    }
  default:
switchD_001749c0_caseD_0:
LAB_00174eb0:
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  case 3:
    if ((puVar2 == (uint *)0x0) || (pcVar6 = (char *)puVar2[3], (char *)puVar2[3] == (char *)0x0)) {
      pcVar6 = DAT_00174d4c;
    }
    FUN_00174eb8(local_24,pcVar6,1,local_18);
    if ((int)(local_18 << 0x1d) < 0) {
      return;
    }
    goto LAB_00174ca0;
  case 4:
    if ((puVar2 == (uint *)0x0) || (pcVar6 = (char *)puVar2[3], (char *)puVar2[3] == (char *)0x0)) {
      pcVar6 = DAT_00174d4c;
    }
    FUN_00175ed0(local_24,pcVar6);
    if ((int)(local_18 << 0x1d) < 0) {
      return;
    }
    goto LAB_00174ca0;
  case 5:
    FUN_00176564(local_24,0x3c,0x21,0x2d,0x2d);
    if ((*param_2 == 0) || (pcVar6 = *(char **)(*param_2 + 0xc), pcVar6 == (char *)0x0)) {
      pcVar6 = DAT_00174d4c;
    }
    if (pcVar6 == (char *)0x0) goto LAB_00174eb0;
    uVar1 = FUN_00003738();
    FUN_00176438(local_24,pcVar6,uVar1);
    iVar8 = local_24;
    iVar5 = local_34;
    local_48 = 0x2d;
    if (0x199 < *(int *)(local_34 + 4) + 3U) {
      FUN_00176128(local_24,local_24);
      *(undefined4 *)(iVar5 + 4) = 0;
    }
    *(char *)(iVar8 + *(int *)(iVar5 + 4)) = (char)local_48;
    *(undefined1 *)(*(int *)(iVar5 + 4) + local_30) = 0x2d;
    *(undefined1 *)(*(int *)(iVar5 + 4) + local_38) = 0x3e;
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 3;
    bVar10 = (int)(local_18 << 0x1d) < 0;
    goto LAB_00174d38;
  case 6:
  case 7:
    FUN_0017652a(local_24,0x3c,0x3f);
    iVar5 = *param_2;
    if ((iVar5 == 0) || (pcVar6 = *(char **)(iVar5 + 8), *(char **)(iVar5 + 8) == (char *)0x0)) {
      pcVar6 = DAT_00174eb4;
    }
    if (*pcVar6 == '\0') {
      pcVar6 = s__anonymous_00174d40;
    }
    else if ((iVar5 == 0) || (pcVar6 = *(char **)(iVar5 + 8), *(char **)(iVar5 + 8) == (char *)0x0))
    {
      pcVar6 = DAT_00174eb4;
    }
    if (pcVar6 == (char *)0x0) goto LAB_00174eb0;
    uVar1 = FUN_00003738();
    FUN_00176438(local_24,pcVar6,uVar1);
    puVar2 = (uint *)*param_2;
    if (puVar2 == (uint *)0x0) {
LAB_00174db6:
      pcVar6 = DAT_00174eb4;
LAB_00174db8:
      if (*pcVar6 != '\0') {
        FUN_001764f8(local_24,0x20);
        if ((*param_2 == 0) || (pcVar6 = *(char **)(*param_2 + 0xc), pcVar6 == (char *)0x0)) {
          pcVar6 = DAT_00174eb4;
        }
        if (pcVar6 == (char *)0x0) goto LAB_00174eb0;
        uVar1 = FUN_00003738();
        FUN_00176438(local_24,pcVar6,uVar1);
      }
    }
    else {
      if ((*puVar2 & 7) != 6) {
        pcVar6 = (char *)puVar2[3];
        if ((char *)puVar2[3] == (char *)0x0) goto LAB_00174db6;
        goto LAB_00174db8;
      }
      FUN_001765b4(local_24,param_2,local_18);
    }
    FUN_0017652a(local_24,0x3f,0x3e);
    bVar11 = (int)(local_18 << 0x1d) < 0;
    break;
  case 8:
    local_48 = 0x3c;
    local_50[0] = 0x44;
    local_40 = 0x4f;
    local_44 = 0x43;
    if (0x199 < *(int *)(local_24 + 0x804) + 5U) {
      FUN_00176128(local_24,local_24);
      *(undefined4 *)(iVar5 + 0x804) = 0;
    }
    *(char *)(iVar5 + *(int *)(iVar5 + 0x804)) = (char)local_48;
    *(undefined1 *)(*(int *)(iVar5 + 0x804) + local_30) = 0x21;
    *(char *)(*(int *)(iVar5 + 0x804) + local_38) = (char)local_50[0];
    *(char *)(*(int *)(iVar5 + 0x804) + iVar5 + 3) = (char)local_40;
    *(char *)(*(int *)(iVar5 + 0x804) + iVar5 + 4) = (char)local_44;
    *(int *)(iVar5 + 0x804) = *(int *)(iVar5 + 0x804) + 5;
    FUN_00176564(local_24,0x54,0x59,0x50,0x45);
    if ((*param_2 == 0) || (pcVar6 = *(char **)(*param_2 + 0xc), pcVar6 == (char *)0x0)) {
      pcVar6 = DAT_00174eb4;
    }
    if (*pcVar6 != '\0') {
      FUN_001764f8(local_24,0x20);
      if ((*param_2 == 0) || (pcVar6 = *(char **)(*param_2 + 0xc), pcVar6 == (char *)0x0)) {
        pcVar6 = DAT_00174eb4;
      }
      if (pcVar6 == (char *)0x0) goto LAB_00174eb0;
      uVar1 = FUN_00003738();
      FUN_00176438(local_24,pcVar6,uVar1);
    }
    FUN_001764f8(local_24,0x3e);
    bVar11 = false;
    if ((int)(local_18 << 0x1d) < 0) {
      return;
    }
  }
  bVar10 = false;
  if (!bVar11) {
LAB_00174d38:
    if (!bVar10) {
LAB_00174ca0:
      FUN_001764f8(local_24,10);
      return;
    }
  }
  return;
}

