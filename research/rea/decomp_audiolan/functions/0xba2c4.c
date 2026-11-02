// rea decompile_all
// name: FUN_000ba2c4
// address: 0xba2c4
// body: available
// range: 0xba2c4-0xba38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ba2c4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 local_50;
  int *local_4c;
  code *pcStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [8];
  
  pcVar4 = (code *)*DAT_000ba38c;
  uVar5 = DAT_000ba38c[1];
  piVar3 = (int *)FUN_0017b3e4();
  uVar2 = DAT_000ba394;
  uVar1 = DAT_000ba390;
  if (piVar3 == param_1 + 1) {
    param_1 = (int *)((int)param_1 + ((int)uVar5 >> 1));
    if ((uVar5 & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *param_1);
    }
    (*pcVar4)(param_1,param_2);
    return;
  }
  local_3c = DAT_000ba394;
  local_50 = DAT_000ba390;
  local_38[0] = 0;
  local_4c = param_1;
  pcStack_48 = pcVar4;
  uStack_44 = uVar5;
  local_40 = param_2;
  FUN_0017a1c4(local_38,DAT_000ba398,0,0);
  thunk_EXT_FUN_00400100(local_38);
  (**(code **)(*param_1 + 0x2c))(param_1,&local_50,0xffffffff);
  thunk_EXT_FUN_004001ec(local_38,0xffffffff);
  local_3c = uVar2;
  local_50 = uVar1;
  FUN_0017a254(local_38);
  return;
}

