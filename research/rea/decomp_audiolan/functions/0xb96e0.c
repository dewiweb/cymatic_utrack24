// rea decompile_all
// name: FUN_000b96e0
// address: 0xb96e0
// body: available
// range: 0xb96e0-0xb979f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000b96e0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 local_50;
  int *local_4c;
  code *pcStack_48;
  uint uStack_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [28];
  byte local_1c [4];
  
  pcVar6 = (code *)*DAT_000b97a0;
  uVar7 = DAT_000b97a0[1];
  piVar3 = (int *)FUN_0017b3e4();
  uVar2 = DAT_000b97a4;
  if (piVar3 != param_1 + 1) {
    local_50 = DAT_000b97a4;
    local_40 = (undefined2)param_2;
    local_4c = param_1;
    pcStack_48 = pcVar6;
    uStack_44 = uVar7;
    FUN_001bcd8c(&local_3c);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_50,0xffffffff);
    iVar4 = thunk_EXT_FUN_004001ec(auStack_38,0xffffffff);
    if (iVar4 == 0) {
      pbVar5 = local_1c;
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    bVar1 = *pbVar5;
    local_3c = DAT_000b97a8;
    local_50 = uVar2;
    FUN_0017a254(auStack_38);
    return (uint)bVar1;
  }
  param_1 = (int *)((int)param_1 + ((int)uVar7 >> 1));
  if ((uVar7 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *param_1);
  }
  uVar7 = (*pcVar6)(param_1,param_2);
  return uVar7;
}

