// rea decompile_all
// name: FUN_0017da80
// address: 0x17da80
// body: available
// range: 0x17da80-0x17dc97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017da80(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_68;
  undefined2 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  
  sVar1 = *(short *)((int)param_1 + 0x3e);
  if (sVar1 == 1) {
    iVar3 = param_1[0x17];
    uVar2 = *(undefined2 *)((int)param_1 + 0x5a);
    FUN_001beccc(param_1 + 0x20);
    FUN_001beccc(param_1 + 0x1e);
    FUN_001beccc(param_1 + 0x1c);
    local_5c = FUN_001beccc(param_1 + 0x14);
    (**(code **)(*param_1 + 0x4c))(auStack_30,param_1);
    (**(code **)(*(int *)param_1[0x12] + 0xac))(auStack_40);
    local_68 = (uint)*(ushort *)(param_1 + 0x16);
    local_64 = uVar2;
    local_60 = (short)iVar3;
    FUN_00196f30(param_2,auStack_40,auStack_30,local_5c);
    return 1;
  }
  if (sVar1 == 2) {
    uVar4 = FUN_001beccc(param_1 + 0x14);
    (**(code **)(*param_1 + 0x4c))(auStack_40,param_1);
    (**(code **)(*(int *)param_1[0x12] + 0xac))(&local_68);
    FUN_00196fe8(param_2,&local_68,auStack_40,uVar4);
  }
  else {
    if (sVar1 != 4) {
      return 0;
    }
    uVar4 = FUN_001beccc(param_1 + 0x14);
    (**(code **)(*param_1 + 0x4c))(auStack_48,param_1);
    (**(code **)(*(int *)param_1[0x12] + 0xac))(auStack_58);
    FUN_00196e5c(param_2,auStack_58,auStack_48,uVar4);
  }
  return 1;
}

