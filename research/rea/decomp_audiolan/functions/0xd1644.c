// rea decompile_all
// name: FUN_000d1644
// address: 0xd1644
// body: available
// range: 0xd1644-0xd195b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd16b8 to 0x19f30c FUN_0019f30c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d1644(int param_1,undefined4 param_2,uint *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_60;
  uint uStack_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined1 auStack_48 [20];
  int iStack_34;
  undefined4 local_30;
  uint *puStack_2c;
  undefined1 *puStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  puStack_28 = param_4;
  if (param_3 == (uint *)0x0 || param_4 == (undefined1 *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,1);
    if (param_4 == (undefined1 *)0x0) goto LAB_000d16ac;
  }
  else {
    iVar4 = FUN_000b9aac();
    uVar3 = DAT_000d195c;
    uVar5 = *param_3;
    bVar7 = true;
    if (((((uVar5 & 1) != 0) || ((uVar5 & 4) != 0)) || ((uVar5 & 8) != 0)) || ((uVar5 & 0x10) != 0))
    {
      if ((uVar5 & 1) == 0) {
        uVar1 = *(undefined1 *)(iVar4 + 0x22e);
      }
      else {
        uVar1 = *param_4;
      }
      local_54 = DAT_000d195c;
      if ((*param_3 & 4) == 0) {
        FUN_00159a7c(&local_60,iVar4);
        FUN_001da4a8(&local_54,&local_60);
        FUN_001da44c(&local_60);
      }
      else {
        local_58 = &local_54;
        local_60 = (uint)(byte)param_4[6];
        uStack_5c = (uint)(byte)param_4[7];
        FUN_000028d8(auStack_48,DAT_000d1960,param_4[4],param_4[5]);
        FUN_001da458(local_58,auStack_48);
      }
      local_50 = uVar3;
      if ((*param_3 & 8) == 0) {
        FUN_0015a278(&local_60,iVar4);
        FUN_001da4a8(&local_50,&local_60);
        FUN_001da44c(&local_60);
      }
      else {
        local_58 = &local_50;
        local_60 = (uint)(byte)param_4[10];
        uStack_5c = (uint)(byte)param_4[0xb];
        FUN_000028d8(auStack_48,DAT_000d1960,param_4[8],param_4[9]);
        FUN_001da458(local_58,auStack_48);
      }
      local_4c = uVar3;
      if ((*param_3 & 0x10) == 0) {
        FUN_00159ac8(&local_60,iVar4);
        FUN_001da4a8(&local_4c,&local_60);
        FUN_001da44c(&local_60);
      }
      else {
        local_60 = (uint)(byte)param_4[0xe];
        uStack_5c = (uint)(byte)param_4[0xf];
        FUN_000028d8(auStack_48,DAT_000d1960,param_4[0xc],param_4[0xd]);
        FUN_001da458(&local_4c,auStack_48);
      }
      local_60 = local_4c;
      uStack_5c = 0;
      local_58 = (uint *)0x0;
      iVar6 = FUN_000bb42c(iVar4,uVar1,local_54,local_50);
      bVar7 = iVar6 != 0;
      if (!bVar7) {
        FUN_000028a4(DAT_000d1964);
      }
      FUN_001da44c(&local_4c);
      FUN_001da44c(&local_50);
      FUN_001da44c(&local_54);
    }
    if (((*param_3 & 2) != 0) && (iVar6 = FUN_000bb290(iVar4,param_4[1]), iVar6 == 0)) {
      FUN_000028a4(DAT_000d1968);
      bVar7 = false;
    }
    if ((*param_3 & 0x20) != 0) {
      cVar2 = param_4[0x10];
      if ((cVar2 == '\x10' || cVar2 == '\x18') || cVar2 == ' ') {
        iVar6 = FUN_000b9d64(iVar4);
        if (iVar6 != 0) goto LAB_000d18e8;
        FUN_000028a4(DAT_000d1970);
      }
      else {
        FUN_000028a4(DAT_000d196c);
      }
      bVar7 = false;
    }
LAB_000d18e8:
    if (((*param_3 & 0x40) != 0) &&
       (iVar6 = FUN_000ba52c(iVar4,*(undefined4 *)(param_4 + 0x14)), iVar6 == 0)) {
      FUN_000028a4(DAT_000d1974);
      bVar7 = false;
    }
    if (((*param_3 & 0x80) != 0) &&
       (iVar4 = FUN_000b9c98(iVar4,*(undefined4 *)(param_4 + 0x18)), iVar4 == 0)) {
      FUN_000028a4(DAT_000d1978);
      bVar7 = false;
    }
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_30,bVar7 ^ 1);
  }
  iVar4 = FUN_001da44c(param_4 + 0x18);
  FUN_0019f30c(iVar4 + -0x18);
LAB_000d16ac:
  FUN_0019f30c(param_3);
  return;
}

