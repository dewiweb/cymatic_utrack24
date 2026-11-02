// rea decompile_all
// name: FUN_000b7b00
// address: 0xb7b00
// body: available
// range: 0xb7b00-0xb7c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000b7b00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 local_e8;
  int *local_e4;
  code *pcStack_e0;
  uint uStack_dc;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined1 auStack_ac [28];
  byte local_90 [24];
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [44];
  
  pcVar6 = (code *)*DAT_000b7c34;
  uVar7 = DAT_000b7c34[1];
  uVar1 = FUN_00084308(auStack_50);
  piVar2 = (int *)FUN_0017b3e4();
  if (piVar2 == param_1 + 1) {
    param_1 = (int *)((int)param_1 + ((int)uVar7 >> 1));
    if ((uVar7 & 1) != 0) {
      pcVar6 = *(code **)(pcVar6 + *param_1);
    }
    uVar7 = (*pcVar6)(param_1,uVar1,param_3);
  }
  else {
    uVar3 = FUN_00084308(auStack_78,uVar1);
    uVar1 = DAT_000b7c38;
    local_e8 = DAT_000b7c38;
    local_e4 = param_1;
    pcStack_e0 = pcVar6;
    uStack_dc = uVar7;
    iVar4 = FUN_00084308(auStack_d8,uVar3);
    uVar3 = DAT_000b7c3c;
    *(undefined4 *)(iVar4 + 0x28) = DAT_000b7c3c;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    *(undefined4 *)(iVar4 + 0x24) = param_3;
    FUN_0017a1c4(iVar4 + 0x2c,DAT_000b7c40,0,0);
    thunk_EXT_FUN_00400100(iVar4 + 0x2c);
    FUN_00084514(auStack_78);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_e8,0xffffffff);
    iVar4 = thunk_EXT_FUN_004001ec(auStack_ac,0xffffffff);
    if (iVar4 == 0) {
      pbVar5 = local_90;
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    uVar7 = (uint)*pbVar5;
    local_e8 = uVar1;
    local_b0 = uVar3;
    FUN_0017a254(auStack_ac);
    FUN_00084514(auStack_d8);
  }
  FUN_00084514(auStack_50);
  return uVar7;
}

