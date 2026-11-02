// rea decompile_all
// name: FUN_00036e8c
// address: 0x36e8c
// body: available
// range: 0x36e8c-0x3710d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036e8c(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined1 auStack_48 [16];
  undefined2 local_38;
  undefined1 local_35;
  undefined1 auStack_30 [20];
  int *piStack_1c;
  int local_18;
  
  uVar2 = _DAT_00037170;
  uVar5 = DAT_00037168;
  uVar7 = DAT_00037110;
  piStack_1c = param_1;
  local_18 = param_2;
  if (param_2 == 0) {
    iVar3 = FUN_000366e0(DAT_00037110);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar7);
      FUN_0002f9fc(3,s_PTP_MSG__RX_delay_response_msg_p_00037114);
    }
  }
  else {
    if (param_1 != (int *)0x0) {
      iVar3 = *param_1;
      uVar7 = *(undefined4 *)(iVar3 + 0x27c);
      cVar1 = *(char *)(iVar3 + 0x25a);
      if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x02')) &&
         (*(char *)(iVar3 + 0x26d) == '\x01')) {
        if (*(uint *)(param_2 + 8) < 0x36) {
          iVar3 = FUN_000366e0(DAT_00037168);
          if (iVar3 != 0) {
            FUN_0002f9bc(uVar5);
            FUN_0002f9fc(4,DAT_0003716c);
          }
        }
        else {
          iVar3 = *(int *)(param_2 + 0xc);
          if ((*(byte *)(iVar3 + 6) & 1) == 0) {
            iVar4 = FUN_000366e0(_DAT_00037170);
            if (iVar4 != 0) {
              FUN_0002f9bc(uVar2);
              uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar3 + 0x1e));
              FUN_0002f9fc(6,s__PTP_MSG__RX_delay_Response_with_00037173 + 1,uVar5);
            }
            uVar8 = 0;
            do {
              iVar4 = FUN_000366e0(uVar2);
              if (iVar4 != 0) {
                FUN_0002f9bc(uVar2);
                FUN_0002f9fc(6,&DAT_000371a8,*(undefined1 *)(iVar3 + uVar8 + 0x14));
              }
              uVar8 = uVar8 + 1 & 0xffff;
            } while (uVar8 < 8);
            iVar4 = FUN_000366e0(_DAT_00037170);
            if (iVar4 != 0) {
              FUN_0002f9bc(_DAT_00037170);
              FUN_0002f9fc(6,s_on_port__d_000371ac,*(undefined2 *)(*param_1 + 2));
            }
            if ((cVar1 == '\t') || (cVar1 == '\b')) {
              uVar8 = 0;
              iVar4 = *param_1;
              do {
                if (*(char *)(iVar3 + uVar8 + 0x2c) != *(char *)(iVar4 + uVar8 + 0x250))
                goto LAB_00037104;
                uVar8 = uVar8 + 1 & 0xff;
              } while (uVar8 < 8);
              if (((CONCAT11(*(undefined1 *)(iVar3 + 0x34),*(undefined1 *)(iVar3 + 0x35)) ==
                    CONCAT11(*(undefined1 *)(iVar4 + 600),*(undefined1 *)(iVar4 + 0x259))) &&
                  (uVar8 = FUN_0003b6a2(*(undefined2 *)(iVar3 + 0x1e)),
                  uVar8 == *(ushort *)(param_1 + 0x12))) &&
                 (iVar4 = FUN_0003676c(iVar3,uVar7), iVar4 != 0)) {
                FUN_0003cbd4(&local_58);
                local_58 = *(undefined1 *)(iVar3 + 0x2c);
                local_57 = *(undefined1 *)(iVar3 + 0x2d);
                local_56 = *(undefined1 *)(iVar3 + 0x2e);
                local_55 = *(undefined1 *)(iVar3 + 0x2f);
                local_54 = *(undefined1 *)(iVar3 + 0x30);
                local_53 = *(undefined1 *)(iVar3 + 0x31);
                local_52 = *(undefined1 *)(iVar3 + 0x32);
                local_51 = *(undefined1 *)(iVar3 + 0x33);
                local_50 = *(undefined1 *)(iVar3 + 0x34);
                local_4f = *(undefined1 *)(iVar3 + 0x35);
                local_4e = FUN_0003b6a2(*(undefined2 *)(iVar3 + 0x1e));
                local_38 = *(undefined2 *)(*param_1 + 2);
                local_35 = 1;
                iVar4 = FUN_0003ca58(&local_58);
                uVar7 = DAT_00037110;
                if (iVar4 == 0) {
                  iVar3 = FUN_000366e0(DAT_00037110);
                  if (iVar3 == 0) goto LAB_00037104;
                  FUN_0002f9bc(uVar7);
                  uVar7 = 3;
                  pcVar6 = DAT_000371f0;
                }
                else {
                  FUN_0003c28c(auStack_30,iVar3 + 0x22);
                  FUN_0003b672(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
                  FUN_0002bee4(*(undefined4 *)(*param_1 + 0x270),auStack_30,auStack_48);
                  if (*(char *)(*param_1 + 0x25b) != *(char *)(iVar3 + 0x21)) {
                    FUN_0003b090();
                  }
                  uVar7 = _DAT_00037170;
                  iVar3 = FUN_000366e0(_DAT_00037170);
                  if (iVar3 == 0) goto LAB_00037104;
                  FUN_0002f9bc(uVar7);
                  uVar7 = 6;
                  pcVar6 = s_PTP_MSG__RX_delay_response__>_Co_000371b8;
                }
                FUN_0002f9fc(uVar7,pcVar6);
              }
            }
          }
        }
      }
LAB_00037104:
      FUN_000365f4(local_18);
      return;
    }
    iVar3 = FUN_000366e0(DAT_00037110);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar7);
      FUN_0002f9fc(3,s_PTP_MSG__RX_delay_response_me____00037140);
      return;
    }
  }
  return;
}

