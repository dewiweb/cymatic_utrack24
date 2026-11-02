// rea decompile_all
// name: FUN_001b1030
// address: 0x1b1030
// body: available
// range: 0x1b1030-0x1b1323 inclusive
// range: 0x1b1326-0x1b146b inclusive
// range: 0x1b15e4-0x1b1753 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b1030(byte *param_1,undefined4 *param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 extraout_r1;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *local_80;
  undefined *local_7c;
  uint *local_78;
  byte *local_74;
  undefined *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_50 [3];
  uint *local_44;
  undefined *local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  
  local_50[0] = 0;
  local_68 = (undefined4 *)*param_2;
  piVar9 = param_2 + 0x8c0;
  puVar8 = (undefined *)param_2[0x8c1];
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (puVar8 == (undefined *)0x0) {
    puVar10 = (undefined4 *)param_2[0x8c2];
    if (puVar10 != (undefined4 *)0x0) {
      puVar10 = puVar10 + 0x3d;
      goto LAB_001b1058;
    }
  }
  else {
    puVar10 = (undefined4 *)(puVar8 + 0xf8);
LAB_001b1058:
    if ((puVar10 != (undefined4 *)0x0) && ((undefined4 *)*puVar10 != param_2)) {
      uVar3 = FUN_00195594(param_2[1]);
      local_78 = (uint *)param_2[0x8c2];
      local_80 = param_2;
      local_7c = puVar8;
      FUN_00024642(0,DAT_001b146c,uVar3,*puVar10);
    }
  }
  iVar7 = local_18;
  if (local_18 == 0) {
    local_44 = (uint *)((int)local_20 + DAT_001b1470);
    if (local_1c == 0) {
      uVar5 = param_2[0x8cb];
      if (uVar5 < 2) {
        local_80 = (undefined4 *)((int)param_2 + DAT_001b14d4);
        iVar7 = FUN_00195400(local_24,uVar5 + (int)local_80,2 - uVar5,local_50);
        if (iVar7 < 0) {
          FUN_00024642(0,s_ERROR__tcpCallback___attempt_to_r_001b14d8);
          iVar7 = DAT_001b1518;
        }
        else {
          if (local_50[0] != 0) {
            if (param_2[0x8cc] != 0) {
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = 0;
              }
              FUN_0019558a(param_2[1]);
              iVar7 = param_2[0x8c9];
              goto joined_r0x001b1390;
            }
            goto LAB_001b12f4;
          }
          iVar4 = param_2[0x8cb];
          param_2[0x8cb] = iVar4 + iVar7;
          if ((uint)(iVar4 + iVar7) < 2) {
            return;
          }
          uVar2 = CONCAT11(*(undefined1 *)local_80,*(undefined1 *)((int)local_80 + 1));
          *(ushort *)(local_44 + 2) = uVar2;
          if (uVar2 < 0xc) {
            FUN_00024642(0,s_ERROR__tcpCallback___length_too_s_001b1554,uVar2);
            iVar7 = DAT_001b1588;
          }
          else {
            iVar7 = FUN_001952a0();
            param_2[0x8c9] = iVar7;
            if (iVar7 != 0) goto LAB_001b133c;
            FUN_00024642(0,s_ERROR__tcpCallback___malloc_fail_001b15b4);
            iVar7 = DAT_001b15d8;
          }
        }
      }
      else {
LAB_001b133c:
        local_78 = local_44;
        iVar7 = FUN_00195400(local_24,param_2[0x8c9] + param_2[0x8cb] + -2,
                             ((uint)(ushort)local_44[2] - param_2[0x8cb]) + 2,local_50);
        if (iVar7 < 0) {
          FUN_00024642(0,s_ERROR__tcpCallback___read_return_001b158c);
          iVar7 = DAT_001b1518;
        }
        else {
          if (local_50[0] == 0) {
            iVar4 = param_2[0x8cb];
            param_2[0x8cb] = iVar4 + iVar7;
            if ((iVar4 + iVar7) - 2U != (uint)(ushort)local_78[2]) {
              return;
            }
            local_5c = (undefined4 *)param_2[0x8c9];
            local_60 = (undefined4 *)((int)local_5c + (uint)(ushort)local_78[2]);
            local_44 = (uint *)param_2[0x8c3];
            local_40 = (undefined *)param_2[0x8c4];
            uStack_3c = param_2[0x8c5];
            local_38 = param_2[0x8c6];
            local_34 = param_2[0x8c7];
            local_70 = (undefined *)*local_78;
            local_80 = (undefined4 *)(uint)*DAT_001b15dc;
            param_2[0x8cc] = param_2[0x8cc] + 1;
            param_2[0x8c9] = 0;
            param_2[0x8cb] = 0;
            *(undefined2 *)(local_78 + 2) = 0;
            local_58 = (undefined4 *)(uint)((*local_24 & 1) != 0);
            puVar6 = local_78;
            if ((puVar8 != (undefined *)0x0) && (*(int *)(puVar8 + 0xf8) != 0)) {
              uVar2 = *(ushort *)(*(int *)(puVar8 + 0xf8) + DAT_001b15e0);
              local_80 = (undefined4 *)(uint)uVar2;
              puVar6 = (uint *)0xfc;
              *(ushort *)(puVar8 + 0xfc) = uVar2;
            }
            if ((puVar10 != (undefined4 *)0x0) &&
               (((puVar8 == (undefined *)0x0 || (*(int *)(puVar8 + 0x234) == 0)) ||
                (*(char *)((int)local_68 + 0x115) != '\0')))) {
              *puVar10 = 0;
              FUN_0019558a(param_2[1],puVar6,uStack_3c,&local_38);
              if (param_2[0x8c9] != 0) {
                FUN_00195340();
              }
              FUN_00195340(param_2);
            }
            local_74 = (byte *)0x0;
            local_78 = (uint *)CONCAT22(local_78._2_2_,(short)local_80);
            local_7c = (undefined *)(uint)(local_58 != (undefined4 *)0x0);
            local_80 = (undefined4 *)CONCAT22(local_80._2_2_,(short)local_70);
            FUN_00192790(local_68,local_5c,local_60,&local_44);
            param_2 = local_5c;
            goto LAB_001b174e;
          }
          if (param_2[0x8cc] != 0) {
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = 0;
            }
            FUN_0019558a(param_2[1]);
            iVar7 = param_2[0x8c9];
joined_r0x001b1390:
            if (iVar7 != 0) {
              FUN_00195340();
            }
            FUN_00195340(param_2);
            return;
          }
LAB_001b12f4:
          FUN_00024642(0,s_ERROR__socket_closed_prematurely_001b151c,param_2[0x8cb]);
          iVar7 = DAT_001b1518;
        }
      }
    }
    else {
      local_5c = param_2 + 2;
      local_60 = (undefined4 *)(*piVar9 + (int)local_5c);
      iVar7 = param_2[0x8c2];
      if ((iVar7 == 0) ||
         ((*(int *)(iVar7 + 0x20) != iVar7 + 0x158 &&
          (FUN_00024642(0,DAT_001b1474), param_2[0x8c2] == 0)))) {
        local_70 = (undefined *)0x0;
      }
      else {
        local_7c = *(undefined **)(param_2[0x8c2] + 0x20);
        if (local_7c != (undefined *)(param_2[0x8c2] + 0x158)) {
          return;
        }
        local_80 = local_68;
        FUN_00197c88(local_68,DAT_001b1478);
        local_7c = (undefined *)FUN_00021808(local_80,local_7c);
        FUN_0019a790(local_80,DAT_001b1478);
        local_70 = local_7c;
      }
      local_40 = (undefined *)((int)local_20 + DAT_001b147c);
      if (puVar8 != (undefined *)0x0) {
        local_60 = local_20 + 5;
        if (*(int *)(puVar8 + 0x234) == 0) {
LAB_001b11d6:
          FUN_0002369c(local_5c,*(undefined2 *)(puVar8 + 0x12e),*_DAT_001b14a8);
          local_7c = (undefined *)(uint)*(ushort *)(puVar8 + 0x232);
          local_80 = (undefined4 *)(uint)*(ushort *)(puVar8 + 0x230);
          local_60 = (undefined4 *)FUN_001aaa54(local_5c,local_60,piVar9,puVar8 + 0x130);
          local_70 = *(undefined **)(puVar8 + 0x34);
        }
        else if (puVar8[0xff] == '\x03') {
          local_60 = (undefined4 *)(*piVar9 + (int)local_5c);
        }
        else {
          if (((puVar8[0xff] == '\x04') ||
              (local_58 = local_68 + 0x9e0, *(short *)(local_68 + 0x9e2) == 0)) ||
             (*(short *)(puVar8 + 0xf4) == 0)) goto LAB_001b11d6;
          local_80 = (undefined4 *)0x10001;
          FUN_00195588(&uStack_3c,local_40);
          iVar7 = FUN_0019b360(&local_38);
          if (iVar7 == 0) {
            uVar2 = *DAT_001b1480 << 8 | *DAT_001b1480 >> 8;
          }
          else {
            uVar2 = (ushort)((local_58[2] & 0xff) << 8) | (ushort)((uint)local_58[2] >> 8) & 0xff;
          }
          local_7c = (undefined *)CONCAT22(local_7c._2_2_,uVar2);
          if (*_DAT_001b1484 != 0) {
            FUN_00024642(3,s____tcpCallback__eventPort__d_001b1485 + 3);
          }
          local_78 = (uint *)*DAT_001b14a4;
          local_74 = (byte *)DAT_001b14a4[1];
          local_70 = &DAT_00001c20;
          FUN_0002369c(local_5c,*(undefined2 *)(puVar8 + 0x12e),*_DAT_001b14a8);
          local_60 = (undefined4 *)FUN_001aa958(local_5c,local_60,puVar8,&local_80);
          if (local_60 == (undefined4 *)0x0) {
            FUN_00024642(0,s___ERROR__tcpCallback___putLLQ_001b14aa + 2);
            iVar7 = DAT_001b1588;
            goto LAB_001b1294;
          }
          local_70 = *(undefined **)(puVar8 + 0x34);
          *(undefined2 *)(puVar8 + 0x108) = 0;
        }
      }
      local_74 = local_24;
      local_78 = (uint *)CONCAT22(local_78._2_2_,(short)*local_44);
      local_80 = (undefined4 *)0x0;
      local_7c = local_40;
      iVar4 = FUN_0019569c(local_68,local_5c,local_60,*DAT_001b14c8);
      iVar7 = DAT_001b1588;
      if (iVar4 == 0) {
        if (puVar8 != (undefined *)0x0) {
          FUN_00197c88(local_68,DAT_001b14cc);
          piVar9 = DAT_001b14d0;
          *(undefined4 *)(puVar8 + 0xc) = local_68[0x37];
          iVar7 = *(int *)(puVar8 + 0x10);
          if (*(int *)(puVar8 + 0x10) <= *piVar9 * 0x100) {
            iVar7 = *piVar9 * 0x100;
          }
          *(int *)(puVar8 + 0x10) = iVar7;
          FUN_0003f5f0(local_68,puVar8);
          FUN_0019a790(local_68,DAT_001b14cc);
        }
        return;
      }
    }
  }
LAB_001b1294:
  local_18 = iVar7;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0;
  }
  FUN_00197c88(local_68,DAT_001b14cc);
  piVar9 = DAT_001b1754;
  if (puVar8 != (undefined *)0x0) {
    if (*(int *)(puVar8 + 0x10) == 0) {
      *(undefined4 *)(puVar8 + 0xc) = local_68[0x37];
      if (*(int *)(puVar8 + 0x234) == 0) {
        *(int *)(puVar8 + 0x10) = *DAT_001b1754 * 0xe10;
        uVar3 = FUN_000203e4(*(undefined2 *)(puVar8 + 0x230));
        local_80 = *(undefined4 **)(puVar8 + 0x10);
        FUN_00024642(0,DAT_001b175c,puVar8 + 0x130,uVar3);
      }
      else {
        local_80 = (undefined4 *)(puVar8 + 0x100);
        sVar1 = *(short *)(puVar8 + 0x108);
        local_74 = (byte *)*DAT_001b1754;
        local_7c = (undefined *)(int)sVar1;
        FUN_0016db4c(local_74 + 2);
        *(undefined4 *)(puVar8 + 0x10) = extraout_r1;
        for (iVar7 = sVar1 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(int *)(puVar8 + 0x10) = *(int *)(puVar8 + 0x10) * 3;
        }
        if ((int)local_74 * 900 < *(int *)(puVar8 + 0x10)) {
          *(int *)(puVar8 + 0x10) = (int)local_74 * 900;
        }
        else {
          *(short *)(local_80 + 2) = (short)local_7c + 1;
        }
        uVar3 = FUN_000203e4(*(undefined2 *)(puVar8 + 0x230));
        local_80 = (undefined4 *)(int)*(short *)(local_80 + 2);
        local_7c = *(undefined **)(puVar8 + 0x10);
        FUN_00024642(0,DAT_001b1758,puVar8 + 0x130,uVar3);
      }
      FUN_0003f5f0(local_68,puVar8);
    }
    else {
      if (*(int *)(puVar8 + 0x234) == 0) {
        iVar7 = 0xe10;
      }
      else {
        iVar7 = 900;
      }
      if (iVar7 * *DAT_001b14d0 <
          (*(int *)(puVar8 + 0xc) + *(int *)(puVar8 + 0x10)) - local_68[0x37]) {
        *(undefined4 *)(puVar8 + 0xc) = local_68[0x37];
        if (*(int *)(puVar8 + 0x234) == 0) {
          iVar7 = 0xe10;
        }
        else {
          iVar7 = 900;
        }
        *(int *)(puVar8 + 0x10) = iVar7 * *piVar9;
        FUN_0003f5f0(local_68,puVar8);
        uVar3 = FUN_000203e4(*(undefined2 *)(puVar8 + 0x230));
        local_80 = *(undefined4 **)(puVar8 + 0x10);
        FUN_00024642(0,DAT_001b175c,puVar8 + 0x130,uVar3);
      }
    }
    if ((*(int *)(puVar8 + 0x234) != 0) && (puVar8[0xff] == '\x02')) {
      puVar8[0xff] = 1;
    }
    if (((local_18 != DAT_001b1760) && (*(int *)(puVar8 + 0x234) != 0)) && (puVar8[0xff] != '\x04'))
    {
      puVar8[0xff] = 4;
      iVar7 = *DAT_001b1754;
      *(int *)(puVar8 + 0x10) = iVar7 * 3;
      *(int *)(puVar8 + 0xc) = local_68[0x37] + iVar7 * -3 + 1;
      FUN_0003f5f0(local_68,puVar8);
    }
  }
  FUN_0019a790(local_68,DAT_001b1764);
  FUN_0019558a(param_2[1]);
  if (param_2[0x8c9] != 0) {
    FUN_00195340();
  }
LAB_001b174e:
  FUN_00195340(param_2);
  return;
}

