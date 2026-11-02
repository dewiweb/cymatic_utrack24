// rea decompile_all
// name: FUN_000380dc
// address: 0x380dc
// body: available
// range: 0x380dc-0x38385 inclusive
// range: 0x38388-0x38403 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000380dc(int *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [20];
  
  uVar6 = DAT_00038444;
  uVar5 = DAT_00038404;
  if (param_2 == (int *)0x0) {
    iVar3 = FUN_000366e0(DAT_00038444);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(3,s_PTP_MSG__RX_sync_msg_ptr____NULL_00038448);
    }
  }
  else {
    if (param_1 != (int *)0x0) {
      uVar6 = *(undefined4 *)(*param_1 + 0x27c);
      uVar2 = (uint)*(byte *)(*param_1 + 0x25a);
      if (((uVar2 != 1) && (uVar2 != 3)) && (uVar2 != 2)) {
        if ((uint)param_2[2] < 0x2c) {
          iVar3 = FUN_000366e0(DAT_00038404);
          if (iVar3 != 0) {
            FUN_0002f9bc(uVar5);
            FUN_0002f9fc(4,s_PTP_MSG__Received_sync_discarded_00038408);
          }
        }
        else {
          iVar3 = param_2[3];
          if ((iVar3 + param_2[2] + 0xcU <= (uint)(param_2[1] + *param_2)) &&
             ((*(byte *)(iVar3 + 6) & 1) == 0)) {
            iVar4 = FUN_000366e0(_DAT_0003848c);
            if (iVar4 != 0) {
              FUN_0002f9bc(_DAT_0003848c);
              uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar3 + 0x1e));
              FUN_0002f9fc(6,s__PTP_MSG__RX_sync_with_Seq_ID____0003848f + 1,uVar5);
            }
            uVar8 = 0;
            do {
              iVar4 = FUN_000366e0(_DAT_0003848c);
              if (iVar4 != 0) {
                FUN_0002f9bc(_DAT_0003848c);
                FUN_0002f9fc(6,&DAT_000384b8,*(undefined1 *)(iVar3 + uVar8 + 0x14));
              }
              uVar8 = uVar8 + 1 & 0xffff;
            } while (uVar8 < 8);
            iVar4 = FUN_000366e0(_DAT_0003848c);
            if (iVar4 != 0) {
              FUN_0002f9bc(_DAT_0003848c);
              FUN_0002f9fc(6,s_on_port__d_000384bc,*(undefined2 *)(*param_1 + 2));
            }
            if (((uVar2 == 9) || (uVar2 == 8)) && (iVar4 = FUN_0003676c(iVar3,uVar6), iVar4 != 0)) {
              if (**(char **)(*param_1 + 0x274) == '\x01') {
                lVar9 = FUN_0003b672(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
                lVar9 = lVar9 + *(longlong *)(*param_1 + 0x3d8);
                uVar10 = FUN_0003b5e8((int)lVar9,(int)((ulonglong)lVar9 >> 0x20));
                *(char *)(iVar3 + 8) = (char)uVar10;
                *(char *)(iVar3 + 9) = (char)((ulonglong)uVar10 >> 8);
                *(char *)(iVar3 + 10) = (char)((ulonglong)uVar10 >> 0x10);
                *(char *)(iVar3 + 0xb) = (char)((ulonglong)uVar10 >> 0x18);
                *(char *)(iVar3 + 0xc) = (char)((ulonglong)uVar10 >> 0x20);
                *(char *)(iVar3 + 0xd) = (char)((ulonglong)uVar10 >> 0x28);
                *(char *)(iVar3 + 0xe) = (char)((ulonglong)uVar10 >> 0x30);
                *(char *)(iVar3 + 0xf) = (char)((ulonglong)uVar10 >> 0x38);
              }
              FUN_0003b530(iVar3,param_2[1] + *param_2);
              if ((int)((uint)*(byte *)(iVar3 + 6) << 0x1e) < 0) {
                if ((*(char *)((int)param_1 + 0x22) == '\0') &&
                   (uVar1 = (short)param_1[8] + 1, *(ushort *)(param_1 + 8) = uVar1, 9 < uVar1)) {
                  iVar3 = FUN_000366e0(_DAT_0003848c);
                  if (iVar3 != 0) {
                    FUN_0002f9bc(_DAT_0003848c);
                    FUN_0002f9fc(6,s_PTP_MSG__RX_sync___d_consecutive_00038538,(short)param_1[8]);
                  }
                  *(undefined2 *)(param_1 + 8) = 0;
                }
                *(undefined1 *)((int)param_1 + 0x22) = 0;
                FUN_000365f4(param_1 + 1);
                FUN_0003663a(param_1 + 1,param_2);
                return;
              }
              FUN_0003cbd4(auStack_50);
              FUN_0003cbf8(auStack_50,iVar3,*(undefined2 *)(*param_1 + 2));
              iVar4 = FUN_0003ca58(auStack_50);
              uVar5 = DAT_00038444;
              if (iVar4 == 0) {
                iVar3 = FUN_000366e0(DAT_00038444);
                if (iVar3 == 0) goto LAB_000383b0;
                FUN_0002f9bc(uVar5);
                uVar5 = 3;
                pcVar7 = s_PTP_MSG__RX_sync_could_not_obtai_000384f8;
              }
              else {
                FUN_0003c28c(auStack_28,iVar3 + 0x22);
                iVar4 = *param_1;
                if (*(char *)(iVar4 + 0x26d) == '\x01') {
                  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x270) + 0x10);
                  uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x270) + 0x14);
                }
                else if (*(char *)(iVar4 + 0x26d) == '\x02') {
                  uVar6 = *(undefined4 *)(iVar4 + 0x260);
                  uVar5 = *(undefined4 *)(iVar4 + 0x264);
                }
                else {
                  uVar6 = 0;
                  uVar5 = 0;
                }
                uVar10 = FUN_0003b672(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                                      (uint)*(byte *)(iVar3 + 0xf) << 0x18,
                                      (uint)*(byte *)(iVar3 + 0xe) << 0x10,uVar5);
                FUN_0002bf5c(*(undefined4 *)(*param_1 + 0x270),auStack_40,auStack_28,0,uVar6,uVar5,
                             uVar10,0,0,(int)*(char *)(iVar3 + 0x21),param_2[6]);
                iVar3 = *param_1;
                if ((*(char *)(iVar3 + 0x26d) == '\x01') && (*(char *)(iVar3 + 0x340) == '\0')) {
                  uVar5 = FUN_0003a02a(iVar3 + 0x250);
                  FUN_0003c83c(*param_1 + 0x340,uVar5);
                  FUN_0003c808(*param_1 + 0x340);
                }
                uVar5 = _DAT_0003848c;
                iVar3 = FUN_000366e0(_DAT_0003848c);
                if (iVar3 == 0) goto LAB_000383b0;
                FUN_0002f9bc(uVar5);
                uVar5 = 6;
                pcVar7 = s_PTP_MSG__RX_sync__>_Synchronise_l_000384c8;
              }
              FUN_0002f9fc(uVar5,pcVar7);
            }
          }
        }
      }
LAB_000383b0:
      FUN_000365f4(param_2);
      return;
    }
    iVar3 = FUN_000366e0(DAT_00038444);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar6);
      FUN_0002f9fc(3,s_PTP_MSG__RX_sync_me____NULL_0003846c);
      return;
    }
  }
  return;
}

