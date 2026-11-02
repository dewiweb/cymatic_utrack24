// rea decompile_all
// name: FUN_0008ac28
// address: 0x8ac28
// body: available
// range: 0x8ac28-0x8ad57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008ac28(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  char local_58 [4];
  int *local_54;
  code *pcStack_50;
  uint uStack_4c;
  char local_48 [4];
  undefined4 local_44 [8];
  undefined1 auStack_24 [8];
  int *local_1c;
  
  (**(code **)(*param_1 + 8))(param_1);
  iVar5 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar5 == 0) {
    FUN_000028a4(DAT_0008ad60);
    FUN_0003b31c(_DAT_0008ad64);
    return;
  }
  puVar6 = (undefined4 *)FUN_0008b7dc(auStack_24,param_1 + 0x50);
  *puVar6 = DAT_0008ad58;
  (**(code **)(*local_1c + 0x34))(local_1c,param_1 + 0x45);
  FUN_0008b818(auStack_24);
  pcVar8 = (code *)*DAT_0008ad5c;
  uVar9 = DAT_0008ad5c[1];
  piVar7 = (int *)FUN_0017b3e4();
  uVar3 = s___x9__0D__WaitingResultCallback_0008ad66._6_4_;
  uVar1 = s___x9__0D__WaitingResultCallback_0008ad66._2_4_;
  if (piVar7 == param_1 + 1) {
    if ((uVar9 & 1) != 0) {
      pcVar8 = *(code **)(pcVar8 + *(int *)((int)param_1 + ((int)uVar9 >> 1)));
    }
    (*pcVar8)();
    return;
  }
  local_58[0] = s___x9__0D__WaitingResultCallback_0008ad66[2];
  local_58[1] = s___x9__0D__WaitingResultCallback_0008ad66[3];
  local_58[2] = s___x9__0D__WaitingResultCallback_0008ad66[4];
  local_58[3] = s___x9__0D__WaitingResultCallback_0008ad66[5];
  local_48[0] = s___x9__0D__WaitingResultCallback_0008ad66[6];
  local_48[1] = s___x9__0D__WaitingResultCallback_0008ad66[7];
  local_48[2] = s___x9__0D__WaitingResultCallback_0008ad66[8];
  local_48[3] = s___x9__0D__WaitingResultCallback_0008ad66[9];
  local_44[0] = 0;
  local_54 = param_1;
  pcStack_50 = pcVar8;
  uStack_4c = uVar9;
  FUN_0017a1c4(local_44,s___x9__0D__WaitingResultCallback_0008ad66 + 10,0,0);
  thunk_EXT_FUN_00400100(local_44);
  (**(code **)(*param_1 + 0x2c))(param_1,local_58,0xffffffff);
  thunk_EXT_FUN_004001ec(local_44,0xffffffff);
  uVar4 = s___x9__0D__WaitingResultCallback_0008ad66._6_4_;
  uVar2 = s___x9__0D__WaitingResultCallback_0008ad66._2_4_;
  s___x9__0D__WaitingResultCallback_0008ad66[6] = (char)uVar3;
  s___x9__0D__WaitingResultCallback_0008ad66[7] = SUB41(uVar3,1);
  s___x9__0D__WaitingResultCallback_0008ad66[8] = SUB41(uVar3,2);
  s___x9__0D__WaitingResultCallback_0008ad66[9] = SUB41(uVar3,3);
  local_48[0] = s___x9__0D__WaitingResultCallback_0008ad66[6];
  local_48[1] = s___x9__0D__WaitingResultCallback_0008ad66[7];
  local_48[2] = s___x9__0D__WaitingResultCallback_0008ad66[8];
  local_48[3] = s___x9__0D__WaitingResultCallback_0008ad66[9];
  s___x9__0D__WaitingResultCallback_0008ad66[2] = (char)uVar1;
  s___x9__0D__WaitingResultCallback_0008ad66[3] = SUB41(uVar1,1);
  s___x9__0D__WaitingResultCallback_0008ad66[4] = SUB41(uVar1,2);
  s___x9__0D__WaitingResultCallback_0008ad66[5] = SUB41(uVar1,3);
  local_58[0] = s___x9__0D__WaitingResultCallback_0008ad66[2];
  local_58[1] = s___x9__0D__WaitingResultCallback_0008ad66[3];
  local_58[2] = s___x9__0D__WaitingResultCallback_0008ad66[4];
  local_58[3] = s___x9__0D__WaitingResultCallback_0008ad66[5];
  s___x9__0D__WaitingResultCallback_0008ad66._2_4_ = uVar2;
  s___x9__0D__WaitingResultCallback_0008ad66._6_4_ = uVar4;
  FUN_0017a254(local_44);
  return;
}

