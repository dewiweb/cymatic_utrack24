// rea decompile_all
// name: FUN_001b8144
// address: 0x1b8144
// body: available
// range: 0x1b8144-0x1b8327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b8318 to 0x249194 FUN_00249194 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b8144(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_2 < 5) {
    bVar10 = param_2 == 1;
    iVar1 = DAT_001b8360 + param_2 * 0x80;
    uVar9 = *(uint *)(iVar1 + 0x144);
    uVar7 = *(uint *)(iVar1 + 0x148);
    if (param_2 < 2) {
      bVar10 = (*(uint *)(iVar1 + 0x140) & 0x80000000) == 0;
    }
    if (bVar10) {
      uVar8 = *(uint *)(DAT_001b836c + param_2 * 0x10);
    }
    else {
      uVar8 = *(uint *)(iVar1 + 0x140);
    }
    uVar2 = uVar7 & 0x3fff;
    if (uVar2 == 0) {
      uVar2 = 0x4000;
    }
    uVar3 = FUN_00249f54(*param_1);
    uVar3 = FUN_00249c78(0x3f800000,uVar3);
    uVar4 = FUN_00249f54((uVar9 & 0xfff) >> 8);
    uVar5 = FUN_00249f54(uVar9 & 0xf);
    uVar5 = FUN_00249c78(uVar5,uVar4);
    uVar6 = FUN_00249f54((uVar9 & 0x7fffff) >> 0x10);
    uVar5 = FUN_00249b8c(uVar6,uVar5);
    uVar5 = FUN_00249c78(uVar3,uVar5);
    uVar4 = FUN_00249c78(uVar5,uVar4);
    uVar11 = FUN_00249b28(uVar3);
    uVar12 = FUN_002492ec((uVar8 & 0x3fffff) >> 0x15);
    FUN_00249f54((uVar7 & 0x3ffff) >> 0x10);
    uVar13 = FUN_00249b28();
    uVar13 = FUN_00248c40((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,DAT_001b8364);
    uVar12 = FUN_00248c40((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUN_00249444((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    uVar3 = FUN_00248bd4();
    uVar6 = FUN_00249f54((uVar8 & 0x1fffff) >> 0xf);
    uVar5 = FUN_0024a000(uVar6,uVar5);
    uVar3 = FUN_00249b8c(uVar5,uVar3);
    uVar11 = FUN_00249b28(uVar4);
    uVar12 = FUN_002492ec(uVar8 & 0x7ff);
    uVar12 = FUN_0024a428((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0xfffffff5);
    uVar13 = FUN_002492ec((uVar8 & 0x7fff) >> 0xb);
    uVar12 = FUN_00248c40((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUN_00249444((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    uVar4 = FUN_00248bd4();
    uVar3 = FUN_00249b8c(uVar4,uVar3);
    uVar4 = FUN_00249f54(uVar2);
    FUN_0024a000(uVar4,uVar3);
    uVar11 = FUN_00249b28();
    FUN_00248dc0(0,DAT_001b8368,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar3 = FUN_00249194();
    return uVar3;
  }
  FUN_00002898(s_ERROR__dcoGetFrequency__No_DCO_a_001b8328);
  return 0;
}

