// rea decompile_all
// name: FUN_001b3ba0
// address: 0x1b3ba0
// body: available
// range: 0x1b3ba0-0x1b3c59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001b3c28) */
/* WARNING: Removing unreachable block (ram,0x001b3c1e) */

void FUN_001b3ba0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  int local_24;
  
  iVar1 = *DAT_001b3c5c;
  FUN_001f00bc(iVar1 + 0x8c);
  iVar2 = FUN_001bc46c(param_1 + 0x14);
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (iVar2 = FUN_001c7218(*(int *)(param_1 + 0x14),DAT_001b3c64,DAT_001b3c60,0xffffffff),
     iVar2 != 0)) {
    local_30 = DAT_001b3c68;
    local_38 = DAT_001b3c68;
    local_34 = 0;
    FUN_00063c44(&local_38,param_1 + 0x48);
    uVar4 = *(undefined4 *)(iVar2 + 0x54);
    uVar3 = FUN_001b3b56(param_1);
    FUN_000d6278(auStack_2c,uVar3);
    iVar2 = DAT_001b3c6c;
    if (local_34 != 0) {
      iVar2 = local_34;
    }
    if (local_24 == 0) {
      local_24 = *DAT_001b3c70;
    }
    FUN_001d255c(uVar4,local_24,iVar2);
    FUN_0020458c(auStack_2c);
    local_38 = local_30;
    FUN_001eecc8(local_34);
  }
  FUN_001f06d4(iVar1 + 0x8c);
  return;
}

