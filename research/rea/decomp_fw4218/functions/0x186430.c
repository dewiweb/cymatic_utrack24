// rea decompile_all
// name: FUN_00186430
// address: 0x186430
// body: available
// range: 0x186430-0x186597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00186430(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined1 auStack_74 [44];
  undefined4 local_48;
  ushort local_44;
  int *piStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = 0;
  local_8c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_84 = 0;
  local_7e = 0;
  local_7c = 0;
  local_76 = 0;
  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = FUN_001727f0(auStack_74);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_0015111c(iVar1 + -0x1c);
  iVar1 = FUN_001beecc(param_5);
  if (iVar1 == 0) {
    iVar1 = FUN_0014d51c(&local_90,1);
    if (iVar1 == 0) {
      FUN_0014d48c(&local_90,param_5);
    }
  }
  local_48 = *(undefined4 *)(param_1[9] + 0x188);
  local_44 = (ushort)param_3 | 0x3704;
  FUN_00172810(auStack_74,param_4);
  uVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  local_98 = (*(byte *)(param_1 + 0x1b) & 3) >> 1;
  local_94 = *(byte *)(param_1 + 0x1b) & 1;
  iVar1 = FUN_0014ee30(&local_90,uVar2,local_30,param_6);
  if (iVar1 != 0) {
    local_98 = *(uint *)(iVar1 + 0x1c);
    iVar3 = (**(code **)(*param_1 + 0x7c))(param_1,&local_98);
    if (iVar3 != 0) {
      FUN_001a2410(param_1[9] + 0x4a0,&local_90,0);
    }
  }
  FUN_0015111c(&local_90);
  FUN_0014ca10(&local_7c);
  FUN_0014ca10(&local_84);
  return iVar3;
}

