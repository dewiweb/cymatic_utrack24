// rea decompile_all
// name: FUN_000552b4
// address: 0x552b4
// body: available
// range: 0x552b4-0x554df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000552b4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_40 [20];
  int aiStack_2c [2];
  
  iVar1 = FUN_001d226c();
  if (iVar1 == 0) {
    return 1;
  }
  iVar6 = param_1 + 0x24;
  aiStack_2c[0]._0_1_ = s_iI_Config_Name_000554e0[0];
  aiStack_2c[0]._1_1_ = s_iI_Config_Name_000554e0[1];
  aiStack_2c[0]._2_1_ = s_iI_Config_Name_000554e0[2];
  aiStack_2c[0]._3_1_ = s_iI_Config_Name_000554e0[3];
  FUN_001f00bc(iVar6);
  iVar2 = FUN_00052500(param_1,s_iI_Config_Name_000554e0 + 4);
  if (iVar2 == 0) {
    FUN_001f06d4(iVar6);
    FUN_00013244(s_ERROR___Name__not_found_00055504);
    FUN_002329f0(aiStack_2c);
    return 0;
  }
  FUN_00232a4c(aiStack_2c,iVar2 + 8);
  FUN_001f06d4(iVar6);
  uVar7 = *(uint *)(aiStack_2c[0] + -4);
  uVar3 = FUN_00003738(iVar1);
  if (*(uint *)(aiStack_2c[0] + -4) < uVar7) {
    uVar7 = *(uint *)(aiStack_2c[0] + -4);
  }
  uVar5 = uVar7;
  if (uVar3 <= uVar7) {
    uVar5 = uVar3;
  }
  iVar2 = FUN_00003658(aiStack_2c[0],iVar1,uVar5);
  if (iVar2 != 0 || uVar7 != uVar3) {
    FUN_00013290(s_ERROR__Configuration_names_diffe_00055520,iVar1,aiStack_2c[0]);
    FUN_002329f0(aiStack_2c);
    return 0;
  }
  iVar2 = param_1 + 0x24;
  FUN_001f00bc(iVar2);
  iVar1 = FUN_00052500(param_1,s_Config_Version_000554f0);
  if (iVar1 == 0) {
    FUN_001f06d4(iVar2);
    FUN_00013244(s_ERROR___Version__not_found_00055554);
    FUN_002329f0(aiStack_2c);
    return 0;
  }
  FUN_00232a4c(aiStack_2c,iVar1 + 8);
  FUN_001f06d4(iVar2);
  iVar1 = FUN_000032fc(aiStack_2c[0],0);
  iVar2 = FUN_001d1f50();
  if (iVar2 == -1) {
    FUN_00013290(s_ERROR__Converting_from_version___00055570,iVar1);
    FUN_002329f0(aiStack_2c);
    return 0;
  }
  if ((0 < iVar2) && (iVar2 != iVar1)) {
    FUN_000028cc(auStack_40,&DAT_00055500);
    uVar4 = FUN_0005565c(param_1,param_1,s_Config_Version_000554f0,auStack_40);
    FUN_002329f0(aiStack_2c);
    return uVar4;
  }
  FUN_002329f0(aiStack_2c);
  return 1;
}

