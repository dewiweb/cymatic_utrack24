// rea decompile_all
// name: FUN_00138ce8
// address: 0x138ce8
// body: available
// range: 0x138ce8-0x138e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00138ce8(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined1 auStack_38 [20];
  
  FUN_00178f04();
  iVar2 = FUN_001bf388();
  uVar10 = 0;
  if (iVar2 != 0) {
    uVar8 = FUN_000bd334(param_1 + 0x18,1);
    uVar8 = FUN_00002430((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),*(int *)(param_1 + 0xdc),
                         *(int *)(param_1 + 0xdc) >> 0x1f);
    iVar2 = FUN_000bdf40(param_1 + 0x18,*(undefined4 *)(param_1 + 0xe8));
    iVar2 = ((int)(*(int *)(param_1 + 0xf0) + ((uint)(*(int *)(param_1 + 0xf0) >> 0x1f) >> 0x1d)) >>
            3) * iVar2;
    uVar10 = 0;
    uVar8 = FUN_00002430((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),iVar2,0,iVar2,0);
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if ((uint)(uVar3 < 0x3d) <= (uint)-iVar7) {
      uVar8 = CONCAT44(iVar7 - (uint)(uVar3 < 0x3c),uVar3 - 0x3c);
    }
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar6 = (uint)uVar8;
    uVar9 = FUN_00002430(uVar6,iVar7,0xe10,0,iVar2,uVar10);
    uVar4 = (uint)(uVar9 >> 0x20);
    uVar3 = (uint)uVar9;
    lVar1 = (uVar9 & 0xffffffff) * 0xe10;
    uVar5 = (uint)lVar1;
    uVar8 = FUN_00002430(uVar6 - uVar5,
                         iVar7 - (uVar4 * 0xe10 + (int)((ulonglong)lVar1 >> 0x20) +
                                 (uint)(uVar6 < uVar5)),0x3c,0);
    FUN_000f4e84();
    uVar10 = FUN_000f4fc0();
    lVar1 = (uVar9 & 0xffffffff) * 0x3c;
    FUN_00095274(uVar10,(int)lVar1 + (int)uVar8,(int)((ulonglong)lVar1 >> 0x20));
    if (uVar4 == 0 && (0x17 < uVar3) <= uVar4) {
      FUN_000028cc(auStack_38,s_Rem__02lldh_02lldm_00138e6c,uVar3,uVar4,uVar8);
    }
    else {
      FUN_000028cc(auStack_38,s_Rem__lldhrs_00138e60,uVar3,uVar4);
    }
    uVar10 = FUN_0011eda0();
    uVar10 = FUN_0012066c(uVar10,auStack_38);
  }
  return uVar10;
}

