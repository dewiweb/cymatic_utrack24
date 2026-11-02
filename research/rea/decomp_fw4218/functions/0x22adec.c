// rea decompile_all
// name: FUN_0022adec
// address: 0x22adec
// body: available
// range: 0x22adec-0x22ae79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0022adec(int *param_1,int param_2,code *param_3,uint param_4,undefined4 param_5)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 local_50;
  int iStack_4c;
  code *pcStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [7];
  short local_1c [4];
  
  piVar3 = (int *)FUN_001cfb1c();
  uVar2 = DAT_0022ae80;
  if (piVar3 == param_1 + 1) {
    piVar3 = (int *)(((int)param_4 >> 1) + param_2);
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *piVar3);
    }
    iVar4 = (*param_3)(piVar3,param_5);
    return iVar4;
  }
  local_50 = DAT_0022ae7c;
  local_40 = param_5;
  local_3c = DAT_0022ae80;
  local_38[0] = 0;
  uVar6 = DAT_0022ae7c;
  iStack_4c = param_2;
  pcStack_48 = param_3;
  uStack_44 = param_4;
  FUN_001ce8fc(local_38,DAT_0022ae84,0,0,DAT_0022ae7c);
  thunk_EXT_FUN_00400100(local_38);
  (**(code **)(*param_1 + 0x2c))(param_1,&local_50,0xffffffff);
  iVar4 = thunk_EXT_FUN_004001ec(local_38,0xffffffff);
  if (iVar4 == 0) {
    psVar5 = local_1c;
  }
  else {
    psVar5 = (short *)0x0;
  }
  sVar1 = *psVar5;
  local_3c = uVar2;
  local_50 = uVar6;
  FUN_001ce98c(local_38);
  return (int)sVar1;
}

