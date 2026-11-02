// rea decompile_all
// name: FUN_00004f30
// address: 0x4f30
// body: available
// range: 0x4f30-0x52b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00004f30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48 [8];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  
  local_28 = 0;
  local_20 = 1;
  iVar10 = 0;
  local_4c = param_2 + 3;
  local_1c = param_1;
  puStack_18 = param_2;
LAB_00004f46:
  do {
    while( true ) {
      iVar1 = (*(code *)param_2[5])(local_4c,1);
      if (iVar1 == 0) {
        return local_28;
      }
      if (iVar1 == 0x25) break;
      iVar2 = (*(code *)param_2[8])();
      if (iVar2 == 0) {
        iVar2 = (*(code *)param_2[6])(local_1c);
        if (iVar2 != iVar1) {
          (*(code *)param_2[7])(local_1c);
          goto joined_r0x00004fa8;
        }
LAB_00004f9c:
        iVar10 = iVar10 + 1;
      }
      else {
        do {
          (*(code *)param_2[5])(local_4c,1);
          iVar1 = (*(code *)param_2[8])();
        } while (iVar1 != 0);
        (*(code *)param_2[5])(local_4c,0xffffffff);
        while( true ) {
          (*(code *)param_2[6])(local_1c);
          iVar1 = (*(code *)param_2[8])();
          if (iVar1 == 0) break;
          iVar10 = iVar10 + 1;
        }
        (*(code *)param_2[7])(local_1c);
      }
    }
    iVar1 = 0;
    uVar9 = 0;
    iVar2 = (*(code *)param_2[5])(local_4c,0);
    if (iVar2 == 0x2a) {
      (*(code *)param_2[5])(local_4c,1);
      uVar9 = 1;
    }
    while (iVar2 = (*(code *)param_2[5])(local_4c,1), iVar2 - 0x30U < 10) {
      if (DAT_000052b8 < iVar1) {
        return local_28;
      }
      iVar1 = iVar1 * 10 + iVar2 + -0x30;
      if (iVar1 < 0) {
        return local_28;
      }
      uVar9 = uVar9 | 0x10;
    }
    if (-1 < (int)(uVar9 << 0x1b)) {
      iVar1 = DAT_000052bc;
    }
    if (iVar2 == 0x6c) {
      iVar2 = (*(code *)param_2[5])(local_4c,1);
      if (iVar2 == 0x6c) {
LAB_00005068:
        uVar3 = 2;
        goto LAB_00005026;
      }
      uVar3 = 4;
LAB_0000505e:
      uVar9 = uVar9 | uVar3;
    }
    else {
      if (iVar2 == 0x4c) {
        uVar3 = 0x20;
LAB_00005026:
        uVar9 = uVar9 | uVar3;
      }
      else {
        if (iVar2 == 0x68) {
          iVar2 = (*(code *)param_2[5])(local_4c,1);
          if (iVar2 != 0x68) {
            uVar3 = 8;
            goto LAB_0000505e;
          }
          uVar3 = 0x800;
          goto LAB_00005026;
        }
        if (iVar2 == 0x6a) goto LAB_00005068;
        if ((iVar2 != 0x74) && (iVar2 != 0x7a)) goto LAB_00005030;
      }
      iVar2 = (*(code *)param_2[5])(local_4c,1);
    }
LAB_00005030:
    param_2[2] = iVar1;
    param_2[1] = uVar9;
    if (iVar2 == 0x65) goto LAB_000050dc;
    if (iVar2 < 0x66) {
      if (iVar2 == 0x58) {
LAB_0000515e:
        param_2[1] = uVar9 | 0x40;
        if ((int)(uVar9 << 0x1e) < 0) {
          uVar7 = 0x10;
          goto LAB_0000516e;
        }
LAB_0000517a:
        uVar7 = 0x10;
LAB_0000517e:
        iVar1 = FUN_00002f50(0xfffffffe,local_1c,uVar7,param_2);
      }
      else if (iVar2 < 0x59) {
        if (iVar2 != 0x45) {
          if (iVar2 < 0x46) {
            if (iVar2 == 0x25) {
              iVar2 = (*(code *)param_2[6])(local_1c);
              if (iVar2 != 0x25) {
                (*(code *)param_2[7])(local_1c);
joined_r0x00004fa8:
                if (iVar2 != -1) {
                  return local_28;
                }
                if (local_28 == 0) {
                  return -1;
                }
                return local_28;
              }
              goto LAB_00004f9c;
            }
            bVar11 = iVar2 == 0x41;
LAB_0000504c:
            if (!bVar11) {
              return local_28;
            }
          }
          else if ((iVar2 != 0x46) && (iVar2 != 0x47)) {
            return local_28;
          }
        }
LAB_000050dc:
        iVar1 = thunk_EXT_FUN_6000b442(0xfffffffe,local_1c,&local_58,param_2);
      }
      else {
        if (iVar2 != 0x5b) {
          if (iVar2 == 0x61) goto LAB_000050dc;
          if (iVar2 != 99) {
            if (iVar2 != 100) {
              return local_28;
            }
LAB_0000514e:
            param_2[1] = uVar9 | 0x40;
            if (-1 < (int)(uVar9 << 0x1e)) {
              uVar7 = 10;
              goto LAB_0000517e;
            }
            uVar7 = 10;
            goto LAB_0000516e;
          }
        }
LAB_0000518a:
        puVar8 = (uint *)0x0;
        local_54 = 0;
        local_58 = 0;
        local_50 = 0;
        local_24 = 0;
        if (iVar2 == 99) {
          if (-1 < (int)(uVar9 << 0x1b)) {
            param_2[2] = 1;
          }
          local_58 = 1;
        }
        else if (iVar2 == 0x5b) {
          iVar1 = (*(code *)param_2[5])(local_4c,1,(code *)param_2[5],0);
          if (iVar1 == 0x5e) {
            local_54 = 1;
            iVar1 = (*(code *)param_2[5])(local_4c,1);
          }
          if (param_2[4] == 0) {
            iVar2 = 0;
            do {
              iVar6 = iVar2 + 1;
              local_48[iVar2] = 0;
              iVar2 = iVar6;
            } while (iVar6 < 8);
          }
          else {
            local_24 = param_2[3] + -2;
          }
          do {
            if (iVar1 == 0) {
              return local_28;
            }
            if (param_2[4] == 0) {
              local_48[(int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5] =
                   local_48[(int)(((uint)(iVar1 >> 0x1f) >> 0x1b) + iVar1) >> 5] |
                   1 << (iVar1 % 0x20 & 0xffU);
            }
            else {
              local_50 = local_50 + 1;
            }
            iVar1 = (*(code *)param_2[5])(local_4c,1);
          } while (iVar1 != 0x5d);
          if (local_54 != 0) {
            iVar1 = 0;
            do {
              iVar2 = iVar1 + 1;
              local_48[iVar1] = ~local_48[iVar1];
              iVar1 = iVar2;
            } while (iVar2 < 8);
          }
          puVar8 = local_48;
        }
        iVar1 = local_58;
        if (param_2[4] == 0) {
          if ((int)(param_2[1] << 0x1d) < 0) {
            iVar1 = FUN_00004730(0xfffffffe,local_1c,param_2);
          }
          else {
            iVar1 = FUN_0000309a(0xfffffffe,local_1c,param_2,puVar8);
          }
        }
        else {
          local_58 = local_50;
          local_50 = iVar1;
          if (param_2[1] * 0x20000000 < 0) {
            iVar1 = FUN_0000492e(0xfffffffe,local_1c,param_2);
          }
          else {
            iVar1 = FUN_0000484a(0xfffffffe,local_1c,param_2,local_24);
          }
        }
      }
LAB_0000528a:
      if (iVar1 < 0) {
        if (iVar1 != -1) {
          return local_28;
        }
        if (local_20 != 0) {
          return -1;
        }
        return local_28;
      }
      if ((uVar9 & 1) == 0) {
        local_28 = local_28 + 1;
      }
      iVar10 = iVar10 + iVar1;
      local_20 = 0;
      goto LAB_00004f46;
    }
    if (iVar2 == 0x6f) {
      param_2[1] = uVar9 | 0x40;
      if (-1 < (int)(uVar9 << 0x1e)) {
        uVar7 = 8;
        goto LAB_0000517e;
      }
      uVar7 = 8;
LAB_0000516e:
      iVar1 = FUN_00004420(0xfffffffe,local_1c,uVar7,param_2);
      goto LAB_0000528a;
    }
    if (0x6f < iVar2) {
      if (iVar2 != 0x70) {
        if (iVar2 == 0x73) goto LAB_0000518a;
        if (iVar2 == 0x75) goto LAB_0000514e;
        bVar11 = iVar2 == 0x78;
        if (!bVar11) goto LAB_0000504c;
        goto LAB_0000515e;
      }
      param_2[1] = uVar9 & DAT_000052c0;
      goto LAB_0000517a;
    }
    if ((iVar2 == 0x66) || (iVar2 == 0x67)) goto LAB_000050dc;
    if (iVar2 == 0x69) {
      param_2[1] = uVar9 | 0x40;
      if (-1 < (int)(uVar9 << 0x1e)) {
        uVar7 = 0;
        goto LAB_0000517e;
      }
      uVar7 = 0;
      goto LAB_0000516e;
    }
    if (iVar2 != 0x6e) {
      return local_28;
    }
    puVar4 = (undefined4 *)*param_2;
    *param_2 = puVar4 + 1;
    piVar5 = (int *)*puVar4;
    if ((int)(uVar9 << 0x14) < 0) {
      *(char *)piVar5 = (char)iVar10;
    }
    else if ((int)(uVar9 << 0x1c) < 0) {
      *(short *)piVar5 = (short)iVar10;
    }
    else if ((int)(uVar9 << 0x1e) < 0) {
      *piVar5 = iVar10;
      piVar5[1] = iVar10 >> 0x1f;
    }
    else {
      *piVar5 = iVar10;
    }
  } while( true );
}

