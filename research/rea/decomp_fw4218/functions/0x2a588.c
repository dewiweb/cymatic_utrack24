// rea decompile_all
// name: FUN_0002a588
// address: 0x2a588
// body: available
// range: 0x2a588-0x2a6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0002a588(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 *param_5,
            undefined4 param_6,char *param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 local_2c [4];
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  local_2c[0] = *DAT_0002a6b0;
  uStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (((param_4 & 1) != 0) && ((param_7 == (char *)0x0 || (*param_7 == '\0')))) {
    FUN_0002a1c6(0,s__MakeTCPConn__TLS_connection_bei_0002a6c3 + 1);
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_001e5788(DAT_0002a6b4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0002a1c6(0,s_ERROR__MakeTCP___memallocate_fai_0002a700);
  }
  else {
    FUN_001e58ac(puVar1,DAT_0002a6b4);
    *puVar1 = param_1;
    uVar2 = FUN_001e5a82(param_1,local_18,local_2c);
    puVar1[1] = uVar2;
    puVar1[0x8c1] = param_8;
    puVar1[0x8c0] = 0;
    puVar1[0x8c2] = param_9;
    uVar2 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
    puVar1[0x8c3] = *param_5;
    puVar1[0x8c4] = uVar2;
    puVar1[0x8c5] = uVar5;
    puVar1[0x8c6] = uVar6;
    puVar1[0x8c7] = param_5[4];
    puVar4 = (undefined2 *)((int)puVar1 + DAT_0002a6b8);
    *puVar4 = (short)param_6;
    puVar1[0x8c9] = 0;
    puVar4[4] = 0;
    puVar1[0x8cb] = 0;
    puVar1[0x8cc] = 0;
    *(undefined2 *)((int)puVar1 + DAT_0002a6bc) = local_2c[0];
    if (local_20 != 0) {
      puVar1[0x8c0] = local_1c - local_20;
      FUN_001e57d8(puVar1 + 2,local_20);
    }
    if (puVar1[1] == 0) {
      FUN_0002a1c6(0,s_MakeTCPConn__unable_to_create_TC_0002a724);
    }
    else {
      iVar3 = FUN_001e5a74(puVar1[1],param_5,param_6,param_7);
      if (iVar3 == DAT_0002a750) {
        FUN_001f9604(puVar1[1],puVar1,1,0);
        return puVar1;
      }
      if (iVar3 == DAT_0002a754) {
        return puVar1;
      }
      if (*_DAT_0002a758 != 0) {
        FUN_0002a1c6(3,s____MakeTCPConn__connection_faile_0002a759 + 3);
      }
      FUN_001e5a72(puVar1[1]);
      if (puVar1[0x8c9] != 0) {
        FUN_001e5828();
      }
    }
    FUN_001e5828(puVar1);
  }
  return (undefined4 *)0x0;
}

