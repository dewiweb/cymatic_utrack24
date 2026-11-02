// rea decompile_all
// name: FUN_00191574
// address: 0x191574
// body: available
// range: 0x191574-0x19178b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00191574(int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6,
                 int *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *local_28;
  int local_24;
  
  if (param_5 < 8) {
    if (param_1[2] != 0) {
      param_1[1] = 0;
      FUN_001c6a64();
      param_1[2] = 0;
    }
    (**(code **)(*(int *)*param_1 + 500))((int *)*param_1,param_2,0x1a,0);
    return;
  }
  local_28 = param_7;
  uVar2 = 0;
  piVar4 = local_28;
  do {
    local_28 = piVar4;
    piVar4 = (int *)((int)local_28 + 1);
    if ((char)*local_28 != *(char *)(DAT_0019178c + uVar2)) {
      local_28 = piVar4;
      if (param_1[2] != 0) {
        param_1[1] = 0;
        FUN_001c6a64();
        param_1[2] = 0;
      }
      (**(code **)(*(int *)*param_1 + 500))((int *)*param_1,param_2,1,0);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  local_24 = *piVar4;
  local_28 = (int *)((int)local_28 + 5);
  if (param_4 == 0) {
    if (param_1[2] != 0) {
      param_1[1] = 0;
      FUN_001c6a64();
      param_1[2] = 0;
    }
    uVar1 = DAT_00191790;
    param_1[1] = local_24;
    iVar3 = FUN_001c6a94(local_24,uVar1);
    param_1[2] = iVar3;
  }
  if ((uint)param_1[1] < (param_3 + param_5) - 8) {
    if (param_1[2] != 0) {
      param_1[1] = 0;
      FUN_001c6a64();
      param_1[2] = 0;
    }
    (**(code **)(*(int *)*param_1 + 500))((int *)*param_1,param_2,0x13,0);
    return;
  }
  FUN_000039e0(param_1[2] + param_3,local_28,param_5 - 8);
  iVar3 = 0;
  if (param_6 != 0) {
    local_28 = (int *)param_1[2];
    local_24 = param_1[1];
    iVar3 = FUN_0018dee4(*param_1 + 0x80,&local_28,&local_24);
    if (iVar3 == 0x10) {
      iVar3 = FUN_0018dee4(*param_1 + 0x88,&local_28,&local_24);
    }
    if (param_1[2] != 0) {
      param_1[1] = 0;
      FUN_001c6a64();
      param_1[2] = 0;
    }
  }
  (**(code **)(*(int *)*param_1 + 500))((int *)*param_1,param_2,iVar3,param_4 + param_5 + -8);
  return;
}

