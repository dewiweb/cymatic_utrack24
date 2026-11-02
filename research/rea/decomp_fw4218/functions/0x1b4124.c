// rea decompile_all
// name: FUN_001b4124
// address: 0x1b4124
// body: available
// range: 0x1b4124-0x1b41b7 inclusive
// range: 0x1b465c-0x1b4677 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_001b4124(int param_1,int param_2)

{
  undefined1 auStack_c8 [52];
  undefined4 local_94 [4];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  local_94[0] = *(undefined4 *)(DAT_001b4480 + 0x108);
  local_94[1] = *(undefined4 *)(DAT_001b4480 + 0x10c);
  local_94[2] = *(undefined4 *)(DAT_001b4480 + 0x110);
  local_94[3] = *(undefined4 *)(DAT_001b4480 + 0x114);
  local_84 = *(undefined4 *)(DAT_001b4480 + 0x118);
  uStack_80 = *(undefined4 *)(DAT_001b4480 + 0x11c);
  uStack_7c = *(undefined4 *)(DAT_001b4480 + 0x120);
  uStack_78 = *(undefined4 *)(DAT_001b4480 + 0x124);
  local_74 = *(undefined4 *)(DAT_001b4480 + 0x128);
  uStack_70 = *(undefined4 *)(DAT_001b4480 + 300);
  uStack_6c = *(undefined4 *)(DAT_001b4480 + 0x130);
  uStack_68 = *(undefined4 *)(DAT_001b4480 + 0x134);
  local_64 = *(undefined4 *)(DAT_001b4480 + 0x138);
  FUN_000028cc(auStack_c8,&DAT_001b4484,local_94[*(byte *)(param_1 + 4)]);
  if (param_2 == 0) {
    FUN_00002898(auStack_c8);
  }
  else {
    FUN_001aab4c(param_2,auStack_c8);
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
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
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 != 0) {
    return;
  }
  FUN_00002898(&LAB_001b4684);
  return;
}

