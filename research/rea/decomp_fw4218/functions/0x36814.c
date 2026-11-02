// rea decompile_all
// name: FUN_00036814
// address: 0x36814
// body: available
// range: 0x36814-0x36999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036814(int *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_30;
  int local_2c;
  int *piStack_1c;
  int local_18;
  
  iVar7 = *(int *)(param_2 + 0xc);
  piStack_1c = param_1;
  local_18 = param_2;
  local_2c = FUN_0003ac86(*param_1);
  uVar1 = _DAT_0003699c;
  if (local_2c != 0) {
    iVar3 = FUN_000366e0(_DAT_0003699c);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s__PTP_MSG__Check_Foreign_Master_0003699f + 1);
    }
    FUN_0002f734(local_2c,&local_30);
    while (iVar3 = FUN_0002f836(local_2c,local_30), iVar3 == 0) {
      iVar3 = FUN_0002f778(local_2c,local_30);
      if ((iVar3 != 0) && (iVar4 = FUN_0003676c(iVar7,iVar3 + 0x1c), iVar4 != 0)) {
        iVar4 = FUN_000366e0(uVar1);
        if (iVar4 != 0) {
          FUN_0002f9bc(uVar1);
          FUN_0002f9fc(6,s_PTP_MSG__Known_foreign_master_000369e8);
        }
        if (*(int *)(iVar3 + 4) == 0) {
          return;
        }
        if (*(int *)(iVar3 + 0xc) == 0) {
          return;
        }
        if (CONCAT11(*(undefined1 *)(iVar7 + 0x3d),*(undefined1 *)(iVar7 + 0x3e)) < 0xff) {
          uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e));
          uVar6 = FUN_0003b6a2(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 0x1e));
          if ((uVar6 < uVar5) ||
             ((uVar5 = FUN_0003b6a2(*(undefined2 *)(iVar7 + 0x1e)), uVar5 < 6 &&
              (iVar7 = FUN_0003b6a2(DAT_00036a08 <= *(ushort *)(*(int *)(iVar3 + 0xc) + 0x1e)),
              iVar7 != 0)))) {
            FUN_000365f4(iVar3);
            FUN_0003663a(iVar3,local_18);
            cVar2 = *(char *)(iVar3 + 0x26) + '\x01';
            goto LAB_0003698a;
          }
        }
        FUN_000365f4(iVar3);
        FUN_0003663a(iVar3,local_18);
        cVar2 = '\0';
LAB_0003698a:
        *(char *)(iVar3 + 0x26) = cVar2;
        return;
      }
      FUN_0002f888(local_2c,&local_30);
    }
    iVar3 = FUN_0002ce2a();
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x1c) = *(undefined1 *)(iVar7 + 0x14);
      *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar7 + 0x15);
      *(undefined1 *)(iVar3 + 0x1e) = *(undefined1 *)(iVar7 + 0x16);
      *(undefined1 *)(iVar3 + 0x1f) = *(undefined1 *)(iVar7 + 0x17);
      *(undefined1 *)(iVar3 + 0x20) = *(undefined1 *)(iVar7 + 0x18);
      *(undefined1 *)(iVar3 + 0x21) = *(undefined1 *)(iVar7 + 0x19);
      *(undefined1 *)(iVar3 + 0x22) = *(undefined1 *)(iVar7 + 0x1a);
      *(undefined1 *)(iVar3 + 0x23) = *(undefined1 *)(iVar7 + 0x1b);
      *(undefined1 *)(iVar3 + 0x24) = *(undefined1 *)(iVar7 + 0x1c);
      *(undefined1 *)(iVar3 + 0x25) = *(undefined1 *)(iVar7 + 0x1d);
      FUN_0003663a(iVar3,local_18);
      FUN_0003a96c(*param_1,iVar3);
      iVar7 = FUN_000366e0(uVar1);
      if (iVar7 != 0) {
        FUN_0002f9bc(uVar1);
        FUN_0002f9fc(6,s_PTP_MSG__Create_new_foreign_data_000369c0);
      }
      FUN_0003c808(*param_1 + 0x370);
    }
  }
  return;
}

