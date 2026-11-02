// rea decompile_all
// name: FUN_0000ec58
// address: 0xec58
// body: available
// range: 0xec58-0xee2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000ec58(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_0000e9d0;
  iVar4 = DAT_0000e9d0 + 0x1d4;
  param_1[0x16] = DAT_0000e9d0 + 0x204;
  param_1[1] = iVar4;
  *param_1 = iVar5;
  iVar4 = param_1[2];
  FUN_001f00bc(iVar4 + 0x118);
  iVar5 = 1;
  if ((char)param_1[9] == '\x05' || (char)param_1[9] == '\x01') {
    uVar3 = 7;
  }
  else {
    uVar3 = 6;
  }
  *(undefined1 *)(param_1 + 9) = uVar3;
  FUN_0000a664();
  FUN_0000eb5c(param_1);
  *(undefined1 *)((int)param_1 + 0x359) = 1;
  *(undefined1 *)((int)param_1 + 0x35a) = 1;
  thunk_EXT_FUN_0040010c(param_1[0xd7]);
  (**(code **)(*param_1 + 0x1c0))(param_1);
  FUN_001df380(param_1[7]);
  FUN_001df938();
  FUN_000089f4(param_1[2],param_1);
  FUN_000b5ea4(param_1);
  FUN_0000e9ec(param_1);
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0xcc);
  }
  if (iVar1 == 0 || iVar5 == 0) {
    FUN_0000a6f8(param_1 + 1);
  }
  else {
    FUN_0000a6f8(param_1 + 1);
    FUN_001dae58(iVar5);
  }
  FUN_001f06d4(iVar4 + 0x118);
  piVar2 = (int *)param_1[0x19];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xfc))(piVar2,param_1);
    FUN_001f00bc(_DAT_0000f050);
    if (param_1[0x19] != 0) {
      FUN_001f06d4(_DAT_0000f050);
      FUN_001f00bc(_DAT_0000f050);
      if ((int *)param_1[0x19] != (int *)0x0) {
        iVar5 = (**(code **)(*(int *)param_1[0x19] + 0xc4))();
        if ((iVar5 == 0) && ((int *)param_1[0x19] != (int *)0x0)) {
          (**(code **)(*(int *)param_1[0x19] + 4))();
        }
        param_1[0x19] = 0;
      }
    }
    FUN_001f06d4(_DAT_0000f050);
  }
  if (param_1[0xc9] != 0) {
    FUN_001ad838();
    FUN_001eecc8();
    param_1[0xc9] = 0;
  }
  if (param_1[0xca] != 0) {
    FUN_000b5ea4(param_1);
  }
  iVar5 = param_1[0xd7];
  if (iVar5 != 0) {
    FUN_001ce98c();
    FUN_001eecc8(iVar5);
    param_1[0xd7] = 0;
  }
  iVar5 = FUN_00203b04(param_1 + 0x18);
  iVar5 = FUN_0000a740(iVar5 + -0x5c);
  return iVar5 + -4;
}

