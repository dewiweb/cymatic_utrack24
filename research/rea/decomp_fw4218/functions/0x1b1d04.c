// rea decompile_all
// name: FUN_001b1d04
// address: 0x1b1d04
// body: available
// range: 0x1b1d04-0x1b1daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001b1d04(undefined4 param_1,undefined4 *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *puStack_20;
  uint uStack_1c;
  int local_18;
  
  if (param_4 == 3) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  uVar5 = 1;
  local_24 = param_1;
  puStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  if (param_3 != 0) {
    if (iVar1 == 1) {
      FUN_00002898(s_offending_command__001b1db0);
      uVar4 = 0;
      if (param_3 != 0) {
        do {
          FUN_00002898(&DAT_001b1dc4,param_2[uVar4]);
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_3);
      }
      FUN_00002898(&DAT_001b1dc8);
    }
    iVar2 = FUN_00003d18(*param_2,DAT_001b1dcc);
    if ((iVar2 == 0) || (iVar2 = FUN_00003d18(*param_2,_DAT_001b1dd0), iVar2 == 0)) {
      local_28 = 0;
      iVar2 = FUN_001b2168(local_24,param_2 + 1,param_3 - 1,&local_28);
      if (0 < iVar2) {
        FUN_001b1e7c(local_24,iVar2,2);
        return iVar1;
      }
    }
    local_2c = (char *)0x0;
    uVar3 = FUN_0000328c(*param_2,&local_2c,0);
    if ((local_2c != (char *)0x0) && (*local_2c == '\0')) {
      uVar5 = uVar3;
    }
  }
  FUN_00002898(s_X______Available_Commands_____001b1dd1 + 3);
  FUN_001b1df0(local_24,0,uVar5,local_18);
  return iVar1;
}

