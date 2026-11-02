// rea decompile_all
// name: FUN_001721b4
// address: 0x1721b4
// body: available
// range: 0x1721b4-0x17264b inclusive
// range: 0x1726ac-0x1726b1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_001721b4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  local_30 = 0;
  local_3c = (int *)0x0;
  piVar5 = (int *)0xfffffffe;
  if (((param_2 == 0) ||
      ((((param_3 != 0 && (*(int *)(param_3 + 0x2c) == 0)) || (param_4 == 0)) ||
       ((*(int *)(param_4 + 0x20) == 0 || (*(int *)(param_4 + 0x24) == 0)))))) ||
     (local_24 = param_1, local_20 = param_2, iStack_1c = param_3, iStack_18 = param_4,
     piVar5 = (int *)FUN_001a4d9c(*(int *)(param_4 + 0x20),&local_3c), piVar5 != (int *)0x0)) {
    return piVar5;
  }
  iVar1 = FUN_001a4bdc(local_3c + 0x2c,0);
  if (((iVar1 == 0) || (local_3c[0x1c] == 0)) || (*(int *)(local_3c[0x1c] + 4) == 0))
  goto LAB_00172534;
  if (*(int *)(*(int *)(param_4 + 0x24) + 0xc) - 300U < 100) {
    iVar6 = 0;
    iVar1 = FUN_001a4bc4(*(int *)(param_4 + 0x24) + 0x58,0);
    if (iVar1 == 0) {
      local_38 = (int *)(local_24 + 0x78);
      do {
        iVar1 = FUN_001a4bdc(*(int *)(param_4 + 0x24) + 0x58,iVar6);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
          local_40 = (int *)0x0;
          FUN_001a7c44(*(int *)(iVar1 + 4) + 0x14,s_transport_0017264c,&local_40);
          if ((local_40 == (int *)0x0) || ((*local_40 == 0 || (local_40[1] == 0)))) {
            iVar2 = FUN_001a6f04(local_38,&DAT_00172658);
            if (iVar2 == 0) goto LAB_00172290;
            goto LAB_00172272;
          }
          iVar2 = FUN_001a6f04(local_40[1],local_38);
          if (iVar2 != 0) goto LAB_00172272;
LAB_00172290:
          if (*(int *)(iVar1 + 4) != 0) {
            if ((((local_3c[1] != 0) && (*(int *)(local_3c[1] + 0xc) != 0)) &&
                (*(int *)(*(int *)(iVar1 + 4) + 0xc) != 0)) && (iVar6 = FUN_001a6f04(), iVar6 == 0))
            {
              local_34 = 0;
              FUN_001a7c44(*(int *)(iVar1 + 4) + 0x14,s_maddr_0017265c,&local_34);
              if ((local_34 != 0) && (*(int *)(local_34 + 4) != 0)) {
                local_40 = (int *)0x0;
                local_38 = (int *)0x0;
                FUN_001a5664(local_3c,0,&local_40);
                if (((local_40 != (int *)0x0) &&
                    ((FUN_001a7c44(local_3c[0x2b] + 8,&DAT_00172664,&local_38),
                     local_38 == (int *)0x0 && (local_40 != (int *)0x0)))) && (local_40[1] != 0)) {
                  FUN_001a4cbc(local_3c + 0x29,0);
                  FUN_001a6e7c(local_40);
                }
              }
            }
            FUN_001a7920(local_3c[1]);
            local_3c[1] = 0;
            piVar5 = (int *)FUN_001a7830(*(undefined4 *)(iVar1 + 4),local_3c + 1);
            if (piVar5 == (int *)0x0) {
              iVar1 = 0;
              local_38 = (int *)0x0;
              while (iVar6 = FUN_001a4bc4(*(int *)(param_4 + 0x24) + 0xc0,iVar1), iVar6 == 0) {
                local_34 = 0;
                puVar3 = (undefined4 *)FUN_001a4bdc(*(int *)(param_4 + 0x24) + 0xc0,iVar1);
                if (((puVar3 != (undefined4 *)0x0) &&
                    (iVar6 = FUN_001a6f04(*puVar3,s_2__diversion_0017266d + 3), iVar6 == 0)) &&
                   (iVar6 = FUN_001a4528(puVar3,&local_34), iVar6 == 0)) {
                  FUN_001a4a80(local_3c + 0x30,local_34,local_38);
                  local_38 = (int *)((int)local_38 + 1);
                }
                iVar1 = iVar1 + 1;
              }
              goto LAB_00172344;
            }
            goto LAB_001725b6;
          }
          break;
        }
LAB_00172272:
        iVar6 = iVar6 + 1;
        iVar1 = FUN_001a4bc4(*(int *)(param_4 + 0x24) + 0x58,iVar6);
      } while (iVar1 == 0);
    }
    goto LAB_00172534;
  }
LAB_00172344:
  FUN_001a4d54(local_3c + 0x11,DAT_00172668);
  FUN_001a4d54(local_3c + 0x25,DAT_00172668);
  iVar1 = FUN_0000317c(*(undefined4 *)(local_3c[0x1c] + 4));
  puVar3 = _DAT_0017266c;
  if (*(int *)(local_3c[0x1c] + 4) != 0) {
    if ((code *)*_DAT_0017266c == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*_DAT_0017266c)();
    }
  }
  uVar4 = FUN_00179370(&DAT_0017267c,iVar1 + 1);
  *(undefined4 *)(local_3c[0x1c] + 4) = uVar4;
  if ((param_3 != 0) && (iVar1 = *(int *)(param_3 + 4), iVar1 != 0)) {
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  }
  piVar5 = (int *)FUN_00179ab4(local_3c);
  if (piVar5 != (int *)0x0) goto LAB_001725b6;
  if (*(int *)(*(int *)(param_4 + 0x24) + 0xc) == 0x1a6) {
    local_40 = piVar5;
    local_38 = piVar5;
    FUN_001a56f2(local_3c,s_session_expires_00172680,0,&local_34);
    if (local_34 == 0) {
      FUN_001a56f2(local_3c,&DAT_00172690,0,&local_34);
    }
    FUN_001a56f2(*(undefined4 *)(param_4 + 0x24),s_min_se_00172694,0,&local_28);
    if (((local_34 != 0) && (*(int *)(local_34 + 4) != 0)) &&
       ((local_28 != 0 && (*(int *)(local_28 + 4) != 0)))) {
      FUN_001a2f74(&local_38);
      FUN_001a2f74(&local_40);
      if ((local_38 != (int *)0x0) && (local_40 != (int *)0x0)) {
        FUN_001a3268(local_38,*(undefined4 *)(local_34 + 4));
        FUN_001a3268(local_40,*(undefined4 *)(local_28 + 4));
        if ((*local_38 != 0) && (*local_40 != 0)) goto LAB_00172486;
      }
      FUN_001a2f30();
      FUN_001a2f30(local_40);
      local_40 = piVar5;
      local_38 = piVar5;
    }
LAB_00172486:
    if ((((local_38 == (int *)0x0) || (*local_38 == 0)) || (local_40 == (int *)0x0)) ||
       (*local_40 == 0)) {
LAB_00172534:
      FUN_001a52e0(local_3c);
      return (int *)&DAT_fffffffb;
    }
    local_2c = piVar5;
    if (*local_38 != 0) {
      if ((code *)*puVar3 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*puVar3)();
      }
    }
    iVar1 = FUN_001a6f50(*local_40);
    *local_38 = iVar1;
    if (*(int *)(local_34 + 4) != 0) {
      if ((code *)*puVar3 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*puVar3)();
      }
    }
    *(undefined4 *)(local_34 + 4) = 0;
    FUN_001a302c(local_38,local_34 + 4);
    FUN_001a56f2(local_3c,s_min_se_00172694,0,&local_2c);
    if ((local_2c == (int *)0x0) || (local_2c[1] == 0)) {
      FUN_001a6054(local_3c,s_Min_SE_0017269c,*local_40);
    }
    else {
      if ((code *)*puVar3 == entry) {
        FUN_0018a280();
      }
      else {
        (*(code *)*puVar3)();
      }
      iVar1 = FUN_001a6f50(*local_40);
      local_2c[1] = iVar1;
    }
    FUN_001a2f30(local_38);
    FUN_001a2f30(local_40);
  }
  else {
    FUN_001a56f2(local_3c,s_session_expires_00172680,0,&local_40);
    if (local_40 == (int *)0x0) {
      FUN_001a56f2(local_3c,&DAT_00172690,0,&local_40);
    }
  }
  iVar1 = *(int *)(param_4 + 0x24);
  if ((*(int *)(iVar1 + 0xc) != 0x191) && (*(int *)(iVar1 + 0xc) != 0x197)) {
    iVar1 = 0;
  }
  FUN_001712b4(local_24,local_3c,iVar1);
  FUN_001a52cc(local_3c);
  iVar1 = FUN_001a6f04(local_3c[2],s_INVITE_001726a4);
  local_40 = local_3c;
  if (iVar1 == 0) {
    piVar5 = (int *)FUN_0017994c(local_24,&local_30,0,*(undefined4 *)(local_24 + 0xa4));
  }
  else {
    piVar5 = (int *)FUN_0017994c(local_24,&local_30,2,*(undefined4 *)(local_24 + 0xa4));
  }
  if (piVar5 == (int *)0x0) {
    if (*(int *)(local_20 + 0xc) == param_4) {
      FUN_001a4a80(local_24 + 0x9c,*(int *)(local_20 + 0xc),0);
      *(undefined4 *)(local_20 + 0xc) = local_30;
      if (param_3 != 0) {
        if (*(int *)(param_3 + 0x3c) == 0) {
          iVar1 = *(int *)(param_3 + 0x38);
          *(int *)(local_20 + 4) = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0x3c) = 0;
          }
        }
        else {
          *(undefined4 *)(*(int *)(param_3 + 0x3c) + 0x38) = *(undefined4 *)(param_3 + 0x38);
          if (*(int *)(param_3 + 0x38) != 0) {
            *(undefined4 *)(*(int *)(param_3 + 0x38) + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
          }
          *(undefined4 *)(param_3 + 0x38) = 0;
          *(undefined4 *)(param_3 + 0x3c) = 0;
        }
        FUN_0017389c(local_24,param_3);
        param_3 = 0;
      }
    }
    else {
      FUN_001a4a80(*(undefined4 *)(param_3 + 0x2c),local_30,0);
    }
    uVar4 = FUN_001a688c(local_3c);
    FUN_001a77d8(local_30,local_20);
    FUN_001a77ee(local_30,param_3);
    FUN_001a7216(local_30,uVar4);
    FUN_001799e4(local_24);
    FUN_00179b24(local_24);
    return (int *)0x0;
  }
LAB_001725b6:
  FUN_001a52e0(local_3c);
  return piVar5;
}

