// rea decompile_all
// name: FUN_000d1e7c
// address: 0xd1e7c
// body: available
// range: 0xd1e7c-0xd1ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d1e7c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  FUN_000cf680(param_1,0xc);
  iVar1 = FUN_000b9aac();
  FUN_00159a7c(&local_34,iVar1);
  iVar2 = FUN_0018e28c(local_34,&local_30);
  FUN_001da44c(&local_34);
  if (iVar2 == 0) {
    local_30 = 0;
  }
  FUN_0015a278(&local_34,iVar1);
  iVar2 = FUN_0018e28c(local_34,&local_2c);
  FUN_001da44c(&local_34);
  if (iVar2 == 0) {
    local_2c = 0;
  }
  FUN_00159ac8(&local_34,iVar1);
  iVar2 = FUN_0018e28c(local_34,&local_28);
  FUN_001da44c(&local_34);
  if (iVar2 == 0) {
    local_28 = 0;
  }
  FUN_0015a1e0(&local_34,iVar1);
  iVar2 = FUN_0018e28c(local_34,&local_24);
  FUN_001da44c(&local_34);
  if (iVar2 == 0) {
    local_24 = 0;
  }
  FUN_0015a22c(&local_34,iVar1);
  iVar2 = FUN_0018e28c(local_34,local_20);
  FUN_001da44c(&local_34);
  if (iVar2 == 0) {
    local_20[0] = 0;
  }
  piVar3 = *(int **)(param_1 + 0x118);
  FUN_00159b14(&local_34,iVar1);
  (**(code **)(*piVar3 + 0x88))
            (piVar3,param_2,*(undefined1 *)(iVar1 + 0x22e),&local_30,&local_2c,&local_28,&local_24,
             local_20,&local_34);
  FUN_001da44c(&local_34);
  return;
}

