// rea decompile_all
// name: FUN_001f2aa0
// address: 0x1f2aa0
// body: available
// range: 0x1f2aa0-0x1f2b45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001f2aa0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_388 [4];
  undefined1 auStack_384 [4];
  undefined2 local_380;
  undefined2 local_378;
  undefined2 local_376;
  int local_364;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 local_18;
  
  iVar2 = param_1 + DAT_001f2b48;
  iStack_24 = param_1;
  uStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  iVar1 = FUN_001f2b9c(param_1,param_2,iVar2,param_3 + 0x130,*(undefined2 *)(param_3 + 0x230),
                       *(undefined2 *)(param_3 + 0x232));
  if (iVar1 != 0) {
    FUN_001e9a9c(auStack_388,0,*_DAT_001f2b50,0x29,DAT_001f2b4c,0x20,0,0,0);
    local_380 = 0x5a0;
    local_378 = 0x18;
    local_376 = 0x18;
    *(undefined1 *)(local_364 + 4) = 1;
    *(undefined1 *)(local_364 + 5) = 0;
    FUN_000039e0(local_364 + 8,local_18,0x14);
    iVar1 = FUN_0003ef54(param_1,iVar1,param_1 + 10,auStack_384,0,iVar2);
    if (iVar1 == 0) {
      FUN_0002a1c6(0,s_r__ERROR__putLLQ___PutResourceRe_001f2b51 + 3);
      iVar1 = 0;
    }
    return iVar1;
  }
  FUN_0002a1c6(0,s_ERROR__putLLQ___putQuestion_001f2b80);
  return 0;
}

