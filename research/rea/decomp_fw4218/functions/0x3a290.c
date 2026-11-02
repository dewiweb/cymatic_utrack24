// rea decompile_all
// name: FUN_0003a290
// address: 0x3a290
// body: available
// range: 0x3a290-0x3a3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003a290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6,int param_7,int param_8,uint param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint local_90;
  int local_8c;
  char local_84;
  uint local_80;
  int local_7c;
  char local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  int local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  int iStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_0003c060(&local_90);
  FUN_0003c060(auStack_60);
  FUN_0003c060(auStack_50);
  FUN_0003c68c(&local_90,param_2,local_1c);
  uVar1 = DAT_0003a3bc;
  if ((local_84 == '\0') || ((uint)(local_90 < 0xb) <= (uint)-local_8c)) {
    iVar2 = FUN_000366e0(DAT_0003a3bc);
    if (iVar2 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(4,s_PORT_DS__processPDelayRespMsg__T_0003a3c0);
    }
    return;
  }
  if ((param_7 == 0) || (param_8 == 0)) {
    local_68 = param_5;
    local_64 = param_6;
    FUN_0003c23c(auStack_50,&local_68);
    FUN_0003c68c(auStack_60,&local_90,auStack_50);
    FUN_0003c3d4(auStack_60,2);
  }
  else {
    FUN_0003c060(auStack_40,10 - local_90);
    FUN_0003c060(&local_80);
    local_68 = param_5 + param_9;
    local_64 = param_6 + param_10 + (uint)CARRY4(param_5,param_9);
    FUN_0003c23c(auStack_50,&local_68);
    FUN_0003c68c(&local_80,param_7,param_8);
    if ((local_74 == '\0') || ((uint)(local_80 < 0xb) <= (uint)-local_7c)) {
      iVar2 = FUN_000366e0(uVar1);
      if (iVar2 == 0) {
        return;
      }
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(4,s_PORT_DS__processPDelayRespMsg__T_0003a400);
      return;
    }
    FUN_0003c68c(auStack_40,&local_90,&local_80);
    FUN_0003c68c(auStack_60,auStack_40,auStack_50);
    FUN_0003c3d4(auStack_60,2);
  }
  FUN_0003c30c(auStack_60,auStack_30);
  iVar2 = FUN_0002b8d4(CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)),&local_70
                       ,param_1 + 0x10,auStack_30);
  if (iVar2 != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = local_6c;
  *(undefined4 *)(param_1 + 0x10) = local_70;
  return;
}

