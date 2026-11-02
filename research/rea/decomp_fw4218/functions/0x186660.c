// rea decompile_all
// name: FUN_00186660
// address: 0x186660
// body: available
// range: 0x186660-0x1867b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00186660(int *param_1,undefined4 param_2,ushort param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined2 local_66;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 auStack_5c [44];
  undefined4 local_30;
  ushort local_2c;
  
  local_74 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_6c = 0;
  local_66 = 0;
  local_64 = 0;
  local_5e = 0;
  iVar1 = FUN_001727f0(auStack_5c);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_0015111c(iVar1 + -0x1c);
  iVar1 = FUN_0014d51c(&local_78,1);
  if (iVar1 == 0) {
    FUN_0014d48c(&local_78,param_5);
  }
  local_30 = *(undefined4 *)(param_1[9] + 0x188);
  local_2c = param_3 | 0x3704;
  iVar3 = 0;
  FUN_00172810(auStack_5c,param_4);
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  local_80[0] = *(byte *)(param_1 + 0x1b) & 1;
  iVar1 = FUN_0014d6a8(&local_78,uVar2,param_2,(*(byte *)(param_1 + 0x1b) & 3) >> 1);
  if (iVar1 != 0) {
    local_80[0] = *(uint *)(iVar1 + 0x18);
    iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,local_80);
    if (iVar3 != 0) {
      FUN_001a2410(param_1[9] + 0x4a0,&local_78,0);
    }
  }
  FUN_0015111c(&local_78);
  FUN_0014ca10(&local_64);
  FUN_0014ca10(&local_6c);
  return iVar3;
}

