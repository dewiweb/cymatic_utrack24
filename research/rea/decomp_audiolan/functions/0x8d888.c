// rea decompile_all
// name: FUN_0008d888
// address: 0x8d888
// body: available
// range: 0x8d888-0x8d9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0008d888(int *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = 0;
  local_20 = DAT_0008d9a4;
  (**(code **)(*param_1 + 0x1b8))(param_1,&local_20,0);
  FUN_001bb864(&local_20);
  param_1[0xbd] = DAT_0008d9a8;
  uVar3 = FUN_0000a674(param_1 + 1);
  param_1[0xbd] = (uVar3 & 0x3f) << 8 | param_1[0xbd] & 0xffffc0ffU;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  uVar1 = FUN_00009ee4(param_1 + 1);
  *(undefined1 *)((int)param_1 + 0x2fe) = uVar1;
  param_1[0xbf] = param_1[0xbf] & 0xffffffU | 0x90000000;
  param_1[0xc5] = 0;
  *(undefined1 *)((int)param_1 + 0x319) = param_3;
  FUN_0008dc38(param_1);
  if ((param_1[0xbf] & 0x3fffffffU) >> 0x18 == 0x10) {
    if (param_1[0xc0] == 0) {
      uVar1 = (undefined1)param_1[0xc];
    }
    else {
      uVar1 = (undefined1)param_1[0xd];
    }
    *(undefined1 *)((int)param_1 + 0x2fa) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar4 = FUN_00009ee4(param_1 + 1);
  iVar5 = FUN_0008dcb0(param_1,uVar4);
  if (iVar5 != 0) {
    *(undefined1 *)((int)param_1 + 0x32e) = param_2;
    bVar2 = FUN_0008dad0(param_1);
    *(byte *)(param_1 + 0x17) = bVar2 & *(byte *)(param_1 + 0x17);
    return;
  }
  return;
}

