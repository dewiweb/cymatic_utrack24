// rea decompile_all
// name: FUN_00038d5c
// address: 0x38d5c
// body: available
// range: 0x38d5c-0x38e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038d5c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [10];
  undefined2 local_4e;
  undefined1 auStack_48 [19];
  undefined1 local_35;
  undefined1 auStack_30 [28];
  
  iVar2 = FUN_0002cdfa();
  uVar1 = DAT_00038ea0;
  if (iVar2 != 0) {
    FUN_0003661e(auStack_30);
    iVar3 = *param_1;
    FUN_0003665c(auStack_30,iVar2,0x2c,8,*(undefined1 *)(iVar3 + 0x3b4),0,
                 (int)*(short *)(iVar3 + 0x3b6),*(undefined1 *)(iVar3 + 0x3b8),
                 *(undefined1 *)(iVar3 + 0x3e0));
    FUN_0003856c(param_1,iVar2,(short)param_1[0x11],8,0x2c,*(undefined1 *)(*param_1 + 0x3b4));
    FUN_0003cbd4(auStack_58);
    FUN_0003cbf8(auStack_58,iVar2,*(undefined2 *)(*param_1 + 2));
    local_4e = (undefined2)param_1[0x11];
    local_35 = 0;
    iVar3 = FUN_0003ca58(auStack_58);
    uVar1 = DAT_00038ea0;
    if (iVar3 == 0) {
      iVar2 = FUN_000366e0(DAT_00038ea0);
      if (iVar2 != 0) {
        FUN_0002f9bc(uVar1);
        FUN_0002f9fc(3,DAT_00038ed4,*(undefined2 *)(*param_1 + 2));
      }
    }
    else {
      FUN_0003c38c(auStack_48,iVar2 + 0x22);
      uVar1 = _DAT_00038e74;
      iVar2 = FUN_000366e0(_DAT_00038e74);
      if (iVar2 != 0) {
        FUN_0002f9bc(uVar1);
        FUN_0002f9fc(6,s__PTP_MSG__TX_follow_up_00038e77 + 1);
      }
      iVar2 = FUN_000366e0(uVar1);
      if (iVar2 != 0) {
        FUN_0002f9bc(uVar1);
        FUN_0002f9fc(6,s_Seq_ID___d_00038e90,(short)param_1[0x11]);
      }
      FUN_00039a50(*(undefined2 *)(*param_1 + 2),auStack_30);
    }
    FUN_000365f4(auStack_30);
    return;
  }
  iVar2 = FUN_000366e0(DAT_00038ea0);
  if (iVar2 != 0) {
    FUN_0002f9bc(uVar1);
    FUN_0002f9fc(3,s_PTP_MSG__Could_not_create_follow_00038ea4);
  }
  return;
}

