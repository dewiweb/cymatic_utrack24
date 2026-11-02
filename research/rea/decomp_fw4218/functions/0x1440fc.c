// rea decompile_all
// name: FUN_001440fc
// address: 0x1440fc
// body: available
// range: 0x1440fc-0x144277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001440fc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  
  local_18 = (undefined1 *)0x0;
  local_14 = (undefined1 *)0x0;
  local_10 = 0;
  piVar1 = (int *)FUN_000c63b8();
  iVar2 = (**(code **)(*piVar1 + 0x98))(piVar1,(int)*(short *)(param_1 + 0x3c),&local_18);
  if (iVar2 == 0) {
    FUN_00002898(DAT_001442b8);
    FUN_00173a54(local_18,local_10 - (int)local_18,0);
    return 0;
  }
  if (local_18 == local_14) {
    FUN_00002898(s_UsbAsyncOutputBlockProcessor__in_00144278);
    FUN_00173a54(local_18,local_10 - (int)local_18,0);
    return 0;
  }
  puVar4 = local_18;
  if (local_14 != local_18) {
    do {
      uVar3 = FUN_000c63b8();
      iVar2 = FUN_000c29ac(uVar3,*puVar4,0);
      if (iVar2 == 2) {
        uVar3 = FUN_000c63b8();
        iVar2 = FUN_000c4ed8(uVar3,*puVar4,0,param_1 + 0x3e);
        if (iVar2 == 0) {
          FUN_00002898(DAT_001442bc,*puVar4);
          FUN_00173a54(local_18,local_10 - (int)local_18,0);
          return 0;
        }
        break;
      }
      puVar4 = puVar4 + 1;
    } while (local_14 != puVar4);
  }
  if (*(char *)(param_1 + 0x3e) != -1) {
    FUN_00173a54(local_18,local_10 - (int)local_18,0);
    return 1;
  }
  FUN_00002898(DAT_001442c0);
  FUN_00173a54(local_18,local_10 - (int)local_18,0);
  return 0;
}

