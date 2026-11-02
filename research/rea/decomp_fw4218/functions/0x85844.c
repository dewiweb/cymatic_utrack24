// rea decompile_all
// name: FUN_00085844
// address: 0x85844
// body: available
// range: 0x85844-0x85a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00085844(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  FUN_000f8ee0();
  uVar1 = FUN_000f6910();
  FUN_000f4e84();
  local_2c = FUN_000f5144();
  iVar2 = FUN_001b6f00(local_2c);
  local_38 = param_1;
  for (iVar7 = 0; iVar7 < 0x18; iVar7 = iVar7 + 1) {
    FUN_00083fac(param_1);
    uVar3 = FUN_00249f24();
    FUN_001282fc(&local_34,0,0);
    pcVar4 = (char *)FUN_0023bdc8(param_2 + 0x74,iVar7);
    if (*pcVar4 != '\0') {
      uVar8 = false;
      if (iVar2 == 0) {
        iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
        uVar3 = FUN_00249b8c(uVar3,*(undefined4 *)(iVar5 + 4));
        iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
        uVar8 = *(int *)(iVar5 + 8) == 1;
        if ((bool)uVar8) {
          uVar3 = DAT_00085a04;
        }
      }
      iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
      FUN_00249e08(*(undefined4 *)(iVar5 + 0x10),0);
      if (!(bool)uVar8) {
        iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
        local_34 = *(int *)(iVar5 + 0x10);
      }
      iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
      if (*(int *)(iVar5 + 0x14) != 0) {
        local_30._0_2_ = CONCAT11(1,(undefined1)local_30);
      }
      iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
      if (*(int *)(iVar5 + 0x18) != 0) {
        iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
        local_30 = CONCAT31(local_30._1_3_,(char)*(undefined4 *)(iVar5 + 0x18));
      }
      iVar5 = FUN_0023bdc8(param_2 + 0x74,iVar7);
      FUN_00069f60(uVar1,*(uint *)(iVar5 + 0xc) & 0xff,&local_34,0);
    }
    uVar6 = FUN_00178f04();
    iVar5 = FUN_00177c28(uVar6,iVar7 + 1,uVar3);
    if (iVar5 == 0) {
      uVar9 = FUN_00249b28(uVar3);
      uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00002898(DAT_00085a08,uVar3,(int)uVar9,uVar3);
      local_38 = iVar7;
    }
  }
  return CONCAT44(local_34,local_38);
}

