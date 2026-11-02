// rea decompile_all
// name: FUN_000c8004
// address: 0xc8004
// body: available
// range: 0xc8004-0xc8077 inclusive
// range: 0xc8648-0xc87db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_000c8004(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int aiStack_a0 [16];
  undefined1 auStack_60 [28];
  int iStack_44;
  
  *param_3 = 0;
  param_3[1] = 0;
  puVar1 = DAT_000c87dc;
  param_3[2] = 0;
  param_3[3] = 0;
  FUN_00065b7c(param_3 + 4,*puVar1);
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  FUN_00189f24(0,param_3 + 0x1c);
  switch(param_2) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = FUN_000c7d34(param_1,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00003860(auStack_60,0x38);
  iVar2 = FUN_000c7b08(param_1,7,auStack_60,aiStack_a0);
  if ((iVar2 != 0) && (*(uint *)(param_3 + 0xc) < (uint)(iStack_44 + aiStack_a0[0]))) {
    FUN_000028a4(DAT_000c87f4);
    return 0;
  }
  uVar3 = *(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10);
  if (uVar3 < (uint)(*(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18))) {
    iVar2 = *(int *)(param_3 + 0x10) +
            ((*(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x18)) - uVar3);
    param_3[0x10] = (char)iVar2;
    param_3[0x11] = (char)((uint)iVar2 >> 8);
    param_3[0x12] = (char)((uint)iVar2 >> 0x10);
    param_3[0x13] = (char)((uint)iVar2 >> 0x18);
  }
  *param_3 = (char)param_2;
  param_3[1] = (char)((uint)param_2 >> 8);
  param_3[2] = (char)((uint)param_2 >> 0x10);
  param_3[3] = (char)((uint)param_2 >> 0x18);
  FUN_000c87f8(param_1,param_2,param_3 + 4);
  return 1;
}

