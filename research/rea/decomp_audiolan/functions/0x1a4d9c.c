// rea decompile_all
// name: FUN_001a4d9c
// address: 0x1a4d9c
// body: available
// range: 0x1a4d9c-0x1a4f45 inclusive
// range: 0x1a4f4a-0x1a51f1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a4d9c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [3];
  
  iVar3 = 0;
  *param_2 = 0;
  if (param_1 == (int *)0x0) {
    iVar1 = -2;
  }
  else {
    iVar1 = FUN_001a5740(local_50);
    if (iVar1 == 0) {
      iVar1 = FUN_001a6f50(param_1[2]);
      local_50[0][2] = iVar1;
      if ((param_1[2] == 0) || (iVar1 != 0)) {
        iVar1 = FUN_001a6f50(*param_1);
        *local_50[0] = iVar1;
        if ((*param_1 == 0) || (iVar1 != 0)) {
          local_50[0][3] = param_1[3];
          iVar1 = FUN_001a6f50(param_1[4]);
          local_50[0][4] = iVar1;
          if ((param_1[4] != 0) && (iVar1 == 0)) {
LAB_001a51da:
            FUN_001a52e0();
            return -4;
          }
          if ((param_1[1] == 0) || (iVar1 = FUN_001a7830(param_1[1],local_50[0] + 1), iVar1 == 0)) {
            local_2c = param_1 + 5;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a3418(uVar2,local_20);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 5,local_20[0],0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 7;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a1694(uVar2,&local_24);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 7,local_24,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 9;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a1694(uVar2,&local_28);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 9,local_28,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0xb;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a2eb4(uVar2,&local_30);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0xb,local_30,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0xd;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a32d0(uVar2,&local_34);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0xd,local_34,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0xf;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a1acc(uVar2,&local_38);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0xf,local_38,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0x14;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a2eb4(uVar2,&local_3c);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0x14,local_3c,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0x18;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a32d0(uVar2,&local_40);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0x18,local_40,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0x1d;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a2eb4(uVar2,&local_44);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0x1d,local_44,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = 0;
            local_2c = param_1 + 0x23;
            while (iVar1 = FUN_001a4bc4(local_2c,iVar3), iVar1 == 0) {
              uVar2 = FUN_001a4bdc(local_2c,iVar3);
              iVar1 = FUN_001a1acc(uVar2,&local_48);
              if (iVar1 != 0) goto LAB_001a518e;
              FUN_001a4a80(local_50[0] + 0x23,local_48,0xffffffff);
              iVar3 = iVar3 + 1;
            }
            iVar3 = FUN_001a4b70(param_1 + 0x11,local_50[0] + 0x11,DAT_001a51f4);
            if ((((iVar3 != 0) ||
                 ((((param_1[0x13] != 0 &&
                    (iVar3 = FUN_001a2c4c(param_1[0x13],local_50[0] + 0x13), iVar3 != 0)) ||
                   (iVar3 = FUN_001a4b70(param_1 + 0x16,local_50[0] + 0x16,DAT_001a51f8), iVar3 != 0
                   )) || ((param_1[0x1a] != 0 &&
                          (iVar3 = FUN_001a32d0(param_1[0x1a],local_50[0] + 0x1a), iVar3 != 0))))))
                || ((param_1[0x1b] != 0 &&
                    (iVar3 = FUN_001a3418(param_1[0x1b],local_50[0] + 0x1b), iVar3 != 0)))) ||
               (((param_1[0x1c] != 0 &&
                 (iVar3 = FUN_001a3798(param_1[0x1c],local_50[0] + 0x1c), iVar3 != 0)) ||
                ((param_1[0x1f] != 0 &&
                 (iVar3 = FUN_001a3ee4(param_1[0x1f],local_50[0] + 0x1f), iVar3 != 0)))))) {
LAB_001a516e:
              FUN_001a52e0(local_50[0]);
              return iVar3;
            }
            if (((((param_1[0x20] == 0) ||
                  (iVar1 = FUN_001a32d0(param_1[0x20],local_50[0] + 0x20), iVar1 == 0)) &&
                 (iVar1 = FUN_001a4b70(param_1 + 0x21,local_50[0] + 0x21,DAT_001a51fc), iVar1 == 0))
                && ((iVar1 = FUN_001a4b70(param_1 + 0x25,local_50[0] + 0x25,DAT_001a51f4),
                    iVar1 == 0 &&
                    (iVar1 = FUN_001a4b70(param_1 + 0x27,local_50[0] + 0x27,DAT_001a5200),
                    iVar1 == 0)))) &&
               (iVar1 = FUN_001a4b70(param_1 + 0x29,local_50[0] + 0x29,DAT_001a5200), iVar1 == 0)) {
              if (((param_1[0x2b] != 0) &&
                  (iVar3 = FUN_001a71c8(param_1[0x2b],local_50[0] + 0x2b), iVar3 != 0)) ||
                 ((iVar3 = FUN_001a4b70(param_1 + 0x2c,local_50[0] + 0x2c,DAT_001a5204), iVar3 != 0
                  || (iVar3 = FUN_001a4b70(param_1 + 0x2e,local_50[0] + 0x2e,DAT_001a51fc),
                     iVar3 != 0)))) goto LAB_001a516e;
              iVar1 = FUN_001a4b70(param_1 + 0x30,local_50[0] + 0x30,DAT_001a5208);
              if (iVar1 == 0) {
                iVar3 = FUN_001a4b70(param_1 + 0x32,local_50[0] + 0x32,DAT_001a520c);
                if (iVar3 != 0) {
                  FUN_001a52e0(local_50[0]);
                  return iVar3;
                }
                local_50[0][0x36] = param_1[0x36];
                iVar3 = FUN_001a6f50(param_1[0x35]);
                local_50[0][0x35] = iVar3;
                if ((iVar3 != 0) || (param_1[0x35] == 0)) {
                  local_50[0][0x34] = param_1[0x34];
                  *param_2 = local_50[0];
                  return 0;
                }
                goto LAB_001a51da;
              }
            }
          }
LAB_001a518e:
          FUN_001a52e0(local_50[0]);
          return iVar1;
        }
      }
      FUN_001a52e0(local_50[0]);
      return -4;
    }
  }
  return iVar1;
}

