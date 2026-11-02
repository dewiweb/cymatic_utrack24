// rea decompile_all
// name: FUN_0003ef54
// address: 0x3ef54
// body: available
// range: 0x3ef54-0x3f023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0003ef54(short *param_1,int param_2,short *param_3,char *param_4,undefined4 param_5,
                undefined1 *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  
  psVar5 = param_1;
  if (((*param_1 != 0) && ((*(byte *)(param_1 + 1) & 0x7f) >> 3 == 5)) &&
     (*(short *)(param_4 + 2) == 0x21)) {
    psVar5 = (short *)0x0;
  }
  if (*param_4 == '\0') {
    uVar4 = FUN_00025930(*(undefined2 *)(param_4 + 2));
    FUN_0002a1c6(0,s_lw__PutResourceRecordTTLWithLimi_0003f024._0_4_,*(undefined4 *)(param_4 + 0x1c)
                 ,uVar4);
    return param_2;
  }
  if (param_2 == 0) {
    FUN_0002a1c6(0,s_lw__PutResourceRecordTTLWithLimi_0003f024 + 4);
    return 0;
  }
  puVar1 = (undefined1 *)FUN_001f2704(param_1,param_2,param_6,*(undefined4 *)(param_4 + 0x1c));
  if ((puVar1 != (undefined1 *)0x0) && (puVar1 + 10 < param_6)) {
    *puVar1 = (char)((ushort)*(undefined2 *)(param_4 + 2) >> 8);
    puVar1[1] = (char)*(undefined2 *)(param_4 + 2);
    puVar1[2] = (char)((ushort)*(undefined2 *)(param_4 + 4) >> 8);
    puVar1[3] = (char)*(undefined2 *)(param_4 + 4);
    puVar1[4] = (char)((uint)param_5 >> 0x18);
    puVar1[5] = (char)((uint)param_5 >> 0x10);
    puVar1[6] = (char)((uint)param_5 >> 8);
    puVar1[7] = (char)param_5;
    iVar2 = FUN_001f2bd8(psVar5,puVar1 + 10,param_6,param_4);
    if (iVar2 != 0) {
      iVar3 = (iVar2 - (int)puVar1) + -10;
      puVar1[8] = (char)((uint)iVar3 >> 8);
      puVar1[9] = (char)iVar3;
      if (param_3 == (short *)0x0) {
        uVar4 = FUN_00025930(*(undefined2 *)(param_4 + 2));
        FUN_0002a1c6(0,DAT_0003f054,*(undefined4 *)(param_4 + 0x1c),uVar4);
      }
      else {
        *param_3 = *param_3 + 1;
      }
      return iVar2;
    }
  }
  return 0;
}

