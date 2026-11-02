// rea decompile_all
// name: FUN_00231b34
// address: 0x231b34
// body: available
// range: 0x231b34-0x231d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00231b34(int *param_1,int param_2,int param_3,byte *param_4,byte *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint local_28;
  
  iVar2 = FUN_001c1cac();
  if (iVar2 == 0) {
    for (; param_4 != param_5; param_4 = param_4 + 1) {
      iVar2 = FUN_00230ea4(param_1,*param_1);
      uVar1 = param_2 - iVar2 >> 1;
      uVar3 = FUN_0022d46c(param_1);
      if (uVar3 < uVar1) {
        uVar4 = FUN_0022d46c(param_1);
        iVar2 = FUN_00230ea4(param_1,*param_1);
        FUN_00173800(8,&DAT_00231d20,&DAT_00231d20,param_2 - iVar2 >> 1,uVar4);
      }
      if (param_2 == param_3) {
        uVar4 = FUN_0022d150(param_1);
        iVar2 = FUN_0020b4f4(uVar4,param_1);
        iVar5 = FUN_0022d150(param_1);
        uVar4 = FUN_00231e54(param_1,iVar2,iVar2);
        uVar6 = FUN_00208b10(uVar4);
        FUN_001c10ac(uVar6,*param_1,uVar1);
        iVar7 = FUN_0022d150(param_1);
        iVar7 = FUN_00230ea4(param_1,*param_1 + iVar7 * 2);
        iVar8 = FUN_00208b10(uVar4);
        FUN_001c10ac(iVar8 + uVar1 * 2 + (iVar2 - iVar5) * 2,*param_1 + uVar1 * 2,
                     iVar7 - param_3 >> 1);
        FUN_00231ebc(param_1);
        iVar7 = FUN_00208b10(uVar4);
        *param_1 = iVar7;
        param_2 = FUN_00230ea4(param_1,*param_1 + uVar1 * 2);
        param_3 = param_2 + (iVar2 - iVar5) * 2;
      }
      local_28 = (uint)*param_4;
      FUN_001c10c8(param_2,&local_28);
      param_2 = param_2 + 2;
    }
    if (param_2 != param_3) {
      iVar2 = FUN_00230ea4(param_1,*param_1);
      FUN_002319b0(param_1,param_2 - iVar2 >> 1,param_3 - param_2 >> 1,0,0);
    }
  }
  else {
    param_1 = (int *)FUN_00230eb0(param_1,param_2,param_3,param_4,param_5);
  }
  return param_1;
}

