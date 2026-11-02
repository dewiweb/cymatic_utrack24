// rea decompile_all
// name: FUN_000b054c
// address: 0xb054c
// body: available
// range: 0xb054c-0xb067b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b054c(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 local_58;
  int *local_54;
  code *pcStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 local_44 [8];
  undefined1 auStack_24 [8];
  int *local_1c;
  
  (**(code **)(*param_1 + 8))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar3 == 0) {
    FUN_00002898(DAT_000b0684);
    FUN_0003ff7c(DAT_000b0688);
    return;
  }
  puVar4 = (undefined4 *)FUN_000b11ec(auStack_24,param_1 + 0x50);
  *puVar4 = DAT_000b067c;
  (**(code **)(*local_1c + 0x34))(local_1c,param_1 + 0x45);
  FUN_000b1228(auStack_24);
  pcVar6 = (code *)*DAT_000b0680;
  uVar7 = DAT_000b0680[1];
  piVar5 = (int *)FUN_001cfb1c();
  uVar2 = _DAT_000b0690;
  uVar1 = DAT_000b068c;
  if (piVar5 == param_1 + 1) {
    if ((uVar7 & 1) != 0) {
      pcVar6 = *(code **)(pcVar6 + *(int *)((int)param_1 + ((int)uVar7 >> 1)));
    }
    (*pcVar6)();
    return;
  }
  local_58 = DAT_000b068c;
  local_48 = _DAT_000b0690;
  local_44[0] = 0;
  local_54 = param_1;
  pcStack_50 = pcVar6;
  uStack_4c = uVar7;
  FUN_001ce8fc(local_44,s___WaitingResultCallback_000b0692 + 2,0,0);
  thunk_EXT_FUN_00400100(local_44);
  (**(code **)(*param_1 + 0x2c))(param_1,&local_58,0xffffffff);
  thunk_EXT_FUN_004001ec(local_44,0xffffffff);
  local_48 = uVar2;
  local_58 = uVar1;
  FUN_001ce98c(local_44);
  return;
}

