// rea decompile_all
// name: FUN_00038954
// address: 0x38954
// body: available
// range: 0x38954-0x38ad9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038954(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [20];
  
  iVar2 = FUN_0003b6d6();
  uVar3 = DAT_00038adc;
  if (iVar2 != 0) {
    FUN_0003661e(auStack_44);
    if ((*(char *)(*param_1 + 0x3b4) == '\x01') &&
       (((*(char *)(*param_1 + 0x3ba) == '\0' || (iVar4 = FUN_0002b650(), iVar4 == 1)) ||
        ((*(char *)(*param_1 + 0x3ba) == '\x02' && (*(char *)(*param_1 + 0x3b9) == '\x01')))))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    iVar4 = *param_1;
    FUN_0003665c(auStack_44,iVar2,0x2c,1,*(undefined1 *)(iVar4 + 0x3b4),uVar3,
                 (int)*(short *)(iVar4 + 0x3b6),*(undefined1 *)(iVar4 + 0x3b8),
                 *(undefined1 *)(iVar4 + 0x3e0));
    sVar1 = (short)param_1[0x12] + 1;
    *(short *)(param_1 + 0x12) = sVar1;
    FUN_0003856c(param_1,iVar2,sVar1,1,0x2c,*(undefined1 *)(*param_1 + 0x3b4));
    if (**(char **)(*param_1 + 0x274) == '\x01') {
      lVar5 = FUN_0003b672(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      lVar5 = lVar5 - *(longlong *)(*param_1 + 0x3d8);
      uVar6 = FUN_0003b5e8((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
      *(char *)(iVar2 + 8) = (char)uVar6;
      *(char *)(iVar2 + 9) = (char)((ulonglong)uVar6 >> 8);
      *(char *)(iVar2 + 10) = (char)((ulonglong)uVar6 >> 0x10);
      *(char *)(iVar2 + 0xb) = (char)((ulonglong)uVar6 >> 0x18);
      *(char *)(iVar2 + 0xc) = (char)((ulonglong)uVar6 >> 0x20);
      *(char *)(iVar2 + 0xd) = (char)((ulonglong)uVar6 >> 0x28);
      *(char *)(iVar2 + 0xe) = (char)((ulonglong)uVar6 >> 0x30);
      *(char *)(iVar2 + 0xf) = (char)((ulonglong)uVar6 >> 0x38);
    }
    FUN_0002b5dc(auStack_28);
    FUN_0003c38c(auStack_28,iVar2 + 0x22);
    uVar3 = _DAT_00038b14;
    iVar2 = FUN_000366e0(_DAT_00038b14);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(6,s__PTP_MSG__TX_delay_request__00038b17 + 1);
    }
    iVar2 = FUN_000366e0(uVar3);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(6,s_Sequence_ID___d_00038b34,(short)param_1[0x12]);
    }
    FUN_00039a50(*(undefined2 *)(*param_1 + 2),auStack_44);
    FUN_000365f4(auStack_44);
    return;
  }
  iVar2 = FUN_000366e0(DAT_00038adc);
  if (iVar2 != 0) {
    FUN_0002f9bc(uVar3);
    FUN_0002f9fc(3,s_PTP_MSG__Could_not_create_delay_r_00038ae0);
  }
  return;
}

