// rea decompile_all
// name: FUN_0014ce4c
// address: 0x14ce4c
// body: available
// range: 0x14ce4c-0x14cf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14cec0 to 0x10e518 FUN_0010e518 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x14cf20 to 0x10e518 FUN_0010e518 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014ce4c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_0010e728(param_1,s_V__0014cf38);
  puVar3 = (undefined1 *)((ulonglong)uVar5 >> 0x20);
  uVar1 = (undefined4)uVar5;
  if (DAT_0014cf40 < param_2) {
    return;
  }
  if (0x1100 < param_2) {
    FUN_0010e620(uVar1,param_2 >> 0xc);
    FUN_0010e518(uVar1,&DAT_0014cf44);
    FUN_0010e6f4(uVar1,(param_2 & 0xfff) >> 8);
    FUN_0010e518(uVar1,&DAT_0014cf48);
    FUN_0010e6f4(uVar1,param_2 & 0xff);
    FUN_0010e518(uVar1,&DAT_0014cf4c);
    return;
  }
  if (param_2 < 0x100) {
    uVar4 = param_2;
    if (param_2 == 0x19) {
      uVar4 = 1;
    }
    if (param_2 >= 0x19) {
      puVar3 = (undefined1 *)0x14cf58;
    }
    uVar2 = DAT_0014cf40;
    if (0x19 < param_2) {
      uVar2 = uVar4 - 0x1e;
    }
    if (param_2 < 0x19) {
      if (uVar4 < 5) {
        return;
      }
      uVar2 = uVar4 + 6;
      puVar3 = (undefined1 *)0x14cf60;
    }
    else if (param_2 == 0x19) goto LAB_0014cef8;
    uVar4 = uVar2 & 0xff;
  }
  else {
    puVar3 = &LAB_0014cf50;
    uVar4 = param_2 - 0xff & 0xff;
  }
LAB_0014cef8:
  if (puVar3 != (undefined1 *)0x0) {
    FUN_0010e240(uVar1);
    FUN_0010e6f4(uVar1,uVar4);
    FUN_0010e518(uVar1,&DAT_0014cf4c);
    return;
  }
  return;
}

