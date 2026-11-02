// rea decompile_all
// name: FUN_00039558
// address: 0x39558
// body: available
// range: 0x39558-0x3967f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039558(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [20];
  
  iVar2 = FUN_0003b6d6();
  uVar3 = DAT_00039680;
  if (iVar2 == 0) {
    iVar2 = FUN_000366e0(DAT_00039680);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(3,s_PTP_MSG__Could_not_create_sync_m_00039684);
    }
  }
  else {
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
    FUN_0003665c(auStack_44,iVar2,0x2c,0,*(undefined1 *)(iVar4 + 0x3b4),uVar3,
                 (int)*(short *)(iVar4 + 0x3b6),*(undefined1 *)(iVar4 + 0x3b8),
                 *(undefined1 *)(iVar4 + 0x3e0));
    sVar1 = (short)param_1[0x11] + 1;
    *(short *)(param_1 + 0x11) = sVar1;
    FUN_0003856c(param_1,iVar2,sVar1,0,0x2c,*(undefined1 *)(*param_1 + 0x3b4));
    FUN_0002b5dc(auStack_28);
    FUN_0003c38c(auStack_28,iVar2 + 0x22);
    uVar3 = _DAT_000396ac;
    iVar2 = FUN_000366e0(_DAT_000396ac);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(6,s__PTP_MSG__TX_sync_000396af + 1);
    }
    iVar2 = FUN_000366e0(uVar3);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(6,s_Seq_ID___d_000396c4,(short)param_1[0x11]);
    }
    iVar2 = FUN_00039a50(*(undefined2 *)(*param_1 + 2),auStack_44);
    FUN_000365f4(auStack_44);
    if ((**(char **)(*param_1 + 0x274) != '\0') && (iVar2 == 1)) {
      FUN_00038d5c(param_1);
      return;
    }
  }
  return;
}

